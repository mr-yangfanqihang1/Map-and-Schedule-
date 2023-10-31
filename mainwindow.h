#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <vector>
#include <QMainWindow>
#include <QPainter>
#include <QTimer>
#include <QWidget>
#include <QPixmap>
#include <QPen>
#include <QFont>
#include <QRadialGradient>
#include <QPainterPath>
#include <QTime>
#include <QLabel>
#include <iostream>
#include <string.h>
#include <QDir>
#include<string>
using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_StartBox_activated(int index);
    void on_EndBox_activated(int index);
    void on_NavigationBox_activated(int index);
    void on_StartSearch_clicked();
    void on_StopSearch_clicked();
    void showShortPath(vector<QPoint> path);
    void paint();
    void movelabel();
    void on_ClassNum_editingFinished();
    void showClassRoom();
    void drawClassRoom(QPixmap* img, vector<int> ans);

private:
    Ui::MainWindow *ui;
    QPixmap pixmap;//地图
    QPixmap clock_back;
    static const QPoint hourHand[4];
    static const QPoint minuteHand[4];
    static const QPoint secondHand[4];
    QPen hourHandPen;
    QPen minuteHandPen;
    QFont font;
    QTimer *timer1 = new QTimer(this);//绘制移动的timer
    QTimer *timer2 = new QTimer(this);//绘制钟表的timer
    void gradientArc(QPainter *painter, int radius, int startAngle, int angleLength, int arcHeight);
    int mod1,mod2,st,ed;
    vector<QPoint> path;
    QLabel* newlabel;//导航图标
    int f1, f2;//教室导航

protected:
    void drawHourHand(QPainter *painter);
    void drawMinuteHand(QPainter *painter);
    void drawsecondHand(QPainter *painter);
    void drawClockDial(QPainter *painter);

};
#endif // MAINWINDOW_H
