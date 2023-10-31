#include"readFile.h"
QList<QString> reverse(QList<QString> list){
    QList<QString> reversedList = list;
    std::reverse(reversedList.begin(), reversedList.end());
    return reversedList;
}

readFile::readFile(QString name[18][14][7],QString locat[18][14][7],QColor color[18][14][7])
{
    num=0;  
    // 打开文件
    QFile file("./resource.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "无法打开文件";
        return;
    }
    else if(file.size()==0){
        qDebug()<<"文件为空";
        return;
    }
    // 创建文本流
    QTextStream in(&file);
    in.setEncoding(QStringConverter::Utf8);  // 设置编码为 UTF-8
    // 读取文件
    QString line;
    while (!in.atEnd()) {
        line = in.readLine();
        if (line.contains("20:10～20:55")) {         //有效信息的前一行
            break;
        }
    }
    while (!in.atEnd()) {
        ClassName = in.readLine();
        qDebug()<<ClassName;
        for (int i = 0; i < 5 && in.readLineInto(&line); ++i);
        qDebug()<<line;
        in.readLineInto(&ClassLocat);
        ClassLocat = ClassLocat.mid(5);// 删除最前面的5个字符
        qDebug()<<ClassLocat;
        QStringList parts =reverse(line.split(" "));             //根据空格将字符串分成两个,并且反转数组
        for (const auto& part : parts) {                //上课时间:第3-10,12-18周 4[03-04-05-06]节
            if (part.indexOf("[") != -1 && part.indexOf("]") != -1) {             //后一块
                Date=part[0].digitValue();              //转为int
                int start = part.indexOf("[") + 1;          // "["后面的位置
                int end = part.indexOf("]");                // "]"的位置
                if (start < end) {  // 确保子字符串在范围内
                    //qDebug() << Date<<"课程时间: " << part.mid(start, end - start);
                    ClassBegin=part.mid(start, end - start).left(2).toInt();        //先提取字符串，在将字符串中前两个字转为数字
                    ClassEnd = part.mid(start, end - start).right(2).toInt();
//                    qDebug()<<ClassBegin<<ClassEnd;
                }
            }
            else if (part.indexOf("第") != -1 && part.indexOf("周") != -1) {       //前一块
                int start = part.indexOf("第") + 1;          // "第"后面的位置
                int end = part.indexOf("周");                // "周"的位置
                if (start < end) {                          // 确保子字符串在范围内
                    QString weekstr=part.mid(start, end - start);  //3-10,12-18
                    WeekList=weekstr.split(',');                   //3-10|12-18
                    for(auto &i:WeekList){
//                        qDebug() <<i;
//                        WeekBegin=WeekStr.front().digitValue();       //会有两位数
//                        WeekEnd=WeekStr.back().digitValue();
                        QStringList Week=i.split('-');              //3 |10 | 12| 18
                        qDebug() <<Week[0]<<Week[1];
                        WeekBegin=Week[0].toInt();
                        WeekEnd  =Week[1].toInt();
                        qDebug() <<WeekBegin<<WeekEnd;
                        inputData(name,locat,color);
                    }
                }
            }
        }
        num++;
    }
    file.close();
}


void readFile::inputData(QString name[18][14][7],QString locat[18][14][7],QColor color[18][14][7]){
    for(int i=WeekBegin-1;i<=WeekEnd-1;i++){
        for(int j=ClassBegin-1;j<=ClassEnd-1;j++){
            name[i][j][Date-1]=ClassName;
            locat[i][j][Date-1]=ClassLocat;
            if(!name[i][j][Date-1].isEmpty()){
                color[i][j][Date-1]=colors[num%10];
            }
        }
    }
    qDebug()<<"finished";
}
    //传统法取数字
//    QString numberStr; // 用于构建每个数字

//    for (QChar ch : line) {
//        if (ch.isDigit()) {
//            numberStr.append(ch);
//        } else {
//            if (!numberStr.isEmpty()) {
//                numbers.push_back(numberStr.toInt());
//                numberStr.clear();
//            }
//        }
//    }
//    // 添加最后一个数字（如果存在）
//    if (!numberStr.isEmpty()) {
//        numbers.push_back(numberStr.toInt());
//    }



//正则表达式法取数字
//        QRegularExpression re("\\d+"); // 正则表达式，匹配一个或多个数字
//        QRegularExpressionMatchIterator i = re.globalMatch(line);
//        while (i.hasNext()) {
//            QRegularExpressionMatch match = i.next();
//            numbers.push_back(match.captured(0).toInt());// 将找到的数字转换为整数并添加到列表中
//        }


//    weekBegin=numbers[0];
//    weekEnd=numbers[1];
//    date=numbers[2];
//    classBegin=numbers[3];
//    classEnd=numbers.back();            //有的是2节课、有的是3节课
//    for (int i : numbers) {
//        qDebug() << i;
//    }
//    if(numbers.size()>=7){

//        weekBegin=numbers[2];
//        weekEnd=numbers[3];
//        date=numbers[4];
//        classBegin=numbers[5];
//        classEnd=numbers.back();
//    }
//    for(int i=weekBegin-1;i<=weekEnd-1;i++){
//        for(int j=classBegin-1;j<=classEnd-1;j++){

//            name[i][j][date-1]=QString::fromStdWString(className);
//            locat[i][j][date-1]=QString::fromStdWString(classLocat);
//            if(!name[i][j][date-1].isEmpty()){
//                color[i][j][date-1]=colors[num%10];
//            }
//        }
//    }
//    num++;

//    numbers.clear();



