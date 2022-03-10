#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPixmap"
#include <QString>
#include <QMessageBox>
#include <QSortFilterProxyModel>
#include <QPropertyAnimation>
#include "fournisseur.h"
#include "connection.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap bkgnd("C:/Users/21655/Desktop/Projet C++/Acc/img/screen.jpg");
        bkgnd = bkgnd.scaled(1400,800);
        QPalette palette;
        palette.setBrush(QPalette::Background, bkgnd);
        this->setPalette(palette);

        Connection c;
        c.createconnect();
        //affichage contenu base
        //show_tables();

}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_pb_ajouter_clicked()
{
    int id_f=ui->le_idf->text().toInt();
    QString adressse_f=ui->le_adresse->text();
    QString nom_f=ui->le_nom->text();
    QString mail_f=ui->le_mail->text();
    QString prenom_f=ui->le_prenom->text();
    QString numtel_f=ui->le_numtel->text();
    QString type_f=ui->cb_type->currentText();


    Fournisseur F (id_f,adressse_f,numtel_f,mail_f,type_f,nom_f,prenom_f);
    bool test=F.ajouter();
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
     ui->le_idf->clear();
     ui->le_nom->clear();
     ui->le_mail->clear();
     ui->le_numtel->clear();
     ui->le_prenom->clear();
     ui->le_adresse->clear();
     ui->cb_type->setCurrentIndex(0);

}
void MainWindow::show_tables(){
    //travaux
//creation model (masque du tableau)
    proxytr = new QSortFilterProxyModel();

 //definir la source (tableau original)
    proxytr->setSourceModel(tmptr.afficher());

 //pour la recherche
    proxytr->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)
    proxytr->setFilterKeyColumn(selcoltr); // chercher dans tout le tableau (-1) ou donner le numero de la colone
   //remplissage tableau avec le masque
    ui->tv_afficher->setModel(proxytr);


}

void MainWindow::on_tv_afficher_clicked(const QModelIndex &index)
{
    //recuperation
  QString sel="";
sel=ui->tv_afficher->model()->data(index).toString();

//affichage
  ui->le_supp->setText(sel);
//  ui->le_idf->setText(sel);

}

void MainWindow::on_pb_afficher_clicked()
{
show_tables();
}


void MainWindow::on_pb_supprimer_clicked()
{
    Fournisseur f;
  f.supprimer(ui->le_supp->text());

  ui->le_supp->clear();

 //refresh du tableau (affichage)
   show_tables();

}

void MainWindow::on_pb_modifier_clicked()
{
    //recuperation des donnees
    int id_f=ui->le_idf->text().toInt();
    QString id_m=ui->le_idf->text();
    QString adressse_f=ui->le_adresse->text();
    QString nom_f=ui->le_nom->text();
    QString mail_f=ui->le_mail->text();
    QString prenom_f=ui->le_prenom->text();
    QString numtel_f=ui->le_numtel->text();
    QString type_f=ui->cb_type->currentText();


      //modifier
    Fournisseur F (id_f,adressse_f,numtel_f,mail_f,type_f,nom_f,prenom_f);
      F.modifier(id_m);


  //refresh du tableau (affichage)
   show_tables();
   //clear
   ui->le_idf->clear();
   ui->le_nom->clear();
   ui->le_mail->clear();
   ui->le_numtel->clear();
   ui->le_prenom->clear();
   ui->le_adresse->clear();
   ui->cb_type->setCurrentIndex(0);

}


void MainWindow::on_tv_afficher_activated(const QModelIndex &index)
{
    QString val=ui->tv_afficher->model()->data(index).toString();

    QSqlQuery query;


    query.prepare(" select * from fournisseur where id_f='"+val+"'");
    query.bindValue(":id_f", val);

   if (query.exec())
   {
       while(query.next())
       {
           ui->le_idf->setText(query.value(0).toString());
           ui->le_nom->setText(query.value(5).toString());
           ui->le_prenom->setText(query.value(6).toString());
           ui->le_adresse->setText(query.value(1).toString());
           ui->le_numtel->setText(query.value(2).toString());
           ui->le_mail->setText(query.value(3).toString());
           ui->cb_type->setCurrentText(query.value(4).toString());


       }
   }

}

