#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
#include<QDebug>
#include <QDateTime>
#include <QLocale>
#include<QSpinBox>
#include<QPushButton>
#include<QTableWidget>
#include<QTableWidgetItem>
#include<QLabel>
#include <QFont>
#include <QTextEdit>
#include<QInputDialog>
#include <QDialogButtonBox>
#include <QVBoxLayout>
#include <QDialog>
#include <QFile>
#include <QTextStream>
#include<QStringConverter>
#include<QFileDialog>
#include<QRegularExpression>
QT_BEGIN_NAMESPACE
namespace Ui { class classWidget; }
QT_END_NAMESPACE

class classWidget : public QWidget
{
    Q_OBJECT

public:
    classWidget(QWidget *parent = nullptr);
    ~classWidget();
    void changeItem(QTableWidget *table);
    void writefile(QString str,int flag=0);
    void getText();
    void writeSetting(int beginline=0,QString *BG=nullptr);
    void readSetting();
    void tableHeader();
    void deleteLines(QString filename, QString target);
private slots:
    void weekChanged(int value);
    void onCellClicked(int row, int column);
    void onCellChanged(int row, int column);
    void getweek();
    void setbackground();

private:
    int num=0;
    bool firstopen=0;
    Ui::classWidget* ui;
    int week = 1,beginweek=1;
    QTableWidget *table;
    QPushButton *setBG;
    QSpinBox *spinBox,*getweekBox;
    QColor color[18][14][7];
    QString name[18][14][7];
    QString locat[18][14][7];
    QWidget *getweekWidget;
    QColor colors[10] = {
        QColor(254, 240, 240),
        QColor(230, 244, 255),
        QColor(253, 235, 221),
        QColor(222, 251, 247),
        QColor(238, 237, 255),
        QColor(251, 234, 204),
        QColor(255, 249, 201),
        QColor(251, 238, 255),
        QColor(255, 238, 248),
        QColor(227, 255, 241)
    };
};

#endif // WIDGET_H
