#ifndef PROFILS_H
#define PROFILS_H
#include<QDate>
#include<QString>
#include<QSqlQueryModel>
#include <QComboBox>

class Profils
{
public:
    Profils();
Profils(QString,QString, int,QString);
    //getter

    QString getusername();
    QString getmot_de_passe();
    QString getrole();



      //setter
    void setusername(QString);
    void setmot_de_passe(QString);
        void setrole(QString);
    //method
    bool username(QString, QString,QString);

private:

   QString user_name;
   QString MOT_DE_PASSE,role;

   int id_e;
};

#endif // PROFILS_H
