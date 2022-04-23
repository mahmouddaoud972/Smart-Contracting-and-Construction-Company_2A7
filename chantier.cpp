#include "chantier.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QSqlQueryModel>

chantier::chantier()
{
    id_c=0;
    adresse_c="";
    surface_c="";
    budget_c="";
    nbre_etage="";
    nbre_chambre="";
    jardin="";

}

chantier::chantier(int id_c,QString adresse_c,QString nbre_chambre,QString nbre_etage,QString surface_c,QString budget_c,QString jardin)
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
QString chantier::getsurface_c(){return surface_c;}
QString chantier::getbudget_c(){return budget_c;}
QString chantier::getnbre_etage(){return nbre_etage;}
QString chantier::getnbre_chambre(){return nbre_chambre;}
QString chantier::getjardin(){return jardin;}

void chantier::setid_c(int id_c){this->id_c=id_c;}
void chantier::setadresse_c(QString adresse_c){this->adresse_c=adresse_c;}
void chantier::setsurface_c(QString surface_c){this->surface_c=surface_c;}
void chantier::setbudget_c(QString budget_c){this->budget_c=budget_c;}
void chantier::setnbre_etage(QString nbre_etage){this->nbre_etage=nbre_etage;}
void chantier::setnbre_chambre(QString nbre_chambre){this->nbre_chambre=nbre_chambre;}
void chantier::setjardin(QString jardin ){this->jardin=jardin;}



bool chantier::ajouter()
{

    QSqlQuery query;
    QString id_string= QString::number(id_c);

    query.prepare("INSERT INTO chantier (id_c,adresse_c,nbre_chambre,nbre_etage,surface_c,budget_c,jardin) "
                  "VALUES (:id_c,:adresse_c,:nbre_chambre,:nbre_etage,:surface_c,:budget_c,:jardin)");
    query.bindValue(":id_c",id_string);
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
QSqlQueryModel * chantier::recherche(QString rech,QString rech1)
{
QSqlQueryModel * model=new QSqlQueryModel();
model->setQuery("select * from chantier where adresse_c like ('%"+rech+"%') AND nbre_chambre like ('%"+rech1+"%')  ");
model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));

model->setHeaderData(1,Qt::Horizontal,QObject::tr("adresse_c"));
model->setHeaderData(2,Qt::Horizontal,QObject::tr("nbre_chambre"));
model->setHeaderData(3,Qt::Horizontal,QObject::tr("nbre_etage"));
model->setHeaderData(4,Qt::Horizontal,QObject::tr("surface_c"));
model->setHeaderData(5,Qt::Horizontal,QObject::tr("budget"));
model->setHeaderData(6,Qt::Horizontal,QObject::tr("jardin"));

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
QSqlQueryModel *chantier::trier(QString x){

            QSqlQueryModel *model= new QSqlQueryModel();
            qDebug()<<x<<endl;
            if(x=="id")
                model->setQuery("select * from chantier order by id_c ASC ");
            else if(x=="nombre de chambre")
                model->setQuery("select * from chantier order by nbre_chambre ASC ");
            else if (x=="budget")
                model->setQuery("select * from chantier order by budget_c ASC ");

            model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_c"));
            model->setHeaderData(1, Qt::Horizontal, QObject::tr("adresse_c"));
            model->setHeaderData(2, Qt::Horizontal, QObject::tr("nbre_chambre"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("nbre_etage"));
            model->setHeaderData(4, Qt::Horizontal, QObject::tr("surface_c"));
            model->setHeaderData(5, Qt::Horizontal, QObject::tr("budget_c"));
            model->setHeaderData(6, Qt::Horizontal, QObject::tr("jardin"));
                return model;
}

