#include "classWidget.h"
#include "ui_classWidget.h"
#include "readFile.h"

classWidget::classWidget(QWidget* parent)
    : QWidget(parent)
    , ui(new Ui::classWidget)
{

    ui->setupUi(this);
    setBG=ui->background;
    getweekBox=this->ui->setweek;
    getweekWidget=this->ui->gridWidget;
    table = ui->tableWidget;
    table = ui->tableWidget;
    spinBox=ui->spinBox;
    QPushButton *input=ui->input;
    connect(setBG,&QPushButton::clicked,this,&classWidget::setbackground);
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);    // 禁止最大化按钮
    setFixedSize(this->width(),this->height());// 禁止拖动窗口大小
    readSetting();// 必须放table初始化后
    getweekWidget->close();
    connect(input,&QPushButton::clicked,this,&classWidget::getText);    
    readFile(name,locat,color);
    spinBox->setValue(week);
    connect(spinBox,&QSpinBox::valueChanged,this,&classWidget::weekChanged);
    table->resize(parent->width(),parent->height());
    for(int i=0;i<14;i++){
        table->setRowHeight(i, this->height()/16);
    }
    for(int i=0;i<7;i++){
        table->setColumnWidth(i, this->width()/9);
    }
    connect(table, &QTableWidget::cellClicked, this, &classWidget::onCellClicked);
    this->changeItem(table);
    connect(table, &QTableWidget::cellChanged, this, &classWidget::onCellChanged);
}

void classWidget::onCellClicked(int row, int column){
        QString ret=locat[week-1][row][column];
        qDebug()<<ret;
}
void classWidget::onCellChanged(int row, int column){
       disconnect(table, &QTableWidget::cellChanged, this, &classWidget::onCellChanged);
        qDebug()<<"CellChanged"<<"\n"<<row<<column;
       QString str=table->item(row,column)->text();
    if(name[week-1][row][column].isEmpty()&& ! str.isEmpty()){   //用户输入日程
        QString str=table->item(row,column)->text();
        color [week-1][row][column]=colors[num%10];
        name[week-1][row][column]=str;
        num++;   
    }
    else if(!name[week-1][row][column].isEmpty()){          //用户删除或修改日程
         //文件删除：
        deleteLines("./resource.txt",name[week-1][row][column]);
        if(str.isEmpty()) color [week-1][row][column].setRgb(0, 0, 0, 0);                     //恢复透明
        name[week-1][row][column]=str;
    }
    else return;
    QString time = QString("%1").arg(row+1, 2, 10, QChar('0'));         //转为03形式而不是3
    writefile("\n"+str+"\n\n\n\n\n"+"第"+QString::number(week)+"-"+QString::number(week)+"周 "+QString::number(column+1)+"["+time+"-"+time+"]\n上课地点:",1);
    table->item(row,column)->setBackground(colors[num%10]);//绘制
    connect(table, &QTableWidget::cellChanged, this, &classWidget::onCellChanged);   //绘制
}


void classWidget:: deleteLines(QString filename, QString target) {
    qDebug()<<target;
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;
    qDebug()<<"open successfully";
    QTextStream in(&file);
    QStringList lines;
    while (!in.atEnd()) {
        QString line = in.readLine();
        lines.append(line);
    }
        qDebug()<<"add successfully";
    file.close();

    int index = lines.indexOf(target);
    if (index != -1) {
        qDebug()<<"find successfully";
        int end = index + 7;
        if (end > lines.size()) end = lines.size();
        for (int i = index; i < end; i++) {
            lines.removeAt(index);
        }
    }
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);
    for (const QString &line : lines) {
        out << "\n"<<line;
    }
    qDebug()<<"delete successfully";
}

void classWidget::weekChanged(int value){
     disconnect(table, &QTableWidget::cellChanged, this, &classWidget::onCellChanged);   //取消连接
    week=value;
    tableHeader();
    //qDebug()<<week;
    classWidget::changeItem(this->table);
     connect(table, &QTableWidget::cellChanged, this, &classWidget::onCellChanged);
}
void classWidget::changeItem(QTableWidget *table){
    for (int i=0;i<14;i++){
        for (int j=0;j<7;j++) {
            QTableWidgetItem *newItem = new QTableWidgetItem;
            newItem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
            if(color[week-1][i][j].isValid()){
                newItem->setBackground(color[week-1][i][j]);
                if(locat[week-1][i][j].isEmpty()) newItem->setText(name[week-1][i][j]+locat[week-1][i][j]);//保持居中
                else newItem->setText(name[week-1][i][j]+"\n"+locat[week-1][i][j]);
            }
            table->setItem(i, j, newItem);
        }
    }
}

void classWidget::writeSetting(int beginline,QString *BG){
    QFile path("./week.txt");
    QDateTime current = QDateTime::currentDateTime();
    QLocale locale(QLocale::English);  // 使用英文
    QString DateStr =QString::number(week)+locale.toString(current, "\ndddd yyyy.M.d");
       // 年、月、日和星期几
    if (!path.open(QIODevice::ReadWrite | QIODevice::Text))
         return;
    else{
        QTextStream out(&path);
 //       out.setGenerateByteOrderMark(true);
        if(!beginline){
            out <<DateStr;
            path.close();
            return;       //只写Datastr,简化程序同时防止访问空指针
        }
        else {
            QTextStream in(&path);
            QStringList lines;
            QString line;
            for(int i = 0; i < 2; ++i) {
                if(!in.readLineInto(&line)) {
                break;
                }
            lines.append(line);     //记录原有数据
            }
            path.resize(0);         //清空文件
            QTextStream out(&path);
            out << lines.join("\n") << "\n" << *BG;           //添加新数据
            path.close();
        }
    }
}
void classWidget::readSetting(){
    QFile path("./week.txt");
    qDebug()<<path.size();
    if (path.open(QIODevice::ReadOnly | QIODevice::Text)&& path.size() !=0) {
        qDebug()<<"file size:"<<path.size();
        QTextStream in(&path);
        week=in.readLine().toInt();
        beginweek=week;
        QString Datestr = in.readLine();
        QString BGstr = in.readLine();
        QString Textstr=in.readLine();
        QDate currentDate = QDate::currentDate();
                qDebug()<<BGstr+"\n"+Textstr;

        // 解析 begin
        QStringList parts = Datestr.split(" ");
        if (parts.size() != 2) {
            // str 的格式不正确
            return;
        }
        QString dateStr = parts[1];

        // 将年、月和日转换为数字
        QStringList dateParts = dateStr.split(".");
        if (dateParts.size() != 3) {
            // dateStr 的格式不正确
            return;
        }
        int year = dateParts[0].toInt();
        int month = dateParts[1].toInt();
        int day = dateParts[2].toInt();
        qDebug()<<year<<month<<day;
        // 创建日期对象
        QDate beginDate(year, month, day);

        // 将两个日期都转换为周一
        while (beginDate.dayOfWeek() != Qt::Monday) {
            beginDate = beginDate.addDays(-1);
        }
        while (currentDate.dayOfWeek() != Qt::Monday) {
            currentDate = currentDate.addDays(-1);
        }

        // 计算两个日期之间的天数，并将其转换为周数
        int daysBetween = beginDate.daysTo(currentDate);
        int weeksadd = daysBetween / 7;
        week+= weeksadd;
        qDebug()<<week;
        tableHeader();
        qDebug()<<BGstr+"\n"+Textstr;
        table->setStyleSheet(BGstr+"\n"+Textstr);
    }
    else firstopen=1;
    path.close();
}

classWidget::~classWidget()
{
    delete ui;
}


void classWidget::getText() {
    QDialog dialog(this);
    dialog.setWindowTitle("请从教务中复制课程表");
    QVBoxLayout layout(&dialog);
    QTextEdit textEdit(&dialog);
    layout.addWidget(&textEdit);
    QDialogButtonBox buttonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, Qt::Horizontal, &dialog);
    layout.addWidget(&buttonBox);
    QObject::connect(&buttonBox, &QDialogButtonBox::accepted, &dialog, &QDialog::accept);
    QObject::connect(&buttonBox, &QDialogButtonBox::rejected, &dialog, &QDialog::reject);
    dialog.setFixedSize(400,400);
    if (dialog.exec() == QDialog::Accepted) {
        writefile(textEdit.toPlainText());
    }
    getweekWidget->show();
    QDialogButtonBox* exit = getweekWidget->findChild<QDialogButtonBox*>("exit");
    if (exit) {
        connect(exit, &QDialogButtonBox::accepted, this, &classWidget::getweek);
        //qDebug()<<week;

    }

}


void classWidget::getweek(){
    week=getweekBox->value();
    spinBox->setValue(week);
    writeSetting();                //写入文件
    beginweek=week;
    tableHeader();                  //更新表头
}
void classWidget::writefile(QString str,int flag) {
    QFile path("./resource.txt");
    if(!flag){
        path.open(QIODevice::WriteOnly | QIODevice::Text);}
    else {path.open(QIODevice::WriteOnly| QIODevice::Text | QIODevice::Append);}
        QTextStream out(&path);
    //if(firstopen) out.setGenerateByteOrderMark(true);
        out <<str;
        path.close();
    readFile(name,locat,color);
    qDebug()<<name[week+1][7][0];
}
void classWidget::setbackground(){
    QString fileName = QFileDialog::getOpenFileName(this, "打开图片", "", "Images (*.png *.xpm *.jpg)");
    qDebug()<<fileName;
    if(!fileName.isEmpty()){
        fileName="border-image: url("+fileName+");\nfont: 700 9pt \"Microsoft YaHei UI\";";
        qDebug()<<fileName;
        table->setStyleSheet(fileName);
        writeSetting(2,&fileName);            //写入文件
    }
}
void classWidget::tableHeader(){
    QDate currentDate = QDate::currentDate();
    int currentDayOfWeek = currentDate.dayOfWeek();
    int addweek=week-beginweek;
    QDate startOfWeek = currentDate.addDays(7*addweek+1 - currentDayOfWeek);
    QDate endOfWeek = currentDate.addDays(7*addweek+7 - currentDayOfWeek);
    QStringList LIST;
    QLocale locale = QLocale(QLocale::Chinese);
    qDebug()<<endOfWeek<<"isOK";
    for (QDate date = startOfWeek; date <= endOfWeek; date = date.addDays(1)) {
        LIST << locale.toString(date, "dddd\nM.d");
        qDebug() << locale.toString(date, "dddd\nM.d");
    }
    table->setHorizontalHeaderLabels (LIST);
        qDebug()<<"isOK";
}


