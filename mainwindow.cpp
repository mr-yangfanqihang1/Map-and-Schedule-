#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"recsets.h"
#include "node.h"
#include "Edge.h"
#include "Maps.h"
#include "Datas.h"
#include "public.h"
#include "Navigation.h"
#include "classWidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pixmap=QPixmap("./Resources/B_Map.png");
    pixmap.scaled(750, 1050, Qt::KeepAspectRatio);
    ui->map->setPixmap(pixmap);
    newlabel = new QLabel(ui->map);
    QPixmap bupt("./Resources/bupt.jpg");
    newlabel->resize(10,10);
    newlabel->setPixmap(bupt);
    connect(timer1, &QTimer::timeout, this, &MainWindow::movelabel);

    clock_back=QPixmap("./Resources/clock.jpg");
    clock_back.scaled(320, 240, Qt::KeepAspectRatio);
    font.setPointSize(16);
    font.setFamily("华文行楷");
    font.setBold(false);
    setFont(font);

    connect(timer2, &QTimer::timeout,this,&MainWindow::paint);
    timer2->start(1000);
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_StartBox_activated(int index)
{
    st=index;

}



void MainWindow::on_EndBox_activated(int index)
{
    ed=index;
    switch (index) {
    case 51: f1 = 4; break;
    case 52: f1 = 4; break;
    case 56: f1 = 4; break;
    case 54: f1 = 1; break;
    case 55: f1 = 1; break;
    case 57: f1 = 1; break;
    case 63: f1 = 3; break;
    case 66: f1 = 3; break;
    case 67: f1 = 3; break;
    case 64: f1 = 2; break;
    case 68: f1 = 2; break;
    case 69: f1 = 2; break;
    }
}


void MainWindow::on_NavigationBox_activated(int index)
{
    switch(index){
    case 1:mod1=0,mod2=1;break;
    case 2:mod1=1,mod2=1;break;
    case 3:mod1=0,mod2=0;break;
    case 4:mod1=1,mod2=0;break;
    }
}
void MainWindow::on_ClassNum_editingFinished()
{
    //将教室号转为数字
    f2 = std::stoi(ui->ClassNum->text().toStdString());
    f2 %= 100;
}

void MainWindow::on_StartSearch_clicked()
{
    Answer a = Navigation::GetInstance(mod1,mod2)->search(st,ed);
    std::vector<Node> v = a.get_path();
    path.clear();
    for(std::vector<Node>::iterator it = v.begin();it!= v.end();it ++){
        QPoint p;
        p.setX(it->get_x());
        p.setY(it->get_y());
        path.push_back(p);
    }

    this->showShortPath(path); 
    showClassRoom();
}


void MainWindow::on_StopSearch_clicked()
{
    // 停止定时器
    if (timer1) {
        timer1->stop();
    }
}

void MainWindow::showShortPath(vector<QPoint> path)
{
    ui->map->setPixmap(pixmap);
    QPixmap temp = pixmap;
    temp.scaled(750, 1050, Qt::KeepAspectRatio);
    QPainter painter(&temp);
    painter.setPen(QPen(Qt::blue, 10, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    for(int i=0;i<path.size()-1;i++){
        painter.drawLine(path[i],path[i+1]);
    }
    ui->map->setPixmap(temp);
    newlabel->setGeometry(path[0].x()/2,path[0].y()/2,10,10);
    timer1->start(500); // 设置定时器
}

void MainWindow::showClassRoom()
{
    QWidget *classroom = new QWidget();
    classroom->resize(1200, 800);
    recsets set(f1, f2 - 1);
    vector<int> ans = set.getrecsets();
    if (f1 == 1) {
        // 加载图片
        QPixmap image("./Resources/first.jpg");
        if (image.isNull()) {
            qDebug("Failed to load image");
        }
        drawClassRoom(&image, ans);
        QLabel* label = new QLabel(classroom);
       // label->resize(1200, 800);
        label->setPixmap(image);
        label->setScaledContents(true); // 保持图像比例
    }
    if (f1 == 2) {
        // 加载图片
        QPixmap image("./Resources/second.jpg");
        if (image.isNull()) {
            qDebug("Failed to load image");
        }
        drawClassRoom(&image, ans);
        QLabel* label = new QLabel(classroom);
        label->setPixmap(image);
        label->setScaledContents(true); // 保持图像比例
    }
    if (f1 == 3) {
        // 加载图片
        QPixmap image("./Resources/third.jpg");
        if (image.isNull()) {
            qDebug("Failed to load image");
        }
        drawClassRoom(&image, ans);
        QLabel* label = new QLabel(classroom);
        label->setPixmap(image);
        label->setScaledContents(true); // 保持图像比例
    }
    if (f1 == 4) {
        // 加载图片
        QPixmap image("./Resources/forth.jpg");
        if (image.isNull()) {
            qDebug("Failed to load image");
        }
        drawClassRoom(&image, ans);
        QLabel* label = new QLabel(classroom);
        label->setPixmap(image);
        label->setScaledContents(true); // 保持图像比例
    }
    classroom->show();
}

void MainWindow::drawClassRoom(QPixmap *img, vector<int> ans)
{
    QPainter painter(img);
    qDebug() << " 1 ";
    painter.fillRect(ans[0], ans[1], ans[2], ans[3], Qt::red);
    // 设置字体和颜色
    QFont font("Arial", 12); // 定义字体
    painter.setFont(font); // 设置字体

    painter.setPen(Qt::black); // 设置文本颜色
    // 写字在矩形中
    painter.drawText(ans[0], ans[1], ans[2], ans[3], Qt::AlignCenter, "here!"); // 在矩形内居中绘制文字

}


void MainWindow::movelabel()
{
    static int i=1;
    if(path[i].x()/2 == newlabel->pos().x()&& path[i].y()/2 == newlabel->pos().y())i++;
    if (i == path.size()) {
        timer1->stop();
        i = 1;
    }
    if(path[i].y()/2==newlabel->pos().y()){
        if(path[i].x() / 2> newlabel->pos().x())
        newlabel->move(newlabel->pos().x()+5,newlabel->pos().y());
        else newlabel->move(newlabel->pos().x() -5, newlabel->pos().y());
    }
    else if(path[i].x()/2==newlabel->pos().x()){
        if(path[i].y() / 2 > newlabel->pos().y())
        newlabel->move(newlabel->pos().x(),newlabel->pos().y()+5);
        else  newlabel->move(newlabel->pos().x(), newlabel->pos().y() - 5);
    }
}


void MainWindow::paint()
{

    //绘制钟表
    ui->clock->setPixmap(clock_back);
    QPixmap temp=clock_back;
    temp.scaled(320, 240, Qt::KeepAspectRatio);
    QPainter painter(&temp);
    painter.setRenderHint(QPainter::Antialiasing,true);//启用抗锯齿

    int radius = 10;
    int arcHeight = 5;

    painter.save();
    painter.translate(120,200);//坐标原点
    gradientArc(&painter, radius, 0, 360, arcHeight);
    drawClockDial(&painter);
    drawHourHand(&painter);
    drawMinuteHand(&painter);
    drawsecondHand(&painter);

    painter.restore();
    ui->clock->setPixmap(temp);

}




const QPoint MainWindow::hourHand[4] = {
    QPoint(5, 2),
    QPoint(0, -8),
    QPoint(-5, 2),
    QPoint(0, -33)
};


const QPoint MainWindow::minuteHand[4] = {
    QPoint(3, 3),
    QPoint(0, -10),
    QPoint(-3, 3),
    QPoint(0, -60)
};


const QPoint MainWindow::secondHand[4] = {
    QPoint(2, 3),
    QPoint(0, 10),
    QPoint(-2, 3),
    QPoint(0, -90)
};


void MainWindow::drawHourHand(QPainter *painter)
{
    QTime time = QTime::currentTime();//获取时间
    QRadialGradient gradient(225,210,210);
    gradient.setColorAt(0, qRgb(225,210,210));
    painter->setBrush(gradient);//重绘的指针颜色
    painter->setPen(qRgb(215,180,180));//指针边界颜色
    painter->save();//保存坐标
    painter->rotate(30.0*(time.hour()+time.minute()/60.0));//偏移角度
    painter->drawConvexPolygon(hourHand,4);//绘制时针
    painter->restore();//坐标复位
}


void MainWindow::drawMinuteHand(QPainter *painter)
{
    QTime time = QTime::currentTime();
    QRadialGradient gradient(225,220,220);
    gradient.setColorAt(0, qRgb(225,220,220));
    painter->setBrush(gradient);
    painter->setPen(qRgb(215,180,180));
    painter->save();
    painter->rotate(6.0*(time.minute()+time.second()/60.0));
    painter->drawConvexPolygon(minuteHand,4);
    painter->restore();
}


void MainWindow::drawsecondHand(QPainter *painter)
{
    QTime time = QTime::currentTime();
    QRadialGradient gradient(225,230,230);
    gradient.setColorAt(0, qRgb(225,230,230));
    painter->setBrush(gradient);
    painter->setPen(qRgb(215,180,180));
    painter->save();
    painter->rotate(6.0*time.second());
    painter->drawConvexPolygon(secondHand,4);
    painter->restore();
}




void MainWindow::drawClockDial(QPainter *painter)
{
    QPen pen1;
    pen1.setWidth(4);
    pen1.setColor(qRgb(204,197,193));
    hourHandPen = pen1;

    QPen pen2;
    pen2.setWidth(2);
    pen2.setColor(qRgb(220,195,195));
    minuteHandPen = pen2;

    for (int i = 1; i <=60; ++i)
    {
        painter->save();
        painter->rotate(6*i);
        if (i % 5 == 0)
        {
            painter->setPen(hourHandPen);
            painter->drawLine(0, -95, 0, -85);


            painter->setPen(qRgb(220,195,195));
            painter->drawText(-10, -83, 20, 20,
                              Qt::AlignHCenter | Qt::AlignTop,QString::number(i/5));
        }
        else
        {
            painter->setPen(minuteHandPen);
            painter->drawLine(0, -95, 0, -88);
        }
        painter->restore();
    }
}


void MainWindow::gradientArc(QPainter *painter, int radius, int startAngle, int angleLength, int arcHeight) {
    QRadialGradient gradient(0, 0, radius);
    gradient.setColorAt(0, qRgb(255,225,255));
    painter->setBrush(gradient);


    QRectF rect(-radius, -radius, radius<<1, radius<<1);
    QPainterPath path;
    path.arcTo(rect, startAngle, angleLength);


    QPainterPath subPath;
    subPath.addEllipse(rect.adjusted(arcHeight, arcHeight, -arcHeight, -arcHeight));
    path -= subPath;


    painter->setPen(Qt::NoPen);
    painter->drawPath(path);
}






