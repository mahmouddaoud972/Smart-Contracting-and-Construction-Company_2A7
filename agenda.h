#ifndef AGENDA_H
#define AGENDA_H
#include <QString>
#include <QDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>

namespace Ui {
class agenda;
}

class agenda : public QDialog
{
    Q_OBJECT

public:
    explicit agenda(QWidget *parent = nullptr);
    agenda();
    agenda(QString,QString);
    QString getevent();
    QString getdate();

     bool ajouter();

    void setevent(QString);
    void setdate(QString);

private slots:
    void on_ajouter_clicked();

private:
    Ui::agenda *ui;
    QString event,date_c;
};

#endif // AGENDA_H
