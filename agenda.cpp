#include <QSystemTrayIcon>
#include "agenda.h"
#include "ui_agenda.h"
#include "connection.h"
#include <QtQml>
#include <QString>
#include <QSortFilterProxyModel>
#include <QPropertyAnimation>
#include <QQuickView>
#include "src/qtquickcontrolsapplication.h"
#include "src/sqleventmodel.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QSqlQueryModel>

agenda::agenda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::agenda)
{
    ui->setupUi(this);
    Connection c;
    c.createconnect();

}

agenda::agenda()
{
    delete ui;
    event="";
    date_c="";
}
agenda::agenda(QString event, QString date_c)
{
    this->event=event;
    this->date_c=date_c;
}

QString agenda::getevent(){return event;}
QString agenda::getdate(){return date_c;}



void agenda::setevent(QString event){this->event=event;}
void agenda::setdate(QString date_c){this->date_c=date_c;}

bool agenda::ajouter()
{
     QSqlQuery query;
     query.prepare("INSERT INTO agenda (event,date_c) VALUES (:event,:date_c)");
     query.bindValue(":event",event );
     query.bindValue(":date_c",date_c);

       return  query.exec();
}

/*void agenda::on_ajouter_clicked()
{
     QString event=ui->event->text();
     QString date_c=ui->dateevent->date().toString("dd.MM.yyyy");
     ajouter();

}*/
