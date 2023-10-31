/********************************************************************************
** Form generated from reading UI file 'classWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSWIDGET_H
#define UI_CLASSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_classWidget
{
public:
    QTableWidget *tableWidget;
    QLabel *label_3;
    QPushButton *input;
    QWidget *gridWidget;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *label_5;
    QDialogButtonBox *exit;
    QSpinBox *setweek;
    QLabel *label_4;
    QPushButton *background;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *spinBox;
    QLabel *label;

    void setupUi(QWidget *classWidget)
    {
        if (classWidget->objectName().isEmpty())
            classWidget->setObjectName("classWidget");
        classWidget->resize(1017, 626);
        classWidget->setMinimumSize(QSize(1017, 626));
        classWidget->setStyleSheet(QString::fromUtf8(""));
        tableWidget = new QTableWidget(classWidget);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QFont font;
        font.setPointSize(14);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font);
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font);
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (tableWidget->rowCount() < 14)
            tableWidget->setRowCount(14);
        QFont font1;
        font1.setPointSize(9);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem7->setFont(font1);
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem8->setFont(font1);
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem9->setFont(font1);
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem10->setFont(font1);
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem11->setFont(font1);
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem12->setFont(font1);
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem13->setFont(font1);
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem14->setFont(font1);
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem15->setFont(font1);
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem16->setFont(font1);
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem17->setFont(font1);
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem18->setFont(font1);
        tableWidget->setVerticalHeaderItem(11, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem19->setFont(font1);
        tableWidget->setVerticalHeaderItem(12, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem20->setFont(font1);
        tableWidget->setVerticalHeaderItem(13, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setItem(3, 4, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem25);
        QBrush brush(QColor(255, 0, 0, 0));
        brush.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setBackground(brush);
        tableWidget->setItem(7, 0, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setItem(10, 0, __qtablewidgetitem27);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setBackground(brush1);
        tableWidget->setItem(11, 0, __qtablewidgetitem28);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 0, 1021, 581));
        tableWidget->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Microsoft YaHei UI\";\n"
""));
        label_3 = new QLabel(classWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(1950, 690, 41, 71));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 24pt \"Microsoft YaHei UI\";"));
        input = new QPushButton(classWidget);
        input->setObjectName("input");
        input->setGeometry(QRect(880, 200, 101, 71));
        input->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Microsoft YaHei UI\";\n"
"background-color: rgba(255, 255, 255, 60);"));
        gridWidget = new QWidget(classWidget);
        gridWidget->setObjectName("gridWidget");
        gridWidget->setGeometry(QRect(570, 150, 201, 131));
        gridWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 60);\n"
"font: 700 14pt \"Microsoft YaHei UI\";"));
        gridLayout = new QGridLayout(gridWidget);
        gridLayout->setObjectName("gridLayout");
        label_6 = new QLabel(gridWidget);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label_6, 3, 0, 1, 1, Qt::AlignHCenter);

        label_5 = new QLabel(gridWidget);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label_5, 3, 2, 1, 1, Qt::AlignHCenter);

        exit = new QDialogButtonBox(gridWidget);
        exit->setObjectName("exit");
        exit->setStyleSheet(QString::fromUtf8(""));
        exit->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(exit, 4, 0, 1, 3);

        setweek = new QSpinBox(gridWidget);
        setweek->setObjectName("setweek");
        setweek->setStyleSheet(QString::fromUtf8(""));
        setweek->setAlignment(Qt::AlignCenter);
        setweek->setMinimum(1);
        setweek->setMaximum(18);

        gridLayout->addWidget(setweek, 3, 1, 1, 1);

        label_4 = new QLabel(gridWidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label_4, 2, 1, 1, 1);

        background = new QPushButton(classWidget);
        background->setObjectName("background");
        background->setGeometry(QRect(880, 310, 91, 81));
        background->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Microsoft YaHei UI\";\n"
"background-color: rgba(255, 255, 255, 60);"));
        horizontalWidget = new QWidget(classWidget);
        horizontalWidget->setObjectName("horizontalWidget");
        horizontalWidget->setGeometry(QRect(860, 130, 151, 51));
        horizontalWidget->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));
        horizontalLayout = new QHBoxLayout(horizontalWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(horizontalWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(label_2);

        spinBox = new QSpinBox(horizontalWidget);
        spinBox->setObjectName("spinBox");
        spinBox->setStyleSheet(QString::fromUtf8(""));
        spinBox->setMinimum(1);
        spinBox->setMaximum(18);

        horizontalLayout->addWidget(spinBox);

        label = new QLabel(horizontalWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(label);


        retranslateUi(classWidget);
        QObject::connect(exit, &QDialogButtonBox::clicked, gridWidget, qOverload<>(&QWidget::close));
        QObject::connect(input, &QPushButton::clicked, gridWidget, qOverload<>(&QWidget::show));
        QObject::connect(classWidget, &QWidget::windowIconChanged, tableWidget, qOverload<>(&QTableWidget::close));

        QMetaObject::connectSlotsByName(classWidget);
    } // setupUi

    void retranslateUi(QWidget *classWidget)
    {
        classWidget->setWindowTitle(QCoreApplication::translate("classWidget", "classWidget", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("classWidget", "\345\221\250\344\270\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("classWidget", "\345\221\250\344\272\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("classWidget", "\345\221\250\344\270\211", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("classWidget", "\345\221\250\345\233\233", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("classWidget", "\345\221\250\344\272\224", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("classWidget", "\345\221\250\345\205\255", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("classWidget", "\345\221\250\346\227\245", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("classWidget", "1\n"
"08:00\357\275\23608:45", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("classWidget", "2\n"
"08:50\357\275\23609:35", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("classWidget", "3\n"
"09:50\357\275\23610:35", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("classWidget", "4\n"
"10:40\357\275\23611:25", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("classWidget", "5\n"
"11:30\357\275\23612:15", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("classWidget", "6\n"
"13:00\357\275\23613:45", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("classWidget", "7\n"
"13:50\357\275\23614:35", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("classWidget", "8\n"
"14:45\357\275\23615:30", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("classWidget", "9\n"
"15:40\357\275\23616:25", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("classWidget", "10\n"
"16:35\357\275\23617:20", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("classWidget", "11\n"
"17:25\357\275\23618:10", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->verticalHeaderItem(11);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("classWidget", "12\n"
"18:30\357\275\23619:15", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->verticalHeaderItem(12);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("classWidget", "13\n"
"19:20\357\275\23620:05", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->verticalHeaderItem(13);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("classWidget", "14\n"
"20:10\357\275\23620:55", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

        label_3->setText(QCoreApplication::translate("classWidget", "\347\254\254", nullptr));
        input->setText(QCoreApplication::translate("classWidget", "\345\257\274\345\205\245\n"
"\350\257\276\347\250\213\350\241\250", nullptr));
        label_6->setText(QCoreApplication::translate("classWidget", "\347\254\254", nullptr));
        label_5->setText(QCoreApplication::translate("classWidget", "\345\221\250", nullptr));
        label_4->setText(QCoreApplication::translate("classWidget", "\350\257\267\350\276\223\345\205\245\345\275\223\345\211\215\345\221\250\346\225\260", nullptr));
        background->setText(QCoreApplication::translate("classWidget", "\350\256\276\347\275\256\n"
"\350\203\214\346\231\257", nullptr));
        label_2->setText(QCoreApplication::translate("classWidget", "\347\254\254", nullptr));
        label->setText(QCoreApplication::translate("classWidget", "\345\221\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class classWidget: public Ui_classWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSWIDGET_H
