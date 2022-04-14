/********************************************************************************
** Form generated from reading UI file 'historique.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORIQUE_H
#define UI_HISTORIQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Historique
{
public:

    void setupUi(QDialog *Historique)
    {
        if (Historique->objectName().isEmpty())
            Historique->setObjectName(QStringLiteral("Historique"));
        Historique->resize(400, 300);

        retranslateUi(Historique);

        QMetaObject::connectSlotsByName(Historique);
    } // setupUi

    void retranslateUi(QDialog *Historique)
    {
        Historique->setWindowTitle(QApplication::translate("Historique", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Historique: public Ui_Historique {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORIQUE_H
