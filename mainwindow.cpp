#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPixmap"
#include <QString>
#include <QMessageBox>
#include <QSortFilterProxyModel>
#include <QPropertyAnimation>
#include "employe.h"
#include "connection.h"
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
#include <QPdfWriter>
#include <QDateTime>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap bkgnd("C:/Users/Mahmoud/Desktop/breddd/employe/images/screen.jpg");
        bkgnd = bkgnd.scaled(1920,1080);
        QPalette palette;
        palette.setBrush(QPalette::Background, bkgnd);
        this->setPalette(palette);
        Connection c;
        c.createconnect();
        employe K;
        timer = new QTimer (this);
        connect(timer,SIGNAL (timeout()),this,SLOT (myfunction()));
          timer->start(1000);

}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_pb_ajouter_clicked()
{
    int id_e=ui->le_id_e->text().toInt();
    QString nom_e=ui->le_nom_e->text();
    QString prenom_e=ui->le_prenom_e->text();
    QString mail_e=ui->le_mail_e->text();
    QString salaire_e=ui->le_salaire_e->text();
    QString date_e=ui->le_date_e->text();



    employe e (id_e,nom_e,prenom_e,mail_e,salaire_e,date_e);
    bool test=e.ajouter();
    if (test)
    {
        QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
                notifyIcon->show();


               notifyIcon->showMessage("Ajouter ","Vous avez Ajouté un chantier ",QSystemTrayIcon::Information,15000);
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("Ajout effectué. \n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                    QObject::tr("Ajout non effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);



     show_tables();
        ui->le_id_e->clear();
        ui->le_nom_e->clear();
        ui->le_prenom_e->clear();
        ui->le_mail_e->clear();
        ui->le_salaire_e->clear();
        ui->le_date_e->clear();

}
void MainWindow::show_tables(){


    proxytr = new QSortFilterProxyModel();


    proxytr->setSourceModel(tmptr.afficher());


    proxytr->setFilterCaseSensitivity(Qt::CaseInsensitive);
    proxytr->setFilterKeyColumn(selcoltr);

    ui->tv_afficher->setModel(proxytr);


}
void MainWindow::on_tv_afficher_clicked(const QModelIndex &index)
{
    //recuperation

  QString sel="test";
sel=ui->tv_afficher->model()->data(index).toString();

//affichage
  ui->le_supp->setText(sel);


}

void MainWindow::on_pb_afficher_clicked()
{
show_tables();
}


void MainWindow::on_pb_supprimer_clicked()
{
    int id_e=ui->le_id_e->text().toInt();
    QString nom_e=ui->le_nom_e->text();
    QString prenom_e=ui->le_prenom_e->text();
    QString mail_e=ui->le_mail_e->text();
    QString salaire_e=ui->le_salaire_e->text();
    QString date_e=ui->le_date_e->text();

    employe e (id_e,nom_e,prenom_e,mail_e,salaire_e,date_e);
  e.supprimer(ui->le_supp->text());

  ui->le_supp->clear();

 //refresh du tableau (affichage)
   show_tables();

}

void MainWindow::on_pb_modifier_clicked()
{
    //recuperation des donnees
    int id_e=ui->le_id_e->text().toInt();
    QString id_m=ui->le_id_e->text();
    QString nom_e=ui->le_nom_e->text();
    QString prenom_e=ui->le_prenom_e->text();
    QString mail_e=ui->le_mail_e->text();
    QString salaire_e=ui->le_salaire_e->text();
    QString date_e=ui->le_date_e->text();


      //modifier
    employe e (id_e,nom_e,prenom_e,mail_e,salaire_e,date_e);
      e.modifier(id_m);



  //refresh du tableau (affichage)
   show_tables();
      ui->le_id_e->clear();
      ui->le_nom_e->clear();
      ui->le_prenom_e->clear();
      ui->le_mail_e->clear();
      ui->le_salaire_e->clear();
      ui->le_date_e->clear();

   }


void MainWindow::on_tv_afficher_activated(const QModelIndex &index)
{
    QString val=ui->tv_afficher->model()->data(index).toString();

        QSqlQuery query;


        query.prepare(" select * from employe where id_e='"+val+"'");
        query.bindValue(":id_e", val);

       if (query.exec())
       {
           while(query.next())
           {
               ui->le_id_e->setText(query.value(0).toString());
               ui->le_nom_e->setText(query.value(1).toString());
               ui->le_prenom_e->setText(query.value(5).toString());
               ui->le_mail_e->setText(query.value(5).toString());
               ui->le_salaire_e->setText(query.value(6).toString());
               ui->le_date_e->setText(query.value(4).toString());


           }
       }
}

void MainWindow::on_trecherchec_currentIndexChanged(int index)
{
    selcoltr=ui->trecherchec->currentIndex();
    show_tables();
}

void MainWindow::on_trecherchelt_textChanged(const QString &arg1)
{
    proxytr->setFilterFixedString(arg1);
}






void MainWindow::on_toolButton_clicked()
{

    QString l=ui->tri->currentText();

    int id_e=ui->le_id_e->text().toInt();
    QString id_m=ui->le_id_e->text();
    QString nom_e=ui->le_nom_e->text();
    QString prenom_e=ui->le_prenom_e->text();
    QString mail_e=ui->le_mail_e->text();
    QString salaire_e=ui->le_salaire_e->text();
    QString date_e=ui->le_date_e->text();


    employe e (id_e,nom_e,prenom_e,mail_e,salaire_e,date_e);

       ui->tv_afficher->setModel(e.trier(l));
}
void MainWindow::on_recherche_textChanged(const QString &arg1)
{


    QString max=ui->max->text();
    QString recherche=ui->recherche->text();
    employe e;


       ui->tv_afficher->setModel(e.recherche(recherche,max));
}




void MainWindow::on_chatbox_clicked()
{
  chat =new chatbox(this);
  chat->show();
}


void MainWindow::on_pdf_clicked()
{
    QPdfWriter pdf("khalilproject.pdf");
            QPainter painter(&pdf);
            int i = 4000;
                   painter.setPen(Qt::red);
                   painter.setFont(QFont("Time New Roman", 25));
                   painter.drawText(3000,1400,"Liste des employes");
                   painter.setPen(Qt::black);
                   painter.setFont(QFont("Time New Roman", 15));
                   painter.drawRect(100,100,9400,2500);
                   painter.drawRect(100,3000,9400,500);
                   painter.setFont(QFont("Time New Roman", 9));
                   painter.drawText(100,3300,"id_e");
                   painter.drawText(2000,3300,"nom_e");
                   painter.drawText(4000,3300,"prenom_e");
                   painter.drawText(6000,3300,"mail_e");
                    painter.drawText(8000,3300,"salaire_e");
                    painter.drawText(10000,3300,"date_e");


                   QSqlQuery query;
                   query.prepare("select * from employe");
                   query.exec();
                   while (query.next())
                   {
                       painter.drawText(100,i,query.value(0).toString());
                       painter.drawText(2000,i,query.value(1).toString());
                       painter.drawText(4000,i,query.value(2).toString());
                       painter.drawText(6000,i,query.value(3).toString());
                       painter.drawText(8000,i,query.value(4).toString());
                       painter.drawText(10000,i,query.value(0).toString());
                       painter.drawText(12000,i,query.value(1).toString());

                      i = i + 350;
                   }
            QMessageBox::information(nullptr,QObject::tr("pdf"),
                    QObject::tr("text has been written to pdf"),
                    QMessageBox::Ok);

                                QDesktopServices::openUrl(QUrl("khalilproject.pdf"));
}

void MainWindow::myfunction()
{
    QTime time =QTime::currentTime();
       QString time_text=time.toString("hh : mm : ss");
       ui->label_7 ->setText(time_text);
}

