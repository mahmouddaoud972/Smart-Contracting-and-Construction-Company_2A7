#ifndef HISTO_H
#define HISTO_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>

class histo
{
private:
    QString operation;

public:
    histo();
    histo(QString);
    void Ajouter();
    QSqlQueryModel * Afficher( );

};
#endif // HISTO_H
