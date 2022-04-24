#ifndef MATIER_H
#define MATIER_H
#include<QTableView>
#include <QString>
#include<QSqlQueryModel>
class Matier
{
public:
    QSqlQueryModel *trier(QString x);
    Matier();
    Matier(int, QString, QString, QString, QString);
    int getidm();
    QString gettypem();
    QString getquantitem();
    QString getprixm();
    QString getdepom();
    bool ajouter();
    bool supprimer(QString);
    bool modifier(QString);
    void recuperer(QString);
    QSqlQueryModel * afficher();
     void excel(QTableView *table);
    void setidm(int);
    void settypem(QString);
    void setquantitem(QString);
    void setprixm(QString);
    void setdepom(QString);



private:
    int id_m;
    QString type_m ;
    QString prix_achat_m,quantite_m,num_depo_m;

};

#endif // MATIER_H
