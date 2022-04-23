/********************************************************************************
** Form generated from reading UI file 'chatbox.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATBOX_H
#define UI_CHATBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_chatbox
{
public:
    QPushButton *pushButton_2;
    QPlainTextEdit *plainTextEdit_2;
    QPlainTextEdit *plainTextEdit;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *chatbox)
    {
        if (chatbox->objectName().isEmpty())
            chatbox->setObjectName(QStringLiteral("chatbox"));
        chatbox->resize(1050, 572);
        pushButton_2 = new QPushButton(chatbox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(600, 410, 75, 23));
        plainTextEdit_2 = new QPlainTextEdit(chatbox);
        plainTextEdit_2->setObjectName(QStringLiteral("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(480, 40, 331, 271));
        plainTextEdit = new QPlainTextEdit(chatbox);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(90, 40, 361, 271));
        lineEdit = new QLineEdit(chatbox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(220, 340, 113, 20));
        pushButton = new QPushButton(chatbox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 410, 75, 23));
        lineEdit_2 = new QLineEdit(chatbox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(580, 360, 113, 20));

        retranslateUi(chatbox);

        QMetaObject::connectSlotsByName(chatbox);
    } // setupUi

    void retranslateUi(QDialog *chatbox)
    {
        chatbox->setWindowTitle(QApplication::translate("chatbox", "Dialog", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("chatbox", "chat2", Q_NULLPTR));
        pushButton->setText(QApplication::translate("chatbox", "chat", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class chatbox: public Ui_chatbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATBOX_H
