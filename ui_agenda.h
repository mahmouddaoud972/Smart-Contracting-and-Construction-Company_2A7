/********************************************************************************
** Form generated from reading UI file 'agenda.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGENDA_H
#define UI_AGENDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_agenda
{
public:

    void setupUi(QDialog *agenda)
    {
        if (agenda->objectName().isEmpty())
            agenda->setObjectName(QStringLiteral("agenda"));
        agenda->resize(1219, 572);

        retranslateUi(agenda);

        QMetaObject::connectSlotsByName(agenda);
    } // setupUi

    void retranslateUi(QDialog *agenda)
    {
        agenda->setWindowTitle(QApplication::translate("agenda", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class agenda: public Ui_agenda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGENDA_H
