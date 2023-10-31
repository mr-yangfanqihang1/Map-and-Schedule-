/********************************************************************************
** Form generated from reading UI file 'schedule.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEDULE_H
#define UI_SCHEDULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_scheduleClass
{
public:

    void setupUi(QWidget *scheduleClass)
    {
        if (scheduleClass->objectName().isEmpty())
            scheduleClass->setObjectName("scheduleClass");
        scheduleClass->resize(600, 400);

        retranslateUi(scheduleClass);

        QMetaObject::connectSlotsByName(scheduleClass);
    } // setupUi

    void retranslateUi(QWidget *scheduleClass)
    {
        scheduleClass->setWindowTitle(QCoreApplication::translate("scheduleClass", "schedule", nullptr));
    } // retranslateUi

};

namespace Ui {
    class scheduleClass: public Ui_scheduleClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEDULE_H
