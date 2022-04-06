#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPixmap"
#include <QString>
#include <QMessageBox>
#include <QSortFilterProxyModel>
#include <QPropertyAnimation>
#include "fournisseur.h"
#include "connection.h"
#include "map.h"
#include "mail.h"
#include  "histo.h"
#include <QSystemTrayIcon>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap bkgnd("E:/Projet/fournisseur/images/screen.jpg");
        bkgnd = bkgnd.scaled(1327,749);
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
    QString lat_f=ui->le_lat->text();
    QString long_f=ui->le_long->text();




    Fournisseur F (id_f,adressse_f,numtel_f,mail_f,type_f,nom_f,prenom_f,lat_f,long_f);
    bool test=F.ajouter();
    if (test)
    { QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
        notifyIcon->show();
       notifyIcon->showMessage("Ajouter ","Ajouter succèses",QSystemTrayIcon::Information,15000);
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
     ui->le_lat->clear();
     ui->le_long->clear();
     ui->cb_type->setCurrentIndex(0);

}
void MainWindow::show_tables(){

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
//recherche
void MainWindow::on_trecherchelt_textChanged(const QString &arg1)
{
    proxytr->setFilterFixedString(arg1);
}
void MainWindow::on_trecherchec_currentIndexChanged(int index)
{
    selcoltr=ui->trecherchec->currentIndex();
   show_tables();
}


void MainWindow::on_tv_afficher_clicked(const QModelIndex &index)
{
    //recuperation
  QString sel="";
sel=ui->tv_afficher->model()->data(index).toString();

//affichage
  ui->le_supp->setText(sel);
  QSqlQuery query;


  query.prepare(" select * from fournisseur where id_f='"+sel+"'");
  query.bindValue(":id_f", sel);

 if (query.exec())
 {
     while(query.next())
     {

  ui->le_dest->setText(query.value(3).toString());
     }
//  ui->le_idf->setText(sel);

}
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
    QString lat_f=ui->le_lat->text();
    QString long_f=ui->le_long->text();


      //modifier
    Fournisseur F (id_f,adressse_f,numtel_f,mail_f,type_f,nom_f,prenom_f,lat_f,long_f);
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
   ui->le_lat->clear();
   ui->le_long->clear();

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
           ui->le_lat->setText(query.value(7).toString());
           ui->le_long->setText(query.value(8).toString());



       }
   }

}





void MainWindow::on_le_idf_editingFinished()
{
    int val=ui->le_idf->text().toInt();
    if(val>0){
        QMessageBox::information(nullptr, QObject::tr("not OK"),
                    QObject::tr("idnot valid. \n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }

}

void MainWindow::on_le_prenom_editingFinished()
{
    int test=0,i=1;
    QString val=ui->le_prenom->text();
    while((i<val.length()-1)||(test==1)){
        if(((val[i]<'a')&&(val[i]>'z'))||((val[0]<'A')&&(val[0]>'Z'))){

           QMessageBox::information(nullptr, QObject::tr("not OK"),
                       QObject::tr("prenon not valid . \n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);
          test=1;

        }else{ i++;}

}


}

/*void MainWindow::on_tri_2_clicked()
{
   QString l=ui->tri->currentText();
    int id_f=ui->le_idf->text().toInt();
    QString adressse_f=ui->le_adresse->text();
    QString nom_f=ui->le_nom->text();
    QString mail_f=ui->le_mail->text();
    QString prenom_f=ui->le_prenom->text();
    QString numtel_f=ui->le_numtel->text();
    QString type_f=ui->cb_type->currentText();


      //modifier
    Fournisseur F (id_f,adressse_f,numtel_f,mail_f,type_f,nom_f,prenom_f);
    ui->tv_afficher->setModel(F.trier(l));

}*/

void MainWindow::on_tri_currentIndexChanged(const QString &arg1)
{
    int id_f=ui->le_idf->text().toInt();
    QString adressse_f=ui->le_adresse->text();
    QString nom_f=ui->le_nom->text();
    QString mail_f=ui->le_mail->text();
    QString prenom_f=ui->le_prenom->text();
    QString numtel_f=ui->le_numtel->text();
    QString type_f=ui->cb_type->currentText();
    QString lat_f=ui->le_lat->text();
    QString long_f=ui->le_long->text();



      //modifier
    Fournisseur F (id_f,adressse_f,numtel_f,mail_f,type_f,nom_f,prenom_f,lat_f,long_f);
    ui->tv_afficher->setModel(F.trier(arg1));

}

void MainWindow::on_pb_map_clicked()
{
    map =new Map(this);
    map->show();

}

void MainWindow::on_pb_mail_clicked()
{
    QString er = ui->le_dest->text();

    Mail editorplainwidget;
    editorplainwidget.setData(er);
    editorplainwidget.exec();


}


void MainWindow::on_pb_histo_clicked()
{
    hist=  new histo();
    hist->Afficher();

}
