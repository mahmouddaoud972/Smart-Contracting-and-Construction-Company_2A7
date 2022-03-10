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
}
Fournisseur::Fournisseur(int id_f,QString adresse_f,QString numtel_f,QString mail_f,QString type_f,QString nom_f,QString prenom_f)
{this->id_f=id_f;
this->adresse_f=adresse_f;
this->numtel_f=numtel_f;
this->mail_f=mail_f;
this->type_f=type_f;
this->nom_f=nom_f;
this->prenom_f=prenom_f;

}
int Fournisseur::getidf(){return id_f;}
QString Fournisseur::getadressef(){return adresse_f;}
QString Fournisseur::getnumtelf(){return numtel_f;}
QString Fournisseur::getmailf(){return mail_f;}
QString Fournisseur::gettypef(){return type_f;}
QString Fournisseur::getnomf(){return nom_f;}
QString Fournisseur::getprenomf(){return prenom_f;}


void Fournisseur::setidf(int id_f){this->id_f=id_f;}
void Fournisseur::setadressef(QString adresse_f){this->adresse_f=adresse_f;}
void Fournisseur::setnumtelf(QString numtel_f){this->numtel_f=numtel_f;}
void Fournisseur::setmailf(QString mail_f){this->mail_f=mail_f;}
void Fournisseur::settypef(QString type_f){this->type_f=type_f;}
void Fournisseur::setnomf(QString nom_f){this->nom_f=nom_f;}
void Fournisseur::setprenomf(QString prenom_f){this->prenom_f=prenom_f;}

bool Fournisseur::ajouter()
{


   QSqlQuery query;
   QString id_string= QString::number(id_f);

   query.prepare("INSERT INTO fournisseur (id_f,adresse_f,numtel_f,mail_f,type_f,nom_f,prenom_f) "
                 "VALUES (:id_f,:adresse_f,:numtel_f,:mail_f,:type_f,:nom_f,:prenom_f)");
   query.bindValue(":id_f",id_string);
   query.bindValue(":adresse_f", adresse_f);
   query.bindValue(":numtel_f", numtel_f);
   query.bindValue(":mail_f", mail_f);
   query.bindValue(":type_f", type_f);
   query.bindValue(":nom_f", nom_f);
   query.bindValue(":prenom_f", prenom_f);


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


    query.prepare(" UPDATE fournisseur SET adresse_f= :adresse_f , numtel_f= :numtel_f , mail_f= :mail_f ,type_f= :type_f , nom_f= :nom_f , prenom_f= :prenom_f where id_f= :id_f");
    query.bindValue(":id_f", selected);
    query.bindValue(":adresse_f", adresse_f);
    query.bindValue(":numtel_f", numtel_f);
    query.bindValue(":mail_f", mail_f);
    query.bindValue(":type_f", type_f);
    query.bindValue(":nom_f", nom_f);
    query.bindValue(":prenom_f", prenom_f);


    return    query.exec();

}


