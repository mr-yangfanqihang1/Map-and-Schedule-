#ifndef READFILE_H
#define READFILE_H
#include<QFile>
#include<QDebug>
#include <locale>
#include <codecvt>
#include<QString>
#include<QColor>
#include<QRegularExpression>
using namespace std;

class readFile
{
public:
    readFile(QString name[18][14][7],QString locat[18][14][7],QColor color[18][14][7]);
    void inputData(QString name[18][14][7],QString locat[18][14][7],QColor color[18][14][7]);
private:
    std::vector<int> numbers;
    int WeekBegin,WeekEnd,Date,ClassBegin, ClassEnd;
    QString ClassName,ClassLocat;
    QStringList WeekList;
    int num=0;
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

#endif // READFILE_H
