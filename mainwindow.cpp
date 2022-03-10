#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPixmap"
#include <QString>
#include <QMessageBox>
#include <QSortFilterProxyModel>
#include <QPropertyAnimation>
#include "chantier.h"
#include "connection.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap bkgnd("C:/Users/Mahmoud/Desktop/mahmoudd/images/screen.jpg");
        bkgnd = bkgnd.scaled(1920,1020);
        QPalette palette;
        palette.setBrush(QPalette::Background, bkgnd);
        this->setPalette(palette);


}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_pb_ajouter_clicked()
{
    int id_c=ui->le_idc->text().toInt();
    QString adresse_c=ui->le_adresse_c->text();
    float surface_c=ui->le_surface_c->text().toFloat();
    float budget_c=ui->le_budget->text().toFloat();
    int nbre_chambre=ui->sb_chambre->text().toInt();
    int nbre_etage=ui->sb_etage->text().toInt();
    QString jardin=ui->le_jardin->text();


    chantier c  (id_c,adresse_c,nbre_etage,nbre_chambre,surface_c,budget_c,jardin);
    bool test=c.ajouter();
    if (test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("Ajout effectué. \n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

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
}


void MainWindow::on_pb_supprimer_clicked()
{
    int id_c=ui->le_idc->text().toInt();
    QString adresse_c=ui->le_adresse_c->text();
    float surface_c=ui->le_surface_c->text().toFloat();
    float budget_c=ui->le_budget->text().toFloat();
    int nbre_chambre=ui->sb_chambre->text().toInt();
    int nbre_etage=ui->sb_etage->text().toInt();
    QString jardin=ui->le_jardin->text();

    chantier c (id_c,adresse_c,nbre_etage,nbre_chambre,surface_c,budget_c,jardin);
  c.supprimer(ui->le_supp->text());

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
    float surface_c=ui->le_surface_c->text().toFloat();
    float budget_c=ui->le_budget->text().toFloat();
    int nbre_chambre=ui->sb_chambre->text().toInt();
    int nbre_etage=ui->sb_etage->text().toInt();
    QString jardin=ui->le_jardin->text();


      //modifier
    chantier c  (id_c,adresse_c,nbre_etage,nbre_chambre,surface_c,budget_c,jardin);
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
               //ui->sb_chambre->value(query.value(3));
               //ui->sb_etage->setText(query.value(2).toString());
               ui->le_jardin->setText(query.value(6).toString());
               ui->le_surface_c->setText(query.value(4).toString());


           }
       }
}
