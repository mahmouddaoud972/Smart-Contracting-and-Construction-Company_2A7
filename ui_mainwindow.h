/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtQuickWidgets/QQuickWidget>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tv_afficher;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_6;
    QLineEdit *le_idc;
    QLineEdit *le_adresse_c;
    QLineEdit *le_surface_c;
    QLineEdit *le_budget;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_8;
    QPushButton *pb_ajouter;
    QPushButton *pb_modifier;
    QLineEdit *le_jardin;
    QLineEdit *sb_chambre;
    QLineEdit *sb_etage;
    QPushButton *camera;
    QPushButton *pushButton;
    QPushButton *pb_afficher;
    QPushButton *pb_supprimer;
    QLineEdit *le_supp;
    QComboBox *trecherchec;
    QLineEdit *trecherchelt;
    QLineEdit *trecherchelt_2;
    QGroupBox *groupBox_2;
    QComboBox *tri;
    QToolButton *toolButton;
    QLabel *label2;
    QGroupBox *groupBox_3;
    QLineEdit *recherche;
    QLineEdit *max;
    QLabel *label_4;
    QLabel *label_5;
    QGroupBox *groupBox_4;
    QLineEdit *dateevent;
    QLineEdit *event;
    QPushButton *ajouter;
    QWidget *tab_2;
    QPushButton *historique;
    QTableView *view_histo;
    QQuickWidget *quickWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1799, 1116);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(410, 200, 1181, 801));
        QFont font;
        font.setPointSize(11);
        tabWidget->setFont(font);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QStringLiteral(""));
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tv_afficher = new QTableView(tab);
        tv_afficher->setObjectName(QStringLiteral("tv_afficher"));
        tv_afficher->setGeometry(QRect(30, 20, 911, 281));
        tv_afficher->setStyleSheet(QStringLiteral("background-color:white;"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 340, 941, 331));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox->setFont(font1);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 47, 14));
        label->setStyleSheet(QStringLiteral("font: 11pt \"MS Shell Dlg 2\";"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(26, 80, 71, 20));
        label_2->setStyleSheet(QStringLiteral("font: 11pt \"MS Shell Dlg 2\";"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(260, 40, 81, 20));
        label_3->setStyleSheet(QStringLiteral("font: 11pt \"MS Shell Dlg 2\";"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(260, 80, 61, 21));
        label_6->setStyleSheet(QStringLiteral("font: 11pt \"MS Shell Dlg 2\";"));
        le_idc = new QLineEdit(groupBox);
        le_idc->setObjectName(QStringLiteral("le_idc"));
        le_idc->setGeometry(QRect(120, 40, 113, 31));
        le_idc->setStyleSheet(QStringLiteral(""));
        le_adresse_c = new QLineEdit(groupBox);
        le_adresse_c->setObjectName(QStringLiteral("le_adresse_c"));
        le_adresse_c->setGeometry(QRect(120, 80, 113, 31));
        le_surface_c = new QLineEdit(groupBox);
        le_surface_c->setObjectName(QStringLiteral("le_surface_c"));
        le_surface_c->setGeometry(QRect(400, 40, 113, 31));
        le_budget = new QLineEdit(groupBox);
        le_budget->setObjectName(QStringLiteral("le_budget"));
        le_budget->setGeometry(QRect(400, 80, 113, 31));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(600, 50, 191, 16));
        label_9->setStyleSheet(QStringLiteral("font: 11pt \"MS Shell Dlg 2\";"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(600, 80, 201, 31));
        label_10->setStyleSheet(QStringLiteral("font: 11pt \"MS Shell Dlg 2\";"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(640, 130, 61, 16));
        label_8->setStyleSheet(QStringLiteral("font: 11pt \"MS Shell Dlg 2\";"));
        pb_ajouter = new QPushButton(groupBox);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(310, 150, 141, 61));
        pb_ajouter->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-color:transparent;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/images/add-list-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_ajouter->setIcon(icon);
        pb_ajouter->setIconSize(QSize(40, 40));
        pb_modifier = new QPushButton(groupBox);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(530, 150, 141, 61));
        pb_modifier->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-color:transparent;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/images/edit-property-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_modifier->setIcon(icon1);
        pb_modifier->setIconSize(QSize(40, 40));
        le_jardin = new QLineEdit(groupBox);
        le_jardin->setObjectName(QStringLiteral("le_jardin"));
        le_jardin->setGeometry(QRect(810, 120, 113, 31));
        sb_chambre = new QLineEdit(groupBox);
        sb_chambre->setObjectName(QStringLiteral("sb_chambre"));
        sb_chambre->setGeometry(QRect(810, 40, 113, 31));
        sb_etage = new QLineEdit(groupBox);
        sb_etage->setObjectName(QStringLiteral("sb_etage"));
        sb_etage->setGeometry(QRect(810, 80, 113, 31));
        camera = new QPushButton(groupBox);
        camera->setObjectName(QStringLiteral("camera"));
        camera->setGeometry(QRect(140, 220, 191, 81));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(470, 220, 191, 81));
        pushButton->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-color:transparent;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/images/agenda-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(35, 35));
        pb_afficher = new QPushButton(tab);
        pb_afficher->setObjectName(QStringLiteral("pb_afficher"));
        pb_afficher->setGeometry(QRect(1000, 130, 131, 81));
        pb_afficher->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-color:transparent;"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/images/pages-3-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_afficher->setIcon(icon3);
        pb_afficher->setIconSize(QSize(35, 35));
        pb_supprimer = new QPushButton(tab);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(1000, 50, 131, 81));
        pb_supprimer->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-color:transparent;"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/images/delete-property-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_supprimer->setIcon(icon4);
        pb_supprimer->setIconSize(QSize(35, 35));
        le_supp = new QLineEdit(tab);
        le_supp->setObjectName(QStringLiteral("le_supp"));
        le_supp->setGeometry(QRect(370, 170, 113, 22));
        trecherchec = new QComboBox(tab);
        trecherchec->setObjectName(QStringLiteral("trecherchec"));
        trecherchec->setGeometry(QRect(200, 300, 171, 31));
        trecherchelt = new QLineEdit(tab);
        trecherchelt->setObjectName(QStringLiteral("trecherchelt"));
        trecherchelt->setGeometry(QRect(370, 300, 571, 31));
        trecherchelt_2 = new QLineEdit(tab);
        trecherchelt_2->setObjectName(QStringLiteral("trecherchelt_2"));
        trecherchelt_2->setGeometry(QRect(30, 300, 171, 31));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(1030, 230, 141, 141));
        groupBox_2->setFont(font1);
        tri = new QComboBox(groupBox_2);
        tri->setObjectName(QStringLiteral("tri"));
        tri->setGeometry(QRect(20, 40, 73, 22));
        toolButton = new QToolButton(groupBox_2);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(10, 80, 91, 51));
        toolButton->setStyleSheet(QLatin1String("background-color: rgb(255, 170, 0);\n"
"text-decoration: underline;\n"
"font: 75 14pt \"MS Shell Dlg 2\";"));
        label2 = new QLabel(tab);
        label2->setObjectName(QStringLiteral("label2"));
        label2->setGeometry(QRect(970, 0, 211, 61));
        QFont font2;
        font2.setPointSize(22);
        font2.setBold(true);
        font2.setWeight(75);
        label2->setFont(font2);
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(1020, 400, 151, 141));
        groupBox_3->setFont(font1);
        recherche = new QLineEdit(groupBox_3);
        recherche->setObjectName(QStringLiteral("recherche"));
        recherche->setGeometry(QRect(10, 50, 113, 22));
        max = new QLineEdit(groupBox_3);
        max->setObjectName(QStringLiteral("max"));
        max->setGeometry(QRect(10, 110, 113, 22));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 30, 56, 16));
        QFont font3;
        font3.setPointSize(8);
        font3.setBold(true);
        font3.setWeight(75);
        label_4->setFont(font3);
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 80, 121, 16));
        label_5->setFont(font3);
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(980, 560, 191, 161));
        dateevent = new QLineEdit(groupBox_4);
        dateevent->setObjectName(QStringLiteral("dateevent"));
        dateevent->setGeometry(QRect(20, 30, 151, 22));
        event = new QLineEdit(groupBox_4);
        event->setObjectName(QStringLiteral("event"));
        event->setGeometry(QRect(20, 60, 151, 41));
        ajouter = new QPushButton(groupBox_4);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(50, 110, 93, 28));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/img/fournisseur-icone-png-removebg-preview.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon5, QString());
        le_supp->raise();
        tv_afficher->raise();
        groupBox->raise();
        pb_afficher->raise();
        pb_supprimer->raise();
        trecherchec->raise();
        trecherchelt->raise();
        trecherchelt_2->raise();
        groupBox_2->raise();
        label2->raise();
        groupBox_3->raise();
        groupBox_4->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        historique = new QPushButton(tab_2);
        historique->setObjectName(QStringLiteral("historique"));
        historique->setGeometry(QRect(450, 440, 241, 111));
        view_histo = new QTableView(tab_2);
        view_histo->setObjectName(QStringLiteral("view_histo"));
        view_histo->setGeometry(QRect(390, 150, 381, 261));
        view_histo->setStyleSheet(QStringLiteral("background-color:white;"));
        tabWidget->addTab(tab_2, QString());
        quickWidget = new QQuickWidget(centralwidget);
        quickWidget->setObjectName(QStringLiteral("quickWidget"));
        quickWidget->setGeometry(QRect(2250, 530, 300, 200));
        quickWidget->setStyleSheet(QStringLiteral(""));
        quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);
        MainWindow->setCentralWidget(centralwidget);
        quickWidget->raise();
        tabWidget->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1799, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Gestion chantiers", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "ID :", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Adresse:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Surface:", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Budget:", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Nombre de chambre :", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Nombre de etage        :", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Jardin", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pb_ajouter->setToolTip(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pb_ajouter->setText(QString());
#ifndef QT_NO_TOOLTIP
        pb_modifier->setToolTip(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pb_modifier->setText(QString());
        camera->setText(QApplication::translate("MainWindow", "Camera", Q_NULLPTR));
        pushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        pb_afficher->setToolTip(QApplication::translate("MainWindow", "AFFICHER", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pb_afficher->setText(QString());
        pb_supprimer->setText(QString());
        trecherchec->clear();
        trecherchec->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ID", Q_NULLPTR)
         << QApplication::translate("MainWindow", "ADRESSE", Q_NULLPTR)
         << QApplication::translate("MainWindow", "NBRE CHAMBRE", Q_NULLPTR)
         << QApplication::translate("MainWindow", "ETAGE", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SURFACE", Q_NULLPTR)
         << QApplication::translate("MainWindow", "BUDGET", Q_NULLPTR)
         << QApplication::translate("MainWindow", "JARDIN", Q_NULLPTR)
        );
        trecherchelt_2->setText(QApplication::translate("MainWindow", "RECHERCHE SELON :", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Tri", Q_NULLPTR));
        tri->clear();
        tri->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "id", Q_NULLPTR)
         << QApplication::translate("MainWindow", "nombre de chambre", Q_NULLPTR)
         << QApplication::translate("MainWindow", "budget", Q_NULLPTR)
        );
        toolButton->setText(QApplication::translate("MainWindow", "Tri", Q_NULLPTR));
        label2->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Adresse:", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Nombre chambre:", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Agenda", Q_NULLPTR));
        dateevent->setPlaceholderText(QApplication::translate("MainWindow", "exp(01/JAN/2022)", Q_NULLPTR));
        ajouter->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Chantiers", Q_NULLPTR));
        historique->setText(QApplication::translate("MainWindow", "Historique", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Historique", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
