#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connection.h"
#include "QPixmap"
#include "profils.h"
#include <QSqlQuery>
#include <QMessageBox>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap bkgnd("E:/Projet/Login/images/screen.jpg");
        bkgnd = bkgnd.scaled(1366,749);
        QPalette palette;
        palette.setBrush(QPalette::Background, bkgnd);
        this->setPalette(palette);
        Connection c;
        c.createconnect();


}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_Gemployees_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    QString i="1";
    ui->le_id->setText(i);


}

void MainWindow::on_Gfournisseurs_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    QString i="3";
    ui->le_id->setText(i);

}


void MainWindow::on_pb_login_clicked()
{
    QString id= ui->le_id->text();
    QString user = ui->le_user->text();
    QString password=ui->le_password->text();
    Profils P;
    if(P.username(id,user,password))
    {if (id=="3"){
        ui->fournisseur->show();
        }
        if (id=="1"){
                ui->stackedWidget->setCurrentIndex(3);
                }

    }else{
        QMessageBox::critical(nullptr, QObject::tr("SORRY"),
                    QObject::tr("Wrong password or username.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }


}

void MainWindow::on_retour_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}
