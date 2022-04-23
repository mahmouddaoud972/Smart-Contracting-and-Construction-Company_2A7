#include "chatbox.h"
#include "ui_chatbox.h"
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>
#include "QIntValidator"
#include <QDateEdit>
#include <QPlainTextEdit>
#include <QPrinter>
#include <QPrinterInfo>
#include <QPrintDialog>
#include <QTextStream>
#include <QPainter>
#include <QTextStream>
#include <QFileDialog>
#include <QTextDocument>
#include <QtPrintSupport/QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include <strstream>
#include <QSystemTrayIcon>
#include <QRegExpValidator>
#include <QDesktopServices>
#include <QUrl>
#include <QGuiApplication>
//#include <QQmlApplicationEngine>
#include <QTcpSocket>
//#include <QQuickItem>

chatbox::chatbox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chatbox)
{
    ui->setupUi(this);
    mSocket=new QTcpSocket(this);
           mSocket->connectToHost("localhost",2000);
           if (mSocket->waitForConnected(3000))
           {
               ui->plainTextEdit->appendPlainText("se connecter correctement");
           }
           else
           {
               ui->plainTextEdit->appendPlainText("connected");
           }
           connect(mSocket,SIGNAL(readyRead()),this,SLOT(leer()));
}


chatbox::~chatbox()
{
    delete ui;
}







void chatbox::on_pushButton_2_clicked()
{
    mSocket->write(ui->lineEdit_2->text().toLatin1().data(),ui->lineEdit_2->text().size());

       ui->plainTextEdit->appendPlainText(ui->lineEdit_2->text());

       ui->lineEdit_2->clear();
}


void chatbox::on_pushButton_clicked()
{
    mSocket->write(ui->lineEdit->text().toLatin1().data(),ui->lineEdit->text().size());

        ui->plainTextEdit_2->appendPlainText(ui->lineEdit->text());

        ui->lineEdit->clear();
}

