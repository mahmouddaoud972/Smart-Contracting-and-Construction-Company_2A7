#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "chantier.h"
#include <QPropertyAnimation>
#include <QSortFilterProxyModel>
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
    chantier tmptr;
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

private:
        Ui::MainWindow *ui;
        int selcoltr=0;
    };
    #endif // MAINWINDOW_H
