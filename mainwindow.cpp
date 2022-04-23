
#include <QSystemTrayIcon>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPixmap"
#include <QString>
#include <QMessageBox>
#include <QSortFilterProxyModel>
#include <QPropertyAnimation>
#include "chantier.h"
#include "agenda.h"
#include "ui_agenda.h"
#include "connection.h"
#include "histo.h"
#include <QQuickView>
#include "src/qtquickcontrolsapplication.h"
#include "src/sqleventmodel.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QSqlQueryModel>


#include <QDateTime>
#include <QDebug>

#include<QSystemTrayIcon>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap bkgnd("C:/Users/Mahmoud/Desktop/chance/chantier/images/screen.jpg");
        bkgnd = bkgnd.scaled(1920,1080);
        QPalette palette;
        palette.setBrush(QPalette::Background, bkgnd);
        this->setPalette(palette);
        Connection c;
        c.createconnect();
        chantier K;
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
    int id_c=ui->le_idc->text().toInt();
    QString adresse_c=ui->le_adresse_c->text();
    QString surface_c=ui->le_surface_c->text();
    QString budget_c=ui->le_budget->text();
    QString nbre_chambre=ui->sb_chambre->text();
    QString nbre_etage=ui->sb_etage->text();
    QString jardin=ui->le_jardin->text();


    chantier c  (id_c,adresse_c,nbre_chambre,nbre_etage,surface_c,budget_c,jardin);
    bool test=c.ajouter();
    if (test)
    {
        QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
                notifyIcon->show();


               notifyIcon->showMessage("Ajouter ","Vous avez Ajouté un chantier ",QSystemTrayIcon::Information,15000);

        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("Ajout effectué. \n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        QString operation="ajout";
                histo h(operation);
                h.Ajouter();
                ui->view_histo->setModel(h.Afficher());

}
    else
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                    QObject::tr("Ajout non effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);



     show_tables();
     ui->le_idc->clear();
        ui->le_adresse_c->clear();
        ui->le_budget->clear();
        ui->sb_chambre->clear();
        ui->sb_etage->clear();
        ui->le_jardin->clear();
        ui->le_surface_c->clear();

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
QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
        notifyIcon->show();


       notifyIcon->showMessage("Afficher","Vous avez affiché les chantiers ",QSystemTrayIcon::Information,15000);

}


void MainWindow::on_pb_supprimer_clicked()
{
    int id_c=ui->le_idc->text().toInt();
    QString adresse_c=ui->le_adresse_c->text();
    QString surface_c=ui->le_surface_c->text();
    QString budget_c=ui->le_budget->text();
    QString nbre_chambre=ui->sb_chambre->text();
    QString nbre_etage=ui->sb_etage->text();
    QString jardin=ui->le_jardin->text();

    chantier c (id_c,adresse_c,nbre_etage,nbre_chambre,surface_c,budget_c,jardin);
      c.supprimer(ui->le_supp->text());
  QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
          notifyIcon->show();


         notifyIcon->showMessage("Supprimer ","Vous avez supprimé un chantier ",QSystemTrayIcon::Information,15000);

  ui->le_supp->clear();

 //refresh du tableau (affichage)
   show_tables();

}

void MainWindow::on_pb_modifier_clicked()
{
    //recuperation des donnees
    int id_c=ui->le_idc->text().toInt();
    QString id_m=ui->le_idc->text();
    QString adresse_c=ui->le_adresse_c->text();
    QString surface_c=ui->le_surface_c->text();
    QString budget_c=ui->le_budget->text();
    QString nbre_chambre=ui->sb_chambre->text();
    QString nbre_etage=ui->sb_etage->text();
    QString jardin=ui->le_jardin->text();


      //modifier
    chantier c  (id_c,adresse_c,nbre_chambre,nbre_etage,surface_c,budget_c,jardin);
      c.modifier(id_m);




  //refresh du tableau (affichage)
   show_tables();
   ui->le_idc->clear();
      ui->le_adresse_c->clear();
      ui->le_budget->clear();
      ui->sb_chambre->clear();
      ui->sb_etage->clear();
      ui->le_jardin->clear();
      ui->le_surface_c->clear();
      QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
              notifyIcon->show();


             notifyIcon->showMessage("Modifier ","Vous avez modifié un chantier ",QSystemTrayIcon::Information,15000);

   }


void MainWindow::on_tv_afficher_activated(const QModelIndex &index)
{
    QString val=ui->tv_afficher->model()->data(index).toString();

        QSqlQuery query;


        query.prepare(" select * from chantier where id_c='"+val+"'");
        query.bindValue(":id_c", val);

       if (query.exec())
       {
           while(query.next())
           {
               ui->le_idc->setText(query.value(0).toString());
               ui->le_adresse_c->setText(query.value(1).toString());
               ui->le_budget->setText(query.value(5).toString());
               ui->sb_chambre->setText(query.value(3).toString());
               ui->sb_etage->setText(query.value(2).toString());
               ui->le_jardin->setText(query.value(6).toString());
               ui->le_surface_c->setText(query.value(4).toString());


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




void MainWindow::on_le_jardin_editingFinished()
{
    QString val=ui->le_jardin->text();
    if( (val!="oui")&&(val!="non"))
      {  QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                    QObject::tr("JARDIN NON VALID \n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }


}



void MainWindow::on_sb_etage_editingFinished()
{
    int val=ui->sb_etage->text().toInt();
    if (val<=0)
      {  QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                    QObject::tr("NOMBRE ETAGE NON VALID \n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }

}

void MainWindow::on_sb_chambre_editingFinished()
{
    int val=ui->sb_chambre->text().toInt();
    if (val<=0)
      {  QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                    QObject::tr("NOMBRE CHAMBRE NON VALID \n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void MainWindow::on_le_budget_editingFinished()
{
    int val=ui->le_budget->text().toFloat();
    if (val<=0)
      {  QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                    QObject::tr("NOMBRE ETAGE NON VALID \n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}
void MainWindow::on_le_surface_c_editingFinished()
{
    int val=ui->le_surface_c->text().toInt();
    if (val<=0)
      {  QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                    QObject::tr("Surface  NON VALID \n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}


void MainWindow::on_toolButton_clicked()
{

    QString l=ui->tri->currentText();

    int id_c=ui->le_idc->text().toInt();
    QString id_m=ui->le_idc->text();
    QString adresse_c=ui->le_adresse_c->text();
    QString surface_c=ui->le_surface_c->text();
    QString budget_c=ui->le_budget->text();
    QString nbre_chambre=ui->sb_chambre->text();
    QString nbre_etage=ui->sb_etage->text();
    QString jardin=ui->le_jardin->text();


    chantier c (id_c,adresse_c,nbre_etage,nbre_chambre,surface_c,budget_c,jardin);

       ui->tv_afficher->setModel(c.trier(l));
}


void MainWindow::on_camera_clicked()
{
    cam=new camera(this);
    cam->show();
}
void MainWindow::myfunction()
{
    QTime time =QTime::currentTime();
       QString time_text=time.toString("hh : mm : ss");
       ui->label2 ->setText(time_text);
}



void MainWindow::on_recherche_textChanged(const QString &arg1)
{


    QString max=ui->max->text();
    QString recherche=ui->recherche->text();
    chantier c;


       ui->tv_afficher->setModel(c.recherche(recherche,max));
}

void MainWindow::on_pushButton_clicked()
{
    qmlRegisterType<SqlEventModel>("org.qtproject.examples.calendar", 1, 0, "SqlEventModel");
        ui->quickWidget->setSource(QUrl("qrc:/qml/main.qml"));
        ui->quickWidget->show();
}


void MainWindow::on_historique_clicked()
{

        histo h;
        ui->view_histo->setModel(h.Afficher());


}


void MainWindow::on_ajouter_clicked()
{
    QString event=ui->event->text();
   // ui->dateevent->setDate(QDate::fromString("01-01-2014","dd-mm-yyyy"));
    QString date_c=ui->dateevent->text();
    agenda a(event,date_c);
    a.ajouter();

}



