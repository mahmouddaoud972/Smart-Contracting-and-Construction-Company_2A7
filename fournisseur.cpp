#include "fournisseur.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QSqlQueryModel>



Fournisseur::Fournisseur()
{

id_f=0;
nom_f="";
prenom_f="";
adresse_f="";
type_f="";
numtel_f="";
mail_f="";
lat_f="";
long_f="";
}
QSqlQueryModel *Fournisseur::trier(QString x){

            QSqlQueryModel *model= new QSqlQueryModel();
            qDebug()<<x<<endl;
            if(x=="ID")
                model->setQuery("select * from fournisseur order by id_f ASC ");
            else if(x=="Type")
                model->setQuery("select * from fournisseur order by type_f ASC ");
            else if(x=="Adresse")
                model->setQuery("select * from fournisseur order by adresse_f ASC ");
            else if(x=="Numero tel")
                model->setQuery("select * from fournisseur order by numtel_f ASC ");
            else if(x=="Mail")
                model->setQuery("select * from fournisseur order by mail_f ASC ");
            else if (x=="Prenom")
                model->setQuery("select * from fournisseur order by prenom_f ASC ");
            else if (x=="Nom")
                model->setQuery("select * from fournisseur order by nom_f ASC ");

            model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_f"));
            model->setHeaderData(1, Qt::Horizontal, QObject::tr("adresse_f"));
            model->setHeaderData(2, Qt::Horizontal, QObject::tr("numtel_f"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("mail_f"));
            model->setHeaderData(4, Qt::Horizontal, QObject::tr("type_f"));
            model->setHeaderData(5, Qt::Horizontal, QObject::tr("nom_f"));
            model->setHeaderData(6, Qt::Horizontal, QObject::tr("prenom_f"));

                return model;
}
Fournisseur::Fournisseur(int id_f,QString adresse_f,QString numtel_f,QString mail_f,QString type_f,QString nom_f,QString prenom_f,QString lat_f,QString long_f)
{this->id_f=id_f;
this->adresse_f=adresse_f;
this->numtel_f=numtel_f;
this->mail_f=mail_f;
this->type_f=type_f;
this->nom_f=nom_f;
this->prenom_f=prenom_f;
this->lat_f=lat_f;
this->long_f=long_f;

}
int Fournisseur::getidf(){return id_f;}
QString Fournisseur::getadressef(){return adresse_f;}
QString Fournisseur::getnumtelf(){return numtel_f;}
QString Fournisseur::getmailf(){return mail_f;}
QString Fournisseur::gettypef(){return type_f;}
QString Fournisseur::getnomf(){return nom_f;}
QString Fournisseur::getprenomf(){return prenom_f;}
QString Fournisseur::getlat(){return lat_f;}
QString Fournisseur::getlong(){return long_f;}



void Fournisseur::setidf(int id_f){this->id_f=id_f;}
void Fournisseur::setadressef(QString adresse_f){this->adresse_f=adresse_f;}
void Fournisseur::setnumtelf(QString numtel_f){this->numtel_f=numtel_f;}
void Fournisseur::setmailf(QString mail_f){this->mail_f=mail_f;}
void Fournisseur::settypef(QString type_f){this->type_f=type_f;}
void Fournisseur::setnomf(QString nom_f){this->nom_f=nom_f;}
void Fournisseur::setprenomf(QString prenom_f){this->prenom_f=prenom_f;}
void Fournisseur::setlat(QString lat_f){this->lat_f=lat_f;}
void Fournisseur::setlong(QString long_f){this->long_f=long_f;}

bool Fournisseur::ajouter()
{


   QSqlQuery query;
   QString id_string= QString::number(id_f);

   query.prepare("INSERT INTO fournisseur (id_f,adresse_f,numtel_f,mail_f,type_f,nom_f,prenom_f,lat_f,long_f) "
                 "VALUES (:id_f,:adresse_f,:numtel_f,:mail_f,:type_f,:nom_f,:prenom_f,:lat_f,:long_f)");
   query.bindValue(":id_f",id_string);
   query.bindValue(":adresse_f", adresse_f);
   query.bindValue(":numtel_f", numtel_f);
   query.bindValue(":mail_f", mail_f);
   query.bindValue(":type_f", type_f);
   query.bindValue(":nom_f", nom_f);
   query.bindValue(":prenom_f", prenom_f);
   query.bindValue(":lat_f", lat_f);
   query.bindValue(":long_f", long_f);


   return  query.exec();

}
QSqlQueryModel * Fournisseur::afficher(){

    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM fournisseur");

    return model;

}
bool Fournisseur:: supprimer (QString selected)
{

    QSqlQuery query;
    query.prepare("Delete from fournisseur where id_f = :id_f ");
    query.bindValue(":id_f", selected);
    return    query.exec();


}
bool Fournisseur ::modifier(QString selected){

    QSqlQuery query;


    query.prepare(" UPDATE fournisseur SET adresse_f= :adresse_f , numtel_f= :numtel_f , mail_f= :mail_f ,type_f= :type_f , nom_f= :nom_f , prenom_f= :prenom_f,lat_f= :lat_f,long_f= :long_f where id_f= :id_f");
    query.bindValue(":id_f", selected);
    query.bindValue(":adresse_f", adresse_f);
    query.bindValue(":numtel_f", numtel_f);
    query.bindValue(":mail_f", mail_f);
    query.bindValue(":type_f", type_f);
    query.bindValue(":nom_f", nom_f);
    query.bindValue(":prenom_f", prenom_f);
    query.bindValue(":lat_f", lat_f);
    query.bindValue(":long_f", long_f);


    return    query.exec();

}


