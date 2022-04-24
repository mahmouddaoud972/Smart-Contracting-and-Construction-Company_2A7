#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "matier.h"
#include <QPropertyAnimation>
#include <QSortFilterProxyModel>
#include "stats.h"
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
    Matier tmptr;
    QSortFilterProxyModel *proxytr;

    void show_tables();


private slots:
    void on_pushButton_2_clicked();

    void on_pb_ajouter_clicked();

    void on_pb_afficher_clicked();

    void on_tv_afficher_clicked(const QModelIndex &index);

    void on_pb_supprimer_clicked();

    void on_pb_modifier_clicked();

    void on_tv_afficher_activated(const QModelIndex &index);

    void on_pushButton_clicked();

    void on_trecherchelt_textChanged(const QString &arg1);

    void on_trecherchec_currentIndexChanged(int index);

    void on_tri_currentIndexChanged(const QString &arg1);

    void on_excel_clicked();


    void on_statRq_clicked();

    void on_qrCode_clicked();

private:
    Ui::MainWindow *ui;
    int selcoltr=0;
    Matier tmpmatier;
    Stats *third;
};
#endif // MAINWINDOW_H
