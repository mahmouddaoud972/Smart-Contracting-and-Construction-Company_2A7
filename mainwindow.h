#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "employe.h"
#include "chatbox.h"
#include <QPropertyAnimation>
#include <QSortFilterProxyModel>


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
    employe tmptr;
    QSortFilterProxyModel *proxytr;

        void show_tables();


    private slots:

        void myfunction();
        void on_pb_ajouter_clicked();

        void on_pb_afficher_clicked();

        void on_tv_afficher_clicked(const QModelIndex &index);

        void on_pb_supprimer_clicked();

        void on_pb_modifier_clicked();

        void on_tv_afficher_activated(const QModelIndex &index);

        void on_trecherchec_currentIndexChanged(int index);

        void on_trecherchelt_textChanged(const QString &arg1);


        //void on_toolButton_clicked();

        void on_toolButton_clicked();

        void on_recherche_textChanged(const QString &arg1);

        void on_pushButton_clicked();

        void on_chatbox_clicked();

        void on_pdf_clicked();

        void on_le_salaire_e_editingFinished();

        void on_label_7_linkActivated(const QString &link);

private:
        Ui::MainWindow *ui;
        int selcoltr=0;
        chatbox *chat;
        QTimer *timer;

    };
    #endif // MAINWINDOW_H
