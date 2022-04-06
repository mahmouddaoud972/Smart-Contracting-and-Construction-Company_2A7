#include "histo.h"


#include <QSqlQuery>
#include <QtDebug>
#include<QSqlQueryModel>
#include <QString>

#include <QObject>
#include<QDate>

histo::histo()
{

}
histo::histo(QString b)
 {
    operation=b;
 }

void histo::Ajouter()
{
    QSqlQuery query;


    query.prepare("insert into HISTORIQUE(ID_HISTO,DATE_HISTO,TYPE_OPERATION) values(HISTORIQUE_SEQ.nextval, sysdate, :operation)");// ya3tik numero eli be3de
   query.bindValue(":operation",operation);


 query.exec();
}
QSqlQueryModel * histo::Afficher( )
{
  QSqlQueryModel * model= new QSqlQueryModel();

       model->setQuery("select DATE_HISTO, TYPE_OPERATION from HISTORIQUE ;");
       model->setHeaderData(0, Qt::Horizontal,QObject:: tr("date et heure"));
       model->setHeaderData(1, Qt::Horizontal,QObject:: tr("Operation"));

 return model;
}
