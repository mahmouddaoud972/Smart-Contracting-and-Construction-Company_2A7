#include "mainwindow.h"
#include "qrcode.h"
#include "ui_mainwindow.h"
#include "QPixmap"
#include <QString>
#include <QMessageBox>
#include <QSortFilterProxyModel>
#include <QPropertyAnimation>
#include "matier.h"
#include "connection.h"
#include <QMessageBox>
#include <QtWidgets>
#include <QSystemTrayIcon>
#include <QTextDocument>
#include <QTextStream>
#include <stats.h>
using namespace ::qrcodegen;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap bkgnd("C:/Users/ASUS/Desktop/matier/images/screen.jpg");
        bkgnd = bkgnd.scaled(1366,749);
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
    int id_m=ui->le_idm->text().toInt();
    QString type_m=ui->cb_typem->currentText();
    QString quantite_m=ui->le_qt->text();
    QString prix_achat_m=ui->le_prix->text();
    QString num_depo_m=ui->le_depo->text();


    Matier M (id_m, type_m, quantite_m, prix_achat_m, num_depo_m);
    bool test=M.ajouter();
    if (test)
    {
        QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
               notifyIcon->show();
               notifyIcon->setIcon(QIcon("icone.png"));

               notifyIcon->showMessage("GESTION MATIERE ","Matiere Ajouté",QSystemTrayIcon::Information,15000);
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("Ajout effectué. \n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                    QObject::tr("Ajout non effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);



     show_tables();
     ui->le_idm->clear();
     ui->le_qt->clear();
     ui->le_prix->clear();
     ui->le_depo->clear();
     ui->cb_typem->setCurrentIndex(0);

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
//tri
/*void Matier::on_toolButton_5_clicked()
{
    QString l=ui->comboBox_4->currentText();
    ui->tableView->setModel(p.trier(l));
}*/
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
//  ui->le_idf->setText(sel);

}

void MainWindow::on_pb_afficher_clicked()
{
show_tables();
}


void MainWindow::on_pb_supprimer_clicked()
{
    Matier M;
  M.supprimer(ui->le_supp->text());

  ui->le_supp->clear();

 //refresh du tableau (affichage)
   show_tables();
   QSystemTrayIcon * notifyIcon = new QSystemTrayIcon;
              notifyIcon-> show ();
               notifyIcon-> showMessage ( " GESTION MATIERE " , " Matiere Supprimé " , QSystemTrayIcon :: Information, 15000 );
}

void MainWindow::on_pb_modifier_clicked()
{
    //recuperation des donnees
    QString id_x=ui->le_idm->text();
    int id_m=ui->le_idm->text().toInt();
    QString type_m=ui->cb_typem->currentText();
    QString quantite_m=ui->le_qt->text();
    QString prix_achat_m=ui->le_prix->text();
    QString num_depo_m=ui->le_depo->text();


      //modifier
    Matier M (id_m, type_m, quantite_m, prix_achat_m, num_depo_m);
      M.modifier(id_x);


  //refresh du tableau (affichage)
   show_tables();

   //clear
   ui->le_idm->clear();
   ui->le_qt->clear();
   ui->le_prix->clear();
   ui->le_depo->clear();
   ui->cb_typem->setCurrentIndex(0);
   //notif
   QSystemTrayIcon * notifyIcon = new QSystemTrayIcon;
              notifyIcon-> show ();
               notifyIcon-> showMessage ( " GESTION MATIERE " , " Matiere Modifié " , QSystemTrayIcon :: Information, 15000 );
}


void MainWindow::on_tv_afficher_activated(const QModelIndex &index)
{
    QString val=ui->tv_afficher->model()->data(index).toString();

    QSqlQuery query;


    query.prepare(" select * from matiere where id_m='"+val+"'");
    query.bindValue(":id_m", val);

   if (query.exec())
   {
       while(query.next())
       {
           ui->le_idm->setText(query.value(0).toString());
           ui->le_depo->setText(query.value(4).toString());
           ui->le_qt->setText(query.value(2).toString());
           ui->le_prix->setText(query.value(3).toString());
           ui->cb_typem->setCurrentText(query.value(1).toString());


       }
   }

}




void MainWindow::on_tri_currentIndexChanged(const QString &arg1)
{
    int id_m=ui->le_idm->text().toInt();
    QString type_m=ui->cb_typem->currentText();
    QString quantite_m=ui->le_qt->text();
    QString prix_achat_m=ui->le_prix->text();
    QString num_depo_m=ui->le_depo->text();


    Matier M (id_m, type_m, quantite_m, prix_achat_m, num_depo_m);
    ui->tv_afficher->setModel(M.trier(arg1));

}

void MainWindow::on_excel_clicked()
{
   tmpmatier.excel(ui->tv_afficher);
}

void MainWindow::on_qrCode_clicked()
{
    int tabeq=ui->tv_afficher->currentIndex().row();
                   QVariant idd=ui->tv_afficher->model()->data(ui->tv_afficher->model()->index(tabeq,0));
                   QString id=idd.toString();
                  // QString code=idd.toSTring();
                   QSqlQuery qry;
                   qry.prepare("select * from matiere where id_m=:id_m");
                   qry.bindValue(":code",id);
                   qry.exec();

                    QString type_m,quantite_m,prix_achat_m,num_depo_m;//attributs
                    QDate datep;

                  while(qry.next()){

                      id=qry.value(1).toString();
                       type_m=qry.value(2).toString();
                        num_depo_m=qry.value(3).toString();
                       prix_achat_m=qry.value(4).toString();
                       quantite_m=qry.value(6).toString();
                       datep=qry.value(7).toDate();


                   }
                   id=QString(id);
                          id="CODE:\t" +id+ "Type\t:" +type_m+ "Num:\t" +num_depo_m+ "Prix achat:\t" +prix_achat_m+ "quantité :\t" +quantite_m ;
                   QrCode qr = QrCode::encodeText(id.toUtf8().constData(), QrCode::Ecc::HIGH);

                   // Read the black & white pixels
                   QImage im(qr.getSize(),qr.getSize(), QImage::Format_RGB888);
                   for (int y = 0; y < qr.getSize(); y++) {
                       for (int x = 0; x < qr.getSize(); x++) {
                           int color = qr.getModule(x, y);  // 0 for white, 1 for black

                           // You need to modify this part
                           if(color==0)
                               im.setPixel(x, y,qRgb(254, 254, 254));
                           else
                               im.setPixel(x, y,qRgb(0, 0, 0));
                       }
                   }
                   im=im.scaled(100,100);
                  ui->qr_code->setPixmap(QPixmap::fromImage(im));
}


void MainWindow::on_pushButton_clicked()
{
    third = new Stats(this); // pour ouvrir la fenetre contenant stat
         third->choix_pie();
          third->show();
}
