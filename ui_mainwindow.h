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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tv_afficher;
    QPushButton *pb_afficher;
    QPushButton *pb_supprimer;
    QLineEdit *le_supp;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *le_idf;
    QLineEdit *le_nom;
    QLineEdit *le_prenom;
    QLineEdit *le_adresse;
    QLineEdit *le_numtel;
    QLineEdit *le_mail;
    QComboBox *cb_type;
    QPushButton *pb_ajouter;
    QPushButton *pb_modifier;
    QLabel *label_12;
    QLineEdit *le_lat;
    QLabel *label_13;
    QLineEdit *le_long;
    QGroupBox *groupBox_2;
    QLabel *label_8;
    QComboBox *trecherchec;
    QLineEdit *trecherchelt;
    QComboBox *tri;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pb_map;
    QPushButton *pb_mail;
    QLineEdit *le_dest;
    QPushButton *pb_histo;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1327, 780);
        MainWindow->setStyleSheet(QLatin1String("QToolButton{\n"
"border-radius:60px\n"
"}\n"
"*{\n"
"font-family:century gothic;\n"
"}\n"
"QFrame{\n"
"border-radius:15px;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(230, 80, 921, 551));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QStringLiteral(""));
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tv_afficher = new QTableView(tab);
        tv_afficher->setObjectName(QStringLiteral("tv_afficher"));
        tv_afficher->setGeometry(QRect(110, 20, 691, 241));
        tv_afficher->setStyleSheet(QStringLiteral("background-color:white;"));
        pb_afficher = new QPushButton(tab);
        pb_afficher->setObjectName(QStringLiteral("pb_afficher"));
        pb_afficher->setGeometry(QRect(830, 30, 61, 61));
        pb_afficher->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-color:transparent;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/images/pages-3-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_afficher->setIcon(icon);
        pb_afficher->setIconSize(QSize(35, 35));
        pb_supprimer = new QPushButton(tab);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(830, 110, 61, 61));
        pb_supprimer->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-color:transparent;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/images/delete-property-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_supprimer->setIcon(icon1);
        pb_supprimer->setIconSize(QSize(35, 35));
        le_supp = new QLineEdit(tab);
        le_supp->setObjectName(QStringLiteral("le_supp"));
        le_supp->setGeometry(QRect(630, 190, 113, 20));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 270, 701, 231));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 50, 47, 14));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 90, 47, 14));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 50, 47, 14));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(470, 50, 47, 14));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(470, 80, 41, 31));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(230, 90, 47, 14));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 130, 51, 21));
        le_idf = new QLineEdit(groupBox);
        le_idf->setObjectName(QStringLiteral("le_idf"));
        le_idf->setGeometry(QRect(80, 40, 111, 31));
        le_nom = new QLineEdit(groupBox);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(80, 80, 111, 31));
        le_prenom = new QLineEdit(groupBox);
        le_prenom->setObjectName(QStringLiteral("le_prenom"));
        le_prenom->setGeometry(QRect(320, 40, 111, 31));
        le_adresse = new QLineEdit(groupBox);
        le_adresse->setObjectName(QStringLiteral("le_adresse"));
        le_adresse->setGeometry(QRect(320, 80, 111, 31));
        le_numtel = new QLineEdit(groupBox);
        le_numtel->setObjectName(QStringLiteral("le_numtel"));
        le_numtel->setGeometry(QRect(560, 40, 111, 31));
        le_mail = new QLineEdit(groupBox);
        le_mail->setObjectName(QStringLiteral("le_mail"));
        le_mail->setGeometry(QRect(560, 80, 111, 31));
        cb_type = new QComboBox(groupBox);
        cb_type->setObjectName(QStringLiteral("cb_type"));
        cb_type->setGeometry(QRect(80, 130, 111, 22));
        pb_ajouter = new QPushButton(groupBox);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(190, 170, 91, 41));
        pb_ajouter->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-color:transparent;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/images/add-list-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_ajouter->setIcon(icon2);
        pb_ajouter->setIconSize(QSize(35, 35));
        pb_modifier = new QPushButton(groupBox);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(450, 170, 81, 41));
        pb_modifier->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-color:transparent;\n"
""));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/images/edit-property-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_modifier->setIcon(icon3);
        pb_modifier->setIconSize(QSize(35, 35));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(230, 130, 47, 14));
        le_lat = new QLineEdit(groupBox);
        le_lat->setObjectName(QStringLiteral("le_lat"));
        le_lat->setGeometry(QRect(320, 120, 111, 31));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(470, 130, 61, 16));
        le_long = new QLineEdit(groupBox);
        le_long->setObjectName(QStringLiteral("le_long"));
        le_long->setGeometry(QRect(560, 120, 111, 31));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(730, 270, 151, 231));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 60, 41, 20));
        trecherchec = new QComboBox(groupBox_2);
        trecherchec->setObjectName(QStringLiteral("trecherchec"));
        trecherchec->setGeometry(QRect(50, 60, 91, 22));
        trecherchelt = new QLineEdit(groupBox_2);
        trecherchelt->setObjectName(QStringLiteral("trecherchelt"));
        trecherchelt->setGeometry(QRect(20, 100, 113, 20));
        tri = new QComboBox(groupBox_2);
        tri->setObjectName(QStringLiteral("tri"));
        tri->setGeometry(QRect(50, 170, 91, 22));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 140, 47, 14));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 170, 41, 21));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 30, 61, 16));
        pb_map = new QPushButton(tab);
        pb_map->setObjectName(QStringLiteral("pb_map"));
        pb_map->setGeometry(QRect(830, 190, 61, 61));
        pb_map->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-color:transparent;"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/images/map-marker-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_map->setIcon(icon4);
        pb_map->setIconSize(QSize(35, 35));
        pb_mail = new QPushButton(tab);
        pb_mail->setObjectName(QStringLiteral("pb_mail"));
        pb_mail->setGeometry(QRect(20, 30, 61, 61));
        pb_mail->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-color:transparent;"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/images/inbox-8-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_mail->setIcon(icon5);
        pb_mail->setIconSize(QSize(35, 35));
        le_dest = new QLineEdit(tab);
        le_dest->setObjectName(QStringLiteral("le_dest"));
        le_dest->setGeometry(QRect(170, 100, 91, 20));
        pb_histo = new QPushButton(tab);
        pb_histo->setObjectName(QStringLiteral("pb_histo"));
        pb_histo->setGeometry(QRect(20, 110, 61, 61));
        pb_histo->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-color:transparent;"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/images/bookmark-2-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_histo->setIcon(icon6);
        pb_histo->setIconSize(QSize(35, 35));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/prefix1/img/fournisseur-icone-png-removebg-preview.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon7, QString());
        le_dest->raise();
        le_supp->raise();
        tv_afficher->raise();
        pb_afficher->raise();
        pb_supprimer->raise();
        groupBox->raise();
        groupBox_2->raise();
        pb_map->raise();
        pb_mail->raise();
        pb_histo->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1327, 20));
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
#ifndef QT_NO_TOOLTIP
        pb_afficher->setToolTip(QApplication::translate("MainWindow", "afficher", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pb_afficher->setText(QString());
#ifndef QT_NO_TOOLTIP
        pb_supprimer->setToolTip(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pb_supprimer->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "Gestion fournisseurs", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "ID :", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Nom :", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Prenom :", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Num tel :", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Mail :", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Adresse :", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Type :", Q_NULLPTR));
        cb_type->clear();
        cb_type->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Ciment", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Acier", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Bois", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Brique", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Granulat", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Peinture", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Constructions \303\251lectriques", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        pb_ajouter->setToolTip(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pb_ajouter->setText(QString());
#ifndef QT_NO_TOOLTIP
        pb_modifier->setToolTip(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pb_modifier->setText(QString());
        label_12->setText(QApplication::translate("MainWindow", "Latitude :", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Longitude :", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Recherche/Tri", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Selon", Q_NULLPTR));
        trecherchec->clear();
        trecherchec->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ID", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Adresse", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Numero tel", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Mail", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Type", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Nom", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Prenom", Q_NULLPTR)
        );
        tri->clear();
        tri->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ID", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Adresse", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Numero tel", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Mail", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Type", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Nom", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Prenom", Q_NULLPTR)
        );
        label_9->setText(QApplication::translate("MainWindow", "Tri", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "selon", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pb_map->setToolTip(QApplication::translate("MainWindow", "Map", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pb_map->setText(QString());
#ifndef QT_NO_TOOLTIP
        pb_mail->setToolTip(QApplication::translate("MainWindow", "Send Email", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pb_mail->setText(QString());
#ifndef QT_NO_TOOLTIP
        pb_histo->setToolTip(QApplication::translate("MainWindow", "Historique", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pb_histo->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Fournisseur", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
