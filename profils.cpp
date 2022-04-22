#include "profils.h"

#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
#include<QDebug>

Profils::Profils()
{
user_name="";
MOT_DE_PASSE="";
role="";
}
Profils::Profils(QString user_name ,QString MOT_DE_PASSE, int id,QString role)
{this->user_name=user_name;
this->MOT_DE_PASSE=MOT_DE_PASSE;
    this->id_e = id;
       this->role = role;
}

QString Profils::getusername(){return user_name;}

QString Profils::getmot_de_passe(){return MOT_DE_PASSE;}
QString Profils::getrole(){return role;}




void Profils::setusername(QString user_name){this->user_name=user_name;}
 void Profils::setmot_de_passe(QString MOT_DE_PASSE) {this->MOT_DE_PASSE=MOT_DE_PASSE;}
 void Profils::setrole(QString role) {this->role=role;}


 bool Profils::username(QString i, QString l, QString p) {
     bool test=false;
     QSqlQuery query;
     query.prepare("SELECT id_l, username, password,role FROM compte WHERE id_l=? and username = ? AND password = ?");
     query.addBindValue(i);
     query.addBindValue(l);
     query.addBindValue(p);

     query.exec();

     if (query.next()){
         test=true;
         return test;

     }
     return test;
 }

