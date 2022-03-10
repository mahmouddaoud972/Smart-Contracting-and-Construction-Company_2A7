#ifndef CHANTIER_H
#define CHANTIER_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>

class chantier
{
public:
    chantier();
    chantier(int,QString,int,int,float,float,QString);

    int getid_c();
    QString getadresse_c ();
    int getnbre_chambre();
    int getnbre_etage();
    float getsurface_c();
    float getbudget_c();
    QString getjardin();

    bool ajouter();
    bool supprimer(QString);
    bool modifier(QString);
    bool recuperer(QString);
    QSqlQueryModel * afficher();

    void setid_c(int);
    void setadresse_c(QString);
    void setnbre_chambre(int);
    void setnbre_etage(int);
    void setsurface_c(float);
    void setbudget_c(float);
    void setjardin(QString);

private:
    int id_c,nbre_chambre,nbre_etage;
    float surface_c,budget_c;
    QString adresse_c,jardin;

};

#endif // CHANTIER_H
