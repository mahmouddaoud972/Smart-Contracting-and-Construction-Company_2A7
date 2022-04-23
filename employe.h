#ifndef employe_H
#define employe_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>

class employe
{
public:
    employe();
    employe(int,QString,QString,QString,QString,QString);

    int getid_e();
    QString getnom_e ();
    QString getprenom_e();
    QString getmail_e();
    QString getsalaire_e();
    QString getdate_e();


    bool ajouter();
    bool supprimer(QString);
    bool modifier(QString);
    bool recuperer(QString);
    QSqlQueryModel * afficher();

    void setid_e(int);
    void setnom_e(QString);
    void setprenom_e(QString);
    void setmail_e(QString);
    void setsalaire_e(QString);
    void setdate_e(QString);
    QSqlQueryModel * recherche(QString,QString);

    QSqlQueryModel *trier(QString x);

private:
    int id_e;
    QString nom_e,prenom_e,mail_e,salaire_e,date_e;

};
#endif // employe_H
