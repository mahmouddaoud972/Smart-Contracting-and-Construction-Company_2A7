#include "chantier.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QSqlQueryModel>

chantier::chantier()
{
    id_c=0;
    adresse_c="";
    surface_c=0;
    budget_c=0;
    nbre_etage=0;
    nbre_chambre=0;
    jardin="";

}

chantier::chantier(int id_c,QString adresse_c,int nbre_chambre,int nbre_etage,float surface_c,float budget_c,QString jardin)
{
    this->id_c=id_c;
    this->adresse_c=adresse_c;
    this->surface_c=surface_c;
    this->budget_c=budget_c;
    this->nbre_etage=nbre_etage;
    this->nbre_chambre=nbre_chambre;
    this->jardin=jardin;


}
int chantier::getid_c(){return id_c;}
QString chantier::getadresse_c(){return adresse_c;}
float chantier::getsurface_c(){return surface_c;}
float chantier::getbudget_c(){return budget_c;}
int chantier::getnbre_etage(){return nbre_etage;}
int chantier::getnbre_chambre(){return nbre_chambre;}
QString chantier::getjardin(){return jardin;}

void chantier::setid_c(int id_c){this->id_c=id_c;}
void chantier::setadresse_c(QString adresse_c){this->adresse_c=adresse_c;}
void chantier::setsurface_c(float surface_c){this->surface_c=surface_c;}
void chantier::setbudget_c(float budget_c){this->budget_c=budget_c;}
void chantier::setnbre_etage(int nbre_etage){this->nbre_etage=nbre_etage;}
void chantier::setnbre_chambre(int nbre_chambre){this->nbre_chambre=nbre_chambre;}
void chantier::setjardin(QString jardin ){this->jardin=jardin;}



bool chantier::ajouter()
{

    QSqlQuery query;
    QString id_string= QString::number(id_c);

    query.prepare("INSERT INTO chantier (id_c,adresse_c,surface_c,budget,nbre_etage,nbre_chambre,jardin) "
                  "VALUES (:id_c,:adresse_c,:surface_c,:budget,:nbre_etage,:nbre_chambre,:jardin)");
    query.bindValue(":id_f",id_string);
    query.bindValue(":adresse_c", adresse_c);
    query.bindValue(":surface_c", surface_c);
    query.bindValue(":budget_c", budget_c);
    query.bindValue(":nbre_etage", nbre_etage);
    query.bindValue(":nbre_chambre", nbre_chambre);
    query.bindValue(":jardin", jardin);


    return  query.exec();

}
QSqlQueryModel * chantier ::afficher()
{
    QSqlQueryModel * model=new QSqlQueryModel();
        model->setQuery("SELECT * FROM chantier");

        return model;
}
bool chantier::supprimer(QString selected)
{
    QSqlQuery query;
       query.prepare("Delete from chantier where id_c = :id_c ");
       query.bindValue(":id_c", selected);
       return    query.exec();

}

bool chantier ::modifier(QString selected){

    QSqlQuery query;


    query.prepare(" UPDATE chantier SET adresse_c= :adresse_c , surface_c= :surface_c , budget_c= :budget_c ,nbre_etage= :nbre_etage , nbre_chambre= :nbre_chambre , jardin= :jardin where id_c= :id_c");
    query.bindValue(":id_c", selected);
    query.bindValue(":adresse_c", adresse_c);
    query.bindValue(":surface_c", surface_c);
    query.bindValue(":budget_c", budget_c);
    query.bindValue(":nbre_etage", nbre_etage);
    query.bindValue(":nbre_chambre", nbre_chambre);
    query.bindValue(":jardin", jardin);


    return    query.exec();

}

