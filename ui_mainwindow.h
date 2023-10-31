/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include"classWidget.h"
QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QTabWidget *tabWidget;
    QWidget *navigationpage;
    QLabel *map;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *TipInfo1;
    QComboBox *StartBox;
    QLabel *TipInfo3;
    QComboBox *EndBox;
    QLabel *TipInfo4;
    QComboBox *NavigationBox;
    QLabel *TipInfo2;
    QLineEdit *ClassNum;
    QPushButton *StopSearch;
    QPushButton *StartSearch;
    QLabel *clock;
    QWidget *daily_routine;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1000, 1200);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(700, 700));
        MainWindow->setMaximumSize(QSize(1000, 1200));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        tabWidget = new QTabWidget(MainWindow);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 0, 1000, 1200));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget {  \n"
"    border-bottom: 1px solid #C6D0DA;  \n"
"    padding: 5px;  \n"
"    background-color: #F9F9F9;  \n"
"}  \n"
"  \n"
"QTabWidget::tab-bar {  \n"
"    alignment: center;  \n"
"    background-color: #F9F9F9;  \n"
"}  \n"
"  \n"
"QTabWidget::tab {  \n"
"    border: 1px solid transparent;  \n"
"    background-color: #F9F9F9;  \n"
"    color: #333;  \n"
"    padding: 5px;  \n"
"    font-size: 14px;  \n"
"}  \n"
"  \n"
"QTabWidget::tab:selected {  \n"
"    border-color: #C6D0DA;  \n"
"    background-color: #FFF;  \n"
"    color: #333;  \n"
"}\n"
"QTabBar::tab\n"
"{\n"
"    min-width:100px;\n"
"    color: white;\n"
"	background-color: rgb(181, 223, 255);\n"
"    border: 0px solid;\n"
"    border-top-left-radius: 10px;\n"
"    border-top-right-radius: 10px;\n"
"    padding:5px;\n"
"}\n"
" \n"
"QTabBar::tab:!selected\n"
"{\n"
"    margin-top: 5px;\n"
"}\n"
" \n"
"QTabBar::tab:selected\n"
"{\n"
"    color: white;\n"
"    font-size:14px;\n"
"    font-weight:bold;\n"
"}"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(16, 16));
        navigationpage = new QWidget();
        navigationpage->setObjectName("navigationpage");
        map = new QLabel(navigationpage);
        map->setObjectName("map");
        map->setGeometry(QRect(0, 0, 750, 1050));
        map->setScaledContents(true);
        layoutWidget = new QWidget(navigationpage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(740, 260, 231, 621));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(10);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        TipInfo1 = new QLabel(layoutWidget);
        TipInfo1->setObjectName("TipInfo1");
        QFont font;
        font.setPointSize(9);
        TipInfo1->setFont(font);

        verticalLayout->addWidget(TipInfo1);

        StartBox = new QComboBox(layoutWidget);
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->addItem(QString());
        StartBox->setObjectName("StartBox");
        sizePolicy.setHeightForWidth(StartBox->sizePolicy().hasHeightForWidth());
        StartBox->setSizePolicy(sizePolicy);
        StartBox->setSizeIncrement(QSize(0, 0));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\226\260\345\256\213\344\275\223")});
        font1.setPointSize(12);
        StartBox->setFont(font1);
        StartBox->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"    color:black;             \n"
"    min-height: 50px;           \n"
"    min-width: 60px;                \n"
"    selection-background-color: rgb(80, 80, 80);\n"
"}\n"
" \n"
"QComboBox QAbstractItemView\n"
"{\n"
"    font:14px;                 \n"
"    selection-color:white;      \n"
"    selection-background-color:rgb(80, 80, 80);\n"
"    background-color:rgb(80, 80, 80);    \n"
"}\n"
" \n"
"QComboBox QAbstractItemView::item\n"
"{\n"
"    color:black;                \n"
"    min-height: 50px;           \n"
"    min-width: 60px;            \n"
"}\n"
" \n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"    border:0px;                \n"
"    min-width: 40px;   \n"
"}       "));
        StartBox->setEditable(true);

        verticalLayout->addWidget(StartBox);

        TipInfo3 = new QLabel(layoutWidget);
        TipInfo3->setObjectName("TipInfo3");

        verticalLayout->addWidget(TipInfo3);

        EndBox = new QComboBox(layoutWidget);
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->addItem(QString());
        EndBox->setObjectName("EndBox");
        sizePolicy.setHeightForWidth(EndBox->sizePolicy().hasHeightForWidth());
        EndBox->setSizePolicy(sizePolicy);
        EndBox->setSizeIncrement(QSize(0, 0));
        EndBox->setFont(font1);
        EndBox->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"    color:black;             \n"
"    min-height: 50px;           \n"
"    min-width: 60px;                \n"
"    selection-background-color: rgb(80, 80, 80);\n"
"}\n"
" \n"
"QComboBox QAbstractItemView\n"
"{\n"
"    font:14px;                 \n"
"    selection-color:white;      \n"
"    selection-background-color:rgb(80, 80, 80);\n"
"    background-color:rgb(80, 80, 80);    \n"
"}\n"
" \n"
"QComboBox QAbstractItemView::item\n"
"{\n"
"    color:black;                \n"
"    min-height: 50px;           \n"
"    min-width: 60px;            \n"
"}\n"
" \n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"    border:0px;                \n"
"    min-width: 40px;   \n"
"}       "));
        EndBox->setEditable(true);

        verticalLayout->addWidget(EndBox);

        TipInfo4 = new QLabel(layoutWidget);
        TipInfo4->setObjectName("TipInfo4");

        verticalLayout->addWidget(TipInfo4);

        NavigationBox = new QComboBox(layoutWidget);
        NavigationBox->addItem(QString());
        NavigationBox->addItem(QString());
        NavigationBox->addItem(QString());
        NavigationBox->addItem(QString());
        NavigationBox->addItem(QString());
        NavigationBox->setObjectName("NavigationBox");
        NavigationBox->setFont(font1);
        NavigationBox->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"    color:black;             \n"
"    min-height: 50px;           \n"
"    min-width: 60px;                \n"
"    selection-background-color: rgb(80, 80, 80);\n"
"}\n"
" \n"
"QComboBox QAbstractItemView\n"
"{\n"
"    font:14px;                 \n"
"    selection-color:white;      \n"
"    selection-background-color:rgb(80, 80, 80);\n"
"    background-color:rgb(80, 80, 80);    \n"
"}\n"
" \n"
"QComboBox QAbstractItemView::item\n"
"{\n"
"    color:black;                \n"
"    min-height: 50px;           \n"
"    min-width: 60px;            \n"
"}\n"
" \n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"    border:0px;                \n"
"    min-width: 40px;   \n"
"}       "));

        verticalLayout->addWidget(NavigationBox);

        TipInfo2 = new QLabel(layoutWidget);
        TipInfo2->setObjectName("TipInfo2");

        verticalLayout->addWidget(TipInfo2);

        ClassNum = new QLineEdit(layoutWidget);
        ClassNum->setObjectName("ClassNum");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ClassNum->sizePolicy().hasHeightForWidth());
        ClassNum->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(ClassNum);

        StopSearch = new QPushButton(layoutWidget);
        StopSearch->setObjectName("StopSearch");
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(StopSearch->sizePolicy().hasHeightForWidth());
        StopSearch->setSizePolicy(sizePolicy2);
        StopSearch->setFont(font1);
        StopSearch->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: rgb(134,183,200); \n"
"    border:2px solid #5F92B2; \n"
"    border-radius:5px; \n"
"    color:white; \n"
"}\n"
" QPushButton:hover\n"
"{\n"
"    background-color: rgb(0,130,150); \n"
"    border:2px solid #5F92B2; \n"
"    border-radius:5px; \n"
"    color:white; \n"
"}\n"
" \n"
"QPushButton:hover:pressed\n"
"{\n"
"    background-color:rgb(85,170,255); \n"
"    border:2px solid #3C80B1; \n"
"    border-radius:5px;\n"
"    color:white;\n"
"}"));

        verticalLayout->addWidget(StopSearch);

        StartSearch = new QPushButton(layoutWidget);
        StartSearch->setObjectName("StartSearch");
        sizePolicy2.setHeightForWidth(StartSearch->sizePolicy().hasHeightForWidth());
        StartSearch->setSizePolicy(sizePolicy2);
        StartSearch->setFont(font1);
        StartSearch->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: rgb(134,183,200); \n"
"    border:2px solid #5F92B2; \n"
"    border-radius:5px; \n"
"    color:white; \n"
"}\n"
" \n"
"QPushButton:hover\n"
"{\n"
"    background-color: rgb(0,130,150); \n"
"    border:2px solid #5F92B2; \n"
"    border-radius:5px; \n"
"    color:white; \n"
"}\n"
" \n"
"QPushButton:hover:pressed\n"
"{\n"
"    background-color:rgb(85,170,255); \n"
"    border:2px solid #3C80B1; \n"
"    border-radius:5px;\n"
"    color:white;\n"
"}"));

        verticalLayout->addWidget(StartSearch);

        clock = new QLabel(navigationpage);
        clock->setObjectName("clock");
        clock->setGeometry(QRect(750, 20, 240, 240));
        tabWidget->addTab(navigationpage, QString());
        daily_routine = new classWidget(tabWidget);
        daily_routine->setObjectName("daily_routine");
        tabWidget->addTab(daily_routine, QString());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        StartBox->setCurrentIndex(0);
        EndBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "QtSGS", nullptr));
        map->setText(QString());
        TipInfo1->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\344\275\215\347\275\256\357\274\232", nullptr));
        StartBox->setItemText(0, QCoreApplication::translate("MainWindow", "\350\257\267\351\200\211\346\213\251\345\275\223\345\211\215\344\275\215\347\275\256", nullptr));
        StartBox->setItemText(1, QCoreApplication::translate("MainWindow", "\345\214\227\351\227\250", nullptr));
        StartBox->setItemText(2, QCoreApplication::translate("MainWindow", "\345\255\246\345\215\201\345\205\254\345\257\223\344\270\234\351\227\250", nullptr));
        StartBox->setItemText(3, QCoreApplication::translate("MainWindow", "\347\273\217\347\256\241\346\245\274\350\245\277\351\227\250", nullptr));
        StartBox->setItemText(4, QCoreApplication::translate("MainWindow", "\345\255\246\345\215\201\345\205\254\345\257\223\350\245\277\351\227\250", nullptr));
        StartBox->setItemText(5, QCoreApplication::translate("MainWindow", "\345\255\246\345\205\255\345\205\254\345\257\223\344\270\234\351\227\250", nullptr));
        StartBox->setItemText(6, QCoreApplication::translate("MainWindow", "\345\214\227\351\202\256\347\247\221\346\212\200\351\205\222\345\272\227\344\270\234\351\227\250", nullptr));
        StartBox->setItemText(7, QCoreApplication::translate("MainWindow", "\345\255\246\345\215\201\344\270\200\345\205\254\345\257\223\345\215\227\351\227\250", nullptr));
        StartBox->setItemText(8, QCoreApplication::translate("MainWindow", "\346\225\231\344\271\235\344\270\234\351\227\250", nullptr));
        StartBox->setItemText(9, QCoreApplication::translate("MainWindow", "\347\247\221\347\240\224\345\244\247\346\245\274\345\214\227\351\227\250", nullptr));
        StartBox->setItemText(10, QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\346\264\273\345\212\250\344\270\255\345\277\203\350\245\277\351\227\250", nullptr));
        StartBox->setItemText(11, QCoreApplication::translate("MainWindow", "\345\255\246\344\271\235\345\205\254\345\257\223\345\215\227\351\227\250", nullptr));
        StartBox->setItemText(12, QCoreApplication::translate("MainWindow", "\347\225\231\345\255\246\347\224\237\345\205\254\345\257\223\345\214\227\351\227\250", nullptr));
        StartBox->setItemText(13, QCoreApplication::translate("MainWindow", "\345\255\246\345\215\201\345\205\254\345\257\223\345\215\227\351\227\250", nullptr));
        StartBox->setItemText(14, QCoreApplication::translate("MainWindow", "\351\235\222\345\271\264\345\205\254\345\257\223\344\270\234\351\227\250", nullptr));
        StartBox->setItemText(15, QCoreApplication::translate("MainWindow", "\347\273\274\345\220\210\351\243\237\345\240\202\350\245\277\351\227\250", nullptr));
        StartBox->setItemText(16, QCoreApplication::translate("MainWindow", "\347\273\274\345\220\210\351\243\237\345\240\202\344\270\234\351\227\250", nullptr));
        StartBox->setItemText(17, QCoreApplication::translate("MainWindow", "\347\225\231\345\255\246\347\224\237\345\205\254\345\257\223\344\270\234\351\227\250", nullptr));
        StartBox->setItemText(18, QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\346\264\273\345\212\250\344\270\255\345\277\203\345\215\227\351\227\250", nullptr));
        StartBox->setItemText(19, QCoreApplication::translate("MainWindow", "\346\276\241\345\240\202", nullptr));
        StartBox->setItemText(20, QCoreApplication::translate("MainWindow", "\347\211\251\347\276\216\350\266\205\345\270\202", nullptr));
        StartBox->setItemText(21, QCoreApplication::translate("MainWindow", "\350\201\224\351\200\232\350\220\245\344\270\232\345\216\205", nullptr));
        StartBox->setItemText(22, QCoreApplication::translate("MainWindow", "\347\221\236\345\271\270\345\222\226\345\225\241", nullptr));
        StartBox->setItemText(23, QCoreApplication::translate("MainWindow", "\346\260\264\346\210\277", nullptr));
        StartBox->setItemText(24, QCoreApplication::translate("MainWindow", "\346\211\223\345\215\260\345\272\227", nullptr));
        StartBox->setItemText(25, QCoreApplication::translate("MainWindow", "\347\247\221\347\240\224\345\244\247\346\245\274\345\215\227\351\227\250", nullptr));
        StartBox->setItemText(26, QCoreApplication::translate("MainWindow", "\345\255\246\344\272\224\345\205\254\345\257\223\345\215\227\351\227\250", nullptr));
        StartBox->setItemText(27, QCoreApplication::translate("MainWindow", "\345\255\246\345\205\253\345\205\254\345\257\223\345\215\227\351\227\250", nullptr));
        StartBox->setItemText(28, QCoreApplication::translate("MainWindow", "\346\225\231\345\267\245\351\244\220\345\216\205\344\270\234\351\227\250", nullptr));
        StartBox->setItemText(29, QCoreApplication::translate("MainWindow", "\345\277\203\347\220\206\345\201\245\345\272\267\344\270\255\345\277\203", nullptr));
        StartBox->setItemText(30, QCoreApplication::translate("MainWindow", "\344\270\273\345\271\262\351\201\223\345\244\247\347\224\265\350\247\206", nullptr));
        StartBox->setItemText(31, QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\351\243\237\345\240\202\350\245\277\351\227\250", nullptr));
        StartBox->setItemText(32, QCoreApplication::translate("MainWindow", "\345\255\246\350\213\221\344\271\246\345\261\213\345\215\227\351\227\250", nullptr));
        StartBox->setItemText(33, QCoreApplication::translate("MainWindow", "\345\255\246\345\215\201\344\270\211\345\205\254\345\257\223\344\270\234\351\227\250", nullptr));
        StartBox->setItemText(34, QCoreApplication::translate("MainWindow", "\345\255\246\344\270\211\345\205\254\345\257\223\345\214\227\351\227\250", nullptr));
        StartBox->setItemText(35, QCoreApplication::translate("MainWindow", "\345\255\246\345\233\233\345\205\254\345\257\223\345\214\227\351\227\250", nullptr));
        StartBox->setItemText(36, QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\351\243\237\345\240\202\345\215\227\351\227\250", nullptr));
        StartBox->setItemText(37, QCoreApplication::translate("MainWindow", "\344\277\235\345\215\253\345\244\204\345\215\227\351\227\250", nullptr));
        StartBox->setItemText(38, QCoreApplication::translate("MainWindow", "\345\233\276\344\271\246\351\246\206\350\245\277\351\227\250", nullptr));
        StartBox->setItemText(39, QCoreApplication::translate("MainWindow", "\347\257\256\347\220\203\345\234\272\350\245\277\351\227\250", nullptr));
        StartBox->setItemText(40, QCoreApplication::translate("MainWindow", "\351\270\277\351\200\232\346\245\274\344\270\234\351\227\250", nullptr));
        StartBox->setItemText(41, QCoreApplication::translate("MainWindow", "\345\255\246\344\270\200\345\205\254\345\257\223\345\215\227\351\227\250", nullptr));
        StartBox->setItemText(42, QCoreApplication::translate("MainWindow", "\345\255\246\344\272\214\345\205\254\345\257\223\345\215\227\351\227\250", nullptr));
        StartBox->setItemText(43, QCoreApplication::translate("MainWindow", "\350\241\214\346\224\277\345\212\236\345\205\254\346\245\274\345\214\227\351\227\250", nullptr));
        StartBox->setItemText(44, QCoreApplication::translate("MainWindow", "\347\275\221\347\220\203\345\234\272\345\215\227\351\227\250", nullptr));
        StartBox->setItemText(45, QCoreApplication::translate("MainWindow", "\344\275\223\350\202\262\351\246\206\345\214\227\351\227\250", nullptr));
        StartBox->setItemText(46, QCoreApplication::translate("MainWindow", "\345\255\24629\345\205\254\345\257\223\345\215\227\351\227\250", nullptr));
        StartBox->setItemText(47, QCoreApplication::translate("MainWindow", "\346\270\270\346\263\263\351\246\206\345\214\227\351\227\250", nullptr));
        StartBox->setItemText(48, QCoreApplication::translate("MainWindow", "\344\270\234\351\227\250", nullptr));
        StartBox->setItemText(49, QCoreApplication::translate("MainWindow", "\350\264\242\345\212\241\345\220\216\345\213\244\346\245\274\350\245\277\351\227\250", nullptr));
        StartBox->setItemText(50, QCoreApplication::translate("MainWindow", "\351\202\256\345\261\200-ATM\344\270\234\351\227\250", nullptr));
        StartBox->setItemText(51, QCoreApplication::translate("MainWindow", "\346\225\231\345\233\233\346\245\274\350\245\277\351\227\250", nullptr));
        StartBox->setItemText(52, QCoreApplication::translate("MainWindow", "\346\225\231\345\233\233\346\245\274\344\270\234\351\227\250", nullptr));
        StartBox->setItemText(53, QCoreApplication::translate("MainWindow", "\344\275\223\350\202\262\351\246\206\350\245\277\351\227\250", nullptr));
        StartBox->setItemText(54, QCoreApplication::translate("MainWindow", "\346\225\231\344\270\200\346\245\274\350\245\277\351\227\250", nullptr));
        StartBox->setItemText(55, QCoreApplication::translate("MainWindow", "\346\225\231\344\270\200\346\245\274\344\270\234\351\227\250", nullptr));
        StartBox->setItemText(56, QCoreApplication::translate("MainWindow", "\346\225\231\345\233\233\346\245\274\345\215\227\351\227\250", nullptr));
        StartBox->setItemText(57, QCoreApplication::translate("MainWindow", "\346\225\231\344\270\200\346\245\274\345\215\227\351\227\250", nullptr));
        StartBox->setItemText(58, QCoreApplication::translate("MainWindow", "\347\247\221\345\255\246\344\274\232\345\240\202", nullptr));
        StartBox->setItemText(59, QCoreApplication::translate("MainWindow", "\347\247\273\345\212\250\350\220\245\344\270\232\345\216\205", nullptr));
        StartBox->setItemText(60, QCoreApplication::translate("MainWindow", "\344\270\273\346\245\274", nullptr));
        StartBox->setItemText(61, QCoreApplication::translate("MainWindow", "\350\245\277\351\227\250", nullptr));
        StartBox->setItemText(62, QCoreApplication::translate("MainWindow", "\344\275\223\350\202\262\345\234\272", nullptr));
        StartBox->setItemText(63, QCoreApplication::translate("MainWindow", "\346\225\231\344\270\211\346\245\274\345\214\227\351\227\250", nullptr));
        StartBox->setItemText(64, QCoreApplication::translate("MainWindow", "\346\225\231\344\272\214\346\245\274\345\214\227\351\227\250", nullptr));
        StartBox->setItemText(65, QCoreApplication::translate("MainWindow", "\345\201\234\350\275\246\345\235\252\344\270\234\351\227\250", nullptr));
        StartBox->setItemText(66, QCoreApplication::translate("MainWindow", "\346\225\231\344\270\211\346\245\274\350\245\277\351\227\250", nullptr));
        StartBox->setItemText(67, QCoreApplication::translate("MainWindow", "\346\225\231\344\270\211\346\245\274\344\270\234\351\227\250", nullptr));
        StartBox->setItemText(68, QCoreApplication::translate("MainWindow", "\346\225\231\344\272\214\346\245\274\344\270\234\351\227\250", nullptr));
        StartBox->setItemText(69, QCoreApplication::translate("MainWindow", "\346\225\231\344\272\214\346\245\274\350\245\277\351\227\250", nullptr));
        StartBox->setItemText(70, QCoreApplication::translate("MainWindow", "\346\240\241\350\275\246\350\275\246\345\272\223\344\270\234\351\227\250", nullptr));
        StartBox->setItemText(71, QCoreApplication::translate("MainWindow", "\345\210\233\346\226\260\344\270\255\345\277\203\345\215\227\351\227\250", nullptr));
        StartBox->setItemText(72, QCoreApplication::translate("MainWindow", "\344\270\255\351\227\250\351\202\256\345\261\200\350\245\277\351\227\250", nullptr));
        StartBox->setItemText(73, QCoreApplication::translate("MainWindow", "\344\270\255\351\227\250", nullptr));
        StartBox->setItemText(74, QCoreApplication::translate("MainWindow", "\346\240\241\345\214\273\351\231\242\345\215\227\351\227\250", nullptr));
        StartBox->setItemText(75, QCoreApplication::translate("MainWindow", "\345\215\227\345\214\272\350\266\205\345\270\202\344\270\234\351\227\250", nullptr));
        StartBox->setItemText(76, QCoreApplication::translate("MainWindow", "\346\230\216\345\205\211\346\245\274\345\207\272\347\211\210\347\244\276\345\214\227\351\227\250", nullptr));
        StartBox->setItemText(77, QCoreApplication::translate("MainWindow", "\345\215\227\351\227\250", nullptr));

        StartBox->setCurrentText(QCoreApplication::translate("MainWindow", "\350\257\267\351\200\211\346\213\251\345\275\223\345\211\215\344\275\215\347\275\256", nullptr));
        TipInfo3->setText(QCoreApplication::translate("MainWindow", "\347\273\210\347\202\271\344\275\215\347\275\256:", nullptr));
        EndBox->setItemText(0, QCoreApplication::translate("MainWindow", "\350\257\267\351\200\211\346\213\251\347\273\210\347\202\271\344\275\215\347\275\256", nullptr));
        EndBox->setItemText(1, QCoreApplication::translate("MainWindow", "\345\214\227\351\227\250", nullptr));
        EndBox->setItemText(2, QCoreApplication::translate("MainWindow", "\345\255\246\345\215\201\345\205\254\345\257\223\344\270\234\351\227\250", nullptr));
        EndBox->setItemText(3, QCoreApplication::translate("MainWindow", "\347\273\217\347\256\241\346\245\274\350\245\277\351\227\250", nullptr));
        EndBox->setItemText(4, QCoreApplication::translate("MainWindow", "\345\255\246\345\215\201\345\205\254\345\257\223\350\245\277\351\227\250", nullptr));
        EndBox->setItemText(5, QCoreApplication::translate("MainWindow", "\345\255\246\345\205\255\345\205\254\345\257\223\344\270\234\351\227\250", nullptr));
        EndBox->setItemText(6, QCoreApplication::translate("MainWindow", "\345\214\227\351\202\256\347\247\221\346\212\200\351\205\222\345\272\227\344\270\234\351\227\250", nullptr));
        EndBox->setItemText(7, QCoreApplication::translate("MainWindow", "\345\255\246\345\215\201\344\270\200\345\205\254\345\257\223\345\215\227\351\227\250", nullptr));
        EndBox->setItemText(8, QCoreApplication::translate("MainWindow", "\346\225\231\344\271\235\344\270\234\351\227\250", nullptr));
        EndBox->setItemText(9, QCoreApplication::translate("MainWindow", "\347\247\221\347\240\224\345\244\247\346\245\274\345\214\227\351\227\250", nullptr));
        EndBox->setItemText(10, QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\346\264\273\345\212\250\344\270\255\345\277\203\350\245\277\351\227\250", nullptr));
        EndBox->setItemText(11, QCoreApplication::translate("MainWindow", "\345\255\246\344\271\235\345\205\254\345\257\223\345\215\227\351\227\250", nullptr));
        EndBox->setItemText(12, QCoreApplication::translate("MainWindow", "\347\225\231\345\255\246\347\224\237\345\205\254\345\257\223\345\214\227\351\227\250", nullptr));
        EndBox->setItemText(13, QCoreApplication::translate("MainWindow", "\345\255\246\345\215\201\345\205\254\345\257\223\345\215\227\351\227\250", nullptr));
        EndBox->setItemText(14, QCoreApplication::translate("MainWindow", "\351\235\222\345\271\264\345\205\254\345\257\223\344\270\234\351\227\250", nullptr));
        EndBox->setItemText(15, QCoreApplication::translate("MainWindow", "\347\273\274\345\220\210\351\243\237\345\240\202\350\245\277\351\227\250", nullptr));
        EndBox->setItemText(16, QCoreApplication::translate("MainWindow", "\347\273\274\345\220\210\351\243\237\345\240\202\344\270\234\351\227\250", nullptr));
        EndBox->setItemText(17, QCoreApplication::translate("MainWindow", "\347\225\231\345\255\246\347\224\237\345\205\254\345\257\223\344\270\234\351\227\250", nullptr));
        EndBox->setItemText(18, QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\346\264\273\345\212\250\344\270\255\345\277\203\345\215\227\351\227\250", nullptr));
        EndBox->setItemText(19, QCoreApplication::translate("MainWindow", "\346\276\241\345\240\202", nullptr));
        EndBox->setItemText(20, QCoreApplication::translate("MainWindow", "\347\211\251\347\276\216\350\266\205\345\270\202", nullptr));
        EndBox->setItemText(21, QCoreApplication::translate("MainWindow", "\350\201\224\351\200\232\350\220\245\344\270\232\345\216\205", nullptr));
        EndBox->setItemText(22, QCoreApplication::translate("MainWindow", "\347\221\236\345\271\270\345\222\226\345\225\241", nullptr));
        EndBox->setItemText(23, QCoreApplication::translate("MainWindow", "\346\260\264\346\210\277", nullptr));
        EndBox->setItemText(24, QCoreApplication::translate("MainWindow", "\346\211\223\345\215\260\345\272\227", nullptr));
        EndBox->setItemText(25, QCoreApplication::translate("MainWindow", "\347\247\221\347\240\224\345\244\247\346\245\274\345\215\227\351\227\250", nullptr));
        EndBox->setItemText(26, QCoreApplication::translate("MainWindow", "\345\255\246\344\272\224\345\205\254\345\257\223\345\215\227\351\227\250", nullptr));
        EndBox->setItemText(27, QCoreApplication::translate("MainWindow", "\345\255\246\345\205\253\345\205\254\345\257\223\345\215\227\351\227\250", nullptr));
        EndBox->setItemText(28, QCoreApplication::translate("MainWindow", "\346\225\231\345\267\245\351\244\220\345\216\205\344\270\234\351\227\250", nullptr));
        EndBox->setItemText(29, QCoreApplication::translate("MainWindow", "\345\277\203\347\220\206\345\201\245\345\272\267\344\270\255\345\277\203", nullptr));
        EndBox->setItemText(30, QCoreApplication::translate("MainWindow", "\344\270\273\345\271\262\351\201\223\345\244\247\347\224\265\350\247\206", nullptr));
        EndBox->setItemText(31, QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\351\243\237\345\240\202\350\245\277\351\227\250", nullptr));
        EndBox->setItemText(32, QCoreApplication::translate("MainWindow", "\345\255\246\350\213\221\344\271\246\345\261\213\345\215\227\351\227\250", nullptr));
        EndBox->setItemText(33, QCoreApplication::translate("MainWindow", "\345\255\246\345\215\201\344\270\211\345\205\254\345\257\223\344\270\234\351\227\250", nullptr));
        EndBox->setItemText(34, QCoreApplication::translate("MainWindow", "\345\255\246\344\270\211\345\205\254\345\257\223\345\214\227\351\227\250", nullptr));
        EndBox->setItemText(35, QCoreApplication::translate("MainWindow", "\345\255\246\345\233\233\345\205\254\345\257\223\345\214\227\351\227\250", nullptr));
        EndBox->setItemText(36, QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\351\243\237\345\240\202\345\215\227\351\227\250", nullptr));
        EndBox->setItemText(37, QCoreApplication::translate("MainWindow", "\344\277\235\345\215\253\345\244\204\345\215\227\351\227\250", nullptr));
        EndBox->setItemText(38, QCoreApplication::translate("MainWindow", "\345\233\276\344\271\246\351\246\206\350\245\277\351\227\250", nullptr));
        EndBox->setItemText(39, QCoreApplication::translate("MainWindow", "\347\257\256\347\220\203\345\234\272\350\245\277\351\227\250", nullptr));
        EndBox->setItemText(40, QCoreApplication::translate("MainWindow", "\351\270\277\351\200\232\346\245\274\344\270\234\351\227\250", nullptr));
        EndBox->setItemText(41, QCoreApplication::translate("MainWindow", "\345\255\246\344\270\200\345\205\254\345\257\223\345\215\227\351\227\250", nullptr));
        EndBox->setItemText(42, QCoreApplication::translate("MainWindow", "\345\255\246\344\272\214\345\205\254\345\257\223\345\215\227\351\227\250", nullptr));
        EndBox->setItemText(43, QCoreApplication::translate("MainWindow", "\350\241\214\346\224\277\345\212\236\345\205\254\346\245\274\345\214\227\351\227\250", nullptr));
        EndBox->setItemText(44, QCoreApplication::translate("MainWindow", "\347\275\221\347\220\203\345\234\272\345\215\227\351\227\250", nullptr));
        EndBox->setItemText(45, QCoreApplication::translate("MainWindow", "\344\275\223\350\202\262\351\246\206\345\214\227\351\227\250", nullptr));
        EndBox->setItemText(46, QCoreApplication::translate("MainWindow", "\345\255\24629\345\205\254\345\257\223\345\215\227\351\227\250", nullptr));
        EndBox->setItemText(47, QCoreApplication::translate("MainWindow", "\346\270\270\346\263\263\351\246\206\345\214\227\351\227\250", nullptr));
        EndBox->setItemText(48, QCoreApplication::translate("MainWindow", "\344\270\234\351\227\250", nullptr));
        EndBox->setItemText(49, QCoreApplication::translate("MainWindow", "\350\264\242\345\212\241\345\220\216\345\213\244\346\245\274\350\245\277\351\227\250", nullptr));
        EndBox->setItemText(50, QCoreApplication::translate("MainWindow", "\351\202\256\345\261\200-ATM\344\270\234\351\227\250", nullptr));
        EndBox->setItemText(51, QCoreApplication::translate("MainWindow", "\346\225\231\345\233\233\346\245\274\350\245\277\351\227\250", nullptr));
        EndBox->setItemText(52, QCoreApplication::translate("MainWindow", "\346\225\231\345\233\233\346\245\274\344\270\234\351\227\250", nullptr));
        EndBox->setItemText(53, QCoreApplication::translate("MainWindow", "\344\275\223\350\202\262\351\246\206\350\245\277\351\227\250", nullptr));
        EndBox->setItemText(54, QCoreApplication::translate("MainWindow", "\346\225\231\344\270\200\346\245\274\350\245\277\351\227\250", nullptr));
        EndBox->setItemText(55, QCoreApplication::translate("MainWindow", "\346\225\231\344\270\200\346\245\274\344\270\234\351\227\250", nullptr));
        EndBox->setItemText(56, QCoreApplication::translate("MainWindow", "\346\225\231\345\233\233\346\245\274\345\215\227\351\227\250", nullptr));
        EndBox->setItemText(57, QCoreApplication::translate("MainWindow", "\346\225\231\344\270\200\346\245\274\345\215\227\351\227\250", nullptr));
        EndBox->setItemText(58, QCoreApplication::translate("MainWindow", "\347\247\221\345\255\246\344\274\232\345\240\202", nullptr));
        EndBox->setItemText(59, QCoreApplication::translate("MainWindow", "\347\247\273\345\212\250\350\220\245\344\270\232\345\216\205", nullptr));
        EndBox->setItemText(60, QCoreApplication::translate("MainWindow", "\344\270\273\346\245\274", nullptr));
        EndBox->setItemText(61, QCoreApplication::translate("MainWindow", "\350\245\277\351\227\250", nullptr));
        EndBox->setItemText(62, QCoreApplication::translate("MainWindow", "\344\275\223\350\202\262\345\234\272", nullptr));
        EndBox->setItemText(63, QCoreApplication::translate("MainWindow", "\346\225\231\344\270\211\346\245\274\345\214\227\351\227\250", nullptr));
        EndBox->setItemText(64, QCoreApplication::translate("MainWindow", "\346\225\231\344\272\214\346\245\274\345\214\227\351\227\250", nullptr));
        EndBox->setItemText(65, QCoreApplication::translate("MainWindow", "\345\201\234\350\275\246\345\235\252\344\270\234\351\227\250", nullptr));
        EndBox->setItemText(66, QCoreApplication::translate("MainWindow", "\346\225\231\344\270\211\346\245\274\350\245\277\351\227\250", nullptr));
        EndBox->setItemText(67, QCoreApplication::translate("MainWindow", "\346\225\231\344\270\211\346\245\274\344\270\234\351\227\250", nullptr));
        EndBox->setItemText(68, QCoreApplication::translate("MainWindow", "\346\225\231\344\272\214\346\245\274\344\270\234\351\227\250", nullptr));
        EndBox->setItemText(69, QCoreApplication::translate("MainWindow", "\346\225\231\344\272\214\346\245\274\350\245\277\351\227\250", nullptr));
        EndBox->setItemText(70, QCoreApplication::translate("MainWindow", "\346\240\241\350\275\246\350\275\246\345\272\223\344\270\234\351\227\250", nullptr));
        EndBox->setItemText(71, QCoreApplication::translate("MainWindow", "\345\210\233\346\226\260\344\270\255\345\277\203\345\215\227\351\227\250", nullptr));
        EndBox->setItemText(72, QCoreApplication::translate("MainWindow", "\344\270\255\351\227\250\351\202\256\345\261\200\350\245\277\351\227\250", nullptr));
        EndBox->setItemText(73, QCoreApplication::translate("MainWindow", "\344\270\255\351\227\250", nullptr));
        EndBox->setItemText(74, QCoreApplication::translate("MainWindow", "\346\240\241\345\214\273\351\231\242\345\215\227\351\227\250", nullptr));
        EndBox->setItemText(75, QCoreApplication::translate("MainWindow", "\346\230\216\345\205\211\346\245\274\345\207\272\347\211\210\347\244\276\345\214\227\351\227\250", nullptr));
        EndBox->setItemText(76, QCoreApplication::translate("MainWindow", "\345\215\227\351\227\250", nullptr));

        EndBox->setCurrentText(QString());
        TipInfo4->setText(QCoreApplication::translate("MainWindow", "\345\257\274\350\210\252\347\255\226\347\225\245\357\274\232", nullptr));
        NavigationBox->setItemText(0, QCoreApplication::translate("MainWindow", "\350\257\267\351\200\211\346\213\251\345\257\274\350\210\252\347\255\226\347\225\245", nullptr));
        NavigationBox->setItemText(1, QCoreApplication::translate("MainWindow", "\346\255\245\350\241\214\346\234\200\347\237\255\350\267\235\347\246\273", nullptr));
        NavigationBox->setItemText(2, QCoreApplication::translate("MainWindow", "\346\255\245\350\241\214\346\234\200\347\237\255\346\227\266\351\227\264", nullptr));
        NavigationBox->setItemText(3, QCoreApplication::translate("MainWindow", "\351\200\224\345\276\204\346\234\200\347\237\255\350\267\235\347\246\273", nullptr));
        NavigationBox->setItemText(4, QCoreApplication::translate("MainWindow", "\351\252\221\350\241\214\346\234\200\347\237\255\346\227\266\351\227\264", nullptr));

        TipInfo2->setText(QCoreApplication::translate("MainWindow", "\346\225\231\345\256\244\345\272\217\345\217\267\357\274\210\345\217\257\351\200\211\357\274\211\357\274\232", nullptr));
        StopSearch->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\345\257\274\350\210\252", nullptr));
        StartSearch->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\345\257\274\350\210\252", nullptr));
        clock->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(navigationpage), QCoreApplication::translate("MainWindow", "\345\257\274\350\210\252", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(daily_routine), QCoreApplication::translate("MainWindow", "\346\227\245\347\250\213\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
