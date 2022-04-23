/********************************************************************************
** Form generated from reading UI file 'arduino.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARDUINO_H
#define UI_ARDUINO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_arduino
{
public:

    void setupUi(QDialog *arduino)
    {
        if (arduino->objectName().isEmpty())
            arduino->setObjectName(QStringLiteral("arduino"));
        arduino->resize(1131, 599);

        retranslateUi(arduino);

        QMetaObject::connectSlotsByName(arduino);
    } // setupUi

    void retranslateUi(QDialog *arduino)
    {
        arduino->setWindowTitle(QApplication::translate("arduino", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class arduino: public Ui_arduino {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARDUINO_H
