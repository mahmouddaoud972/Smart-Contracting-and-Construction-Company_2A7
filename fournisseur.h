#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H

#include <QString>
#include<QSqlQueryModel>
class Fournisseur
{
public:
    Fournisseur();
    Fournisseur(int, QString, QString, QString, QString, QString, QString,QString,QString);
    int getidf();
    QString getadressef();
    QString getnumtelf();
    QString getmailf();
    QString gettypef();
    QString getnomf();
    QString getprenomf();
    QString getlat();
    QString getlong();
    bool ajouter();
    bool supprimer(QString);
    bool modifier(QString);
    void recuperer(QString);
    QSqlQueryModel * rechercher(QString, QString);

    QSqlQueryModel * afficher();
    QSqlQueryModel *trier(QString x);

    void setidf(int);
    void setadressef(QString);
    void setnumtelf(QString);
    void setmailf(QString);
    void settypef(QString);
    void setnomf(QString);
    void setprenomf(QString);
    void setlat(QString);
    void setlong(QString);


private:
    int id_f;
    QString adresse_f, numtel_f, mail_f, nom_f, prenom_f, type_f,lat_f,long_f ;

};

#endif // FOURNISSEUR_H
