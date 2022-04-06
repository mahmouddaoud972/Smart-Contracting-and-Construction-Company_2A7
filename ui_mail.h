/********************************************************************************
** Form generated from reading UI file 'mail.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIL_H
#define UI_MAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Mail
{
public:
    QGroupBox *groupBox;
    QLineEdit *le_rec;
    QLineEdit *le_obj;
    QTextEdit *te_desc;
    QPushButton *pb_send;
    QPushButton *pb_cancel;

    void setupUi(QDialog *Mail)
    {
        if (Mail->objectName().isEmpty())
            Mail->setObjectName(QStringLiteral("Mail"));
        Mail->resize(500, 500);
        Mail->setStyleSheet(QStringLiteral(""));
        groupBox = new QGroupBox(Mail);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(80, 50, 341, 391));
        le_rec = new QLineEdit(groupBox);
        le_rec->setObjectName(QStringLiteral("le_rec"));
        le_rec->setGeometry(QRect(40, 40, 261, 21));
        le_obj = new QLineEdit(groupBox);
        le_obj->setObjectName(QStringLiteral("le_obj"));
        le_obj->setGeometry(QRect(40, 80, 261, 20));
        te_desc = new QTextEdit(groupBox);
        te_desc->setObjectName(QStringLiteral("te_desc"));
        te_desc->setGeometry(QRect(40, 120, 261, 181));
        te_desc->setStyleSheet(QStringLiteral("background-color:white;"));
        pb_send = new QPushButton(groupBox);
        pb_send->setObjectName(QStringLiteral("pb_send"));
        pb_send->setGeometry(QRect(30, 330, 91, 31));
        pb_cancel = new QPushButton(groupBox);
        pb_cancel->setObjectName(QStringLiteral("pb_cancel"));
        pb_cancel->setGeometry(QRect(220, 330, 91, 31));

        retranslateUi(Mail);

        QMetaObject::connectSlotsByName(Mail);
    } // setupUi

    void retranslateUi(QDialog *Mail)
    {
        Mail->setWindowTitle(QApplication::translate("Mail", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Mail", "Send email", Q_NULLPTR));
        le_rec->setText(QString());
        le_rec->setPlaceholderText(QApplication::translate("Mail", "Recipients", Q_NULLPTR));
        le_obj->setPlaceholderText(QApplication::translate("Mail", "Object", Q_NULLPTR));
        pb_send->setText(QApplication::translate("Mail", "Send", Q_NULLPTR));
        pb_cancel->setText(QApplication::translate("Mail", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Mail: public Ui_Mail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIL_H
