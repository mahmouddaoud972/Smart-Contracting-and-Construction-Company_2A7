#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "chantier.h"
#include "agenda.h"
#include <QPropertyAnimation>
#include <QSortFilterProxyModel>
#include "camera.h"
#include "agenda.h"
#include "arduino.h"

#include <QTimer>
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

public slots:
        void myfunction();

    private slots:


        void on_pb_ajouter_clicked();

        void on_pb_afficher_clicked();

        void on_tv_afficher_clicked(const QModelIndex &index);

        void on_pb_supprimer_clicked();

        void on_pb_modifier_clicked();

        void on_tv_afficher_activated(const QModelIndex &index);

        void on_trecherchec_currentIndexChanged(int index);
        void on_trecherchec_2_currentIndexChanged(int index);


        void on_trecherchelt_textChanged(const QString &arg1);
        void on_trecherchelt_3_textChanged(const QString &arg2);


        void on_le_budget_editingFinished();

        void on_le_jardin_editingFinished();

        void on_le_adresse_c_editingFinished();

        void on_sb_etage_editingFinished();

        void on_sb_chambre_editingFinished();

        //void on_toolButton_clicked();

        void on_toolButton_clicked();

        void on_camera_clicked();

        void on_pushButton_clicked();

        void on_recherche_textChanged(const QString &arg1);

        void on_pushButton_2_clicked();

        void on_historique_clicked();

        void on_le_surface_c_editingFinished();

        void on_ajouter_clicked();

        void on_label2_linkActivated(const QString &link);

        void on_label2_linkHovered(const QString &link);

private:
        Ui::MainWindow *ui;
        int selcoltr=0;
        camera *cam;
        agenda *agend;
        QTimer *timer;
    };
    #endif // MAINWINDOW_H
