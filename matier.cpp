#include "matier.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QSqlQueryModel>
#include <QFile>
#include <QApplication>
#include <QTextStream>
#include <QFileDialog>
#include <QDir>

Matier::Matier()
{

id_m=0;
type_m="";
quantite_m="";
prix_achat_m="";
num_depo_m="";
}
QSqlQueryModel *Matier::trier(QString x){

            QSqlQueryModel *model= new QSqlQueryModel();
            qDebug()<<x<<endl;
            if(x=="ID")
                model->setQuery("select * from matiere order by id_m ASC ");
            else if(x=="TYPE")
                model->setQuery("select * from matiere order by type_m ASC ");
            else if (x=="QUANTITE")
                model->setQuery("select * from matiere order by quantite_m ASC ");
            else if (x=="PRIX ACHAT")
                model->setQuery("select * from matiere order by prix_achat_m ASC ");
            else if (x=="NUM DEPOT")
                model->setQuery("select * from matiere order by num_depo_m ASC ");

            model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
            model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPE"));
            model->setHeaderData(2, Qt::Horizontal, QObject::tr("QUANTITE"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRIX ACHAT"));
            model->setHeaderData(4, Qt::Horizontal, QObject::tr("NUM DEPOT"));
                return model;
}
Matier::Matier(int id_m,QString type_m,QString quantite_m,QString prix_achat_m,QString num_depo_m)
{this->id_m=id_m;
this->type_m=type_m;
this->quantite_m=quantite_m;
this->prix_achat_m=prix_achat_m;
this->num_depo_m=num_depo_m;


}
int Matier::getidm(){return id_m;}
QString Matier::gettypem(){return type_m;}
QString Matier::getquantitem(){return quantite_m;}
QString Matier::getprixm(){return prix_achat_m;}
QString Matier::getdepom(){return num_depo_m;}


void Matier::setidm(int id_m){this->id_m=id_m;}
void Matier::settypem(QString type_m){this->type_m=type_m;}
void Matier::setquantitem(QString quantite_m){this->quantite_m=quantite_m;}
void Matier::setprixm(QString prix_achat_m){this->prix_achat_m=prix_achat_m;}
void Matier::setdepom(QString num_depo_m){this->num_depo_m=num_depo_m;}

bool Matier::ajouter()
{


   QSqlQuery query;
   QString id_string= QString::number(id_m);

   query.prepare("INSERT INTO matiere (id_m,type_m,quantite_m,prix_achat_m,num_depo_m) "
                 "VALUES (:id_m,:type_m,:quantite_m,:prix_achat_m,:num_depo_m)");
   query.bindValue(":id_m",id_string);
   query.bindValue(":type_m", type_m);
   query.bindValue(":quantite_m",quantite_m);
   query.bindValue(":prix_achat_m", prix_achat_m);
   query.bindValue(":num_depo_m", num_depo_m);


   return  query.exec();

}
QSqlQueryModel * Matier::afficher(){

    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM matiere");

    return model;

}
bool Matier:: supprimer (QString selected)
{

    QSqlQuery query;
    query.prepare("Delete from matiere where id_m = :id_m ");
    query.bindValue(":id_m", selected);
    return    query.exec();


}
bool Matier ::modifier(QString selected){

    QSqlQuery query;


    query.prepare(" UPDATE matiere SET type_m= :type_m , quantite_m= :quantite_m , prix_achat_m= :prix_achat_m ,num_depo_m= :num_depo_m where id_m= :id_m");
    query.bindValue(":id_m", selected);
    query.bindValue(":type_m", type_m);
    query.bindValue(":quantite_m",quantite_m);
    query.bindValue(":prix_achat_m", prix_achat_m);
    query.bindValue(":num_depo_m", num_depo_m);


    return    query.exec();

}

void Matier::excel(QTableView *table)
{
    QString filters("CSV files (*.csv);;All files (*.*)");
    QString defaultFilter("CSV files (*.csv)");
    QString fileName = QFileDialog::getSaveFileName(0, "Save file", QCoreApplication::applicationDirPath(),
                                                        filters, &defaultFilter);
    QFile file(fileName);
    QAbstractItemModel *model =  table->model();
    if (file.open(QFile::WriteOnly | QFile::Truncate))
    {
        QTextStream data(&file);
        QStringList strList;
        for (int i = 0; i < model->columnCount(); i++)
        {
            if (model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString().length() > 0)
                strList.append("\"" + model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString() + "\"");
            else
                strList.append("");
         }
         data << strList.join(";") << "\n";
         for (int i = 0; i < model->rowCount(); i++)
         {
            strList.clear();
            for (int j = 0; j < model->columnCount(); j++)
            {

                if (model->data(model->index(i, j)).toString().length() > 0)
                    strList.append("\"" + model->data(model->index(i, j)).toString() + "\"");
                else
                    strList.append("");
             }
                data << strList.join(";") + "\n";
            }
            file.close();
        }
}


