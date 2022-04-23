#ifndef CHANTIER_H
#define CHANTIER_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>

class chantier
{
public:
    chantier();
    chantier(int,QString,QString,QString,QString,QString,QString);

    int getid_c();
    QString getadresse_c ();
    QString getnbre_chambre();
    QString getnbre_etage();
    QString getsurface_c();
    QString getbudget_c();
    QString getjardin();

    bool ajouter();
    bool supprimer(QString);
    bool modifier(QString);
    bool recuperer(QString);
    QSqlQueryModel * afficher();

    void setid_c(int);
    void setadresse_c(QString);
    void setnbre_chambre(QString);
    void setnbre_etage(QString);
    void setsurface_c(QString);
    void setbudget_c(QString);
    void setjardin(QString);
    QSqlQueryModel * recherche(QString,QString);

    QSqlQueryModel *trier(QString x);

private:
    int id_c;
    QString surface_c,budget_c,nbre_chambre,nbre_etage;
    QString adresse_c,jardin;

};
#endif // CHANTIER_H

