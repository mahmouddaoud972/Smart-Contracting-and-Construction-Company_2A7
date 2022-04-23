#include "employe.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QSqlQueryModel>

employe::employe()
{
    id_e=0;
    nom_e="";
    prenom_e="";
    mail_e="";
    salaire_e="";
    date_e="";


}

employe::employe(int id_e,QString nom_e,QString prenom_e,QString mail_e,QString salaire_e,QString date_e)
{
    this->id_e=id_e;
    this->nom_e=nom_e;
    this->prenom_e=prenom_e;
    this->mail_e=mail_e;
    this->salaire_e=salaire_e;
    this->date_e=date_e;


}
int employe::getid_e(){return id_e;}
QString employe::getnom_e(){return nom_e;}
QString employe::getprenom_e(){return prenom_e;}
QString employe::getmail_e(){return mail_e;}
QString employe::getsalaire_e(){return salaire_e;}
QString employe::getdate_e(){return date_e;}

void employe::setid_e(int id_e){this->id_e=id_e;}
void employe::setnom_e(QString nom_e){this->nom_e=nom_e;}
void employe::setprenom_e(QString prenom_e){this->prenom_e=prenom_e;}
void employe::setmail_e(QString mail_e){this->mail_e=mail_e;}
void employe::setsalaire_e(QString salaire_e){this->salaire_e=salaire_e;}
void employe::setdate_e(QString date_e){this->date_e=date_e;}



bool employe::ajouter()
{

    QSqlQuery query;
    QString id_string= QString::number(id_e);

    query.prepare("INSERT INTO employe (id_e,nom_e,prenom_e,mail_e,salaire_e,date_e) "
                  "VALUES (:id_e,:nom_e,:prenom_e,:mail_e,:salaire_e,:date_e)");
    query.bindValue(":id_e",id_string);
    query.bindValue(":nom_e", nom_e);
    query.bindValue(":prenom_e", prenom_e);
    query.bindValue(":mail_e", mail_e);
    query.bindValue(":salaire_e", salaire_e);
    query.bindValue(":date_e", date_e);



    return  query.exec();

}
QSqlQueryModel * employe ::afficher()
{
    QSqlQueryModel * model=new QSqlQueryModel();
        model->setQuery("SELECT * FROM employe");

        return model;
}
QSqlQueryModel * employe::recherche(QString rech,QString rech1)
{
QSqlQueryModel * model=new QSqlQueryModel();
model->setQuery("select * from employe where nom_e like ('%"+rech+"%') AND prenom_e like ('%"+rech1+"%')  ");
model->setHeaderData(0,Qt::Horizontal,QObject::tr("id_e"));
model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom_e"));
model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom_e"));
model->setHeaderData(3,Qt::Horizontal,QObject::tr("mail-e"));
model->setHeaderData(4,Qt::Horizontal,QObject::tr("salaire_e"));
model->setHeaderData(5,Qt::Horizontal,QObject::tr("date_e"));

return model;
}
bool employe::supprimer(QString selected)
{
    QSqlQuery query;
       query.prepare("Delete from employe where id_e = :id_e ");
       query.bindValue(":id_e", selected);
       return    query.exec();

}

bool employe ::modifier(QString selected){

    QSqlQuery query;


    query.prepare(" UPDATE employe SET nom_e= :nom_e , prenom_e= :prenom_e , mail_e= :mail_e , salaire_e= :salaire_e ,date_e= :date_e  where id_e= :id_e");
    query.bindValue(":id_e", selected);
    query.bindValue(":nom_e", nom_e);
    query.bindValue(":prenom_e", prenom_e);
    query.bindValue(":mail_e", mail_e);
    query.bindValue(":salaire_e", salaire_e);
    query.bindValue(":date_e", date_e);




    return    query.exec();

}
QSqlQueryModel *employe::trier(QString x){

            QSqlQueryModel *model= new QSqlQueryModel();
            qDebug()<<x<<endl;
            if(x=="id")
                model->setQuery("select * from employe order by id_e ASC ");
            else if(x=="salaire")
                model->setQuery("select * from employe order by salaire_e ASC ");
            else if (x=="mail")
                model->setQuery("select * from employe order by mail_e ASC ");

            model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_e"));
            model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_e"));
            model->setHeaderData(4, Qt::Horizontal, QObject::tr("prenom_e"));
            model->setHeaderData(5, Qt::Horizontal, QObject::tr("mail_e"));
            model->setHeaderData(2, Qt::Horizontal, QObject::tr("salaire_e"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("date_e"));
                return model;
}

