#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "fournisseur.h"
#include <QPropertyAnimation>
#include <QSortFilterProxyModel>
#include "map.h"
#include "mail.h"
#include "histo.h"
//
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QPropertyAnimation *animation;
    Fournisseur tmptr;
    QSortFilterProxyModel *proxytr;

    void show_tables();


private slots:

    void on_pb_ajouter_clicked();

    void on_pb_afficher_clicked();

    void on_tv_afficher_clicked(const QModelIndex &index);

    void on_pb_supprimer_clicked();

    void on_pb_modifier_clicked();

    void on_tv_afficher_activated(const QModelIndex &index);

    void on_pushButton_clicked();

    void on_trecherchelt_textChanged(const QString &arg1);

    void on_trecherchec_currentIndexChanged(int index);

    void on_le_idf_textEdited(const QString &arg1);

    void on_le_idf_editingFinished();

    void on_le_prenom_editingFinished();

    void on_tri_2_clicked();

    void on_tri_currentIndexChanged(const QString &arg1);

    void on_pb_map_clicked();

    void on_pb_mail_clicked();

    void on_pb_mail_released();

    void on_pb_histo_clicked();

    void on_adresse_textChanged(const QString &arg1);

    void on_rech_adresse_textChanged(const QString &arg1);

    void on_pb_histo_released();

    void on_rech_adresse_textEdited(const QString &arg1);

    void on_pb_histo_clicked(bool checked);

    void on_pb_histo_toggled(bool checked);

private:
    Ui::MainWindow *ui;
    Map *map;
    Mail *mail;
    histo *hist;
    int selcoltr=0;
};
#endif // MAINWINDOW_H
