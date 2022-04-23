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
    QLineEdit *le_id_e;
    QLineEdit *le_mail_e;
    QLineEdit *le_nom_e;
    QLineEdit *le_salaire_e;
    QLabel *label_9;
    QLabel *label_8;
    QPushButton *pb_ajouter;
    QPushButton *pb_modifier;
    QLineEdit *le_prenom_e;
    QLineEdit *le_date_e;
    QPushButton *pb_afficher;
    QPushButton *pb_supprimer;
    QLineEdit *le_supp;
    QComboBox *trecherchec;
    QLineEdit *trecherchelt;
    QLineEdit *trecherchelt_2;
    QComboBox *tri;
    QToolButton *toolButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1478, 907);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(50, -50, 1191, 791));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QStringLiteral(""));
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tv_afficher = new QTableView(tab);
        tv_afficher->setObjectName(QStringLiteral("tv_afficher"));
        tv_afficher->setGeometry(QRect(120, 70, 941, 331));
        tv_afficher->setStyleSheet(QStringLiteral("background-color:white;"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 420, 981, 331));
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
        label_3->setGeometry(QRect(280, 40, 81, 20));
        label_3->setStyleSheet(QStringLiteral("font: 11pt \"MS Shell Dlg 2\";"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(280, 90, 71, 16));
        label_6->setStyleSheet(QStringLiteral("font: 11pt \"MS Shell Dlg 2\";"));
        le_id_e = new QLineEdit(groupBox);
        le_id_e->setObjectName(QStringLiteral("le_id_e"));
        le_id_e->setGeometry(QRect(120, 40, 113, 31));
        le_id_e->setStyleSheet(QStringLiteral("font: 36pt \"MS UI Gothic\";"));
        le_mail_e = new QLineEdit(groupBox);
        le_mail_e->setObjectName(QStringLiteral("le_mail_e"));
        le_mail_e->setGeometry(QRect(120, 80, 113, 31));
        le_nom_e = new QLineEdit(groupBox);
        le_nom_e->setObjectName(QStringLiteral("le_nom_e"));
        le_nom_e->setGeometry(QRect(380, 40, 113, 31));
        le_salaire_e = new QLineEdit(groupBox);
        le_salaire_e->setObjectName(QStringLiteral("le_salaire_e"));
        le_salaire_e->setGeometry(QRect(380, 80, 113, 31));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(610, 80, 111, 16));
        label_9->setStyleSheet(QStringLiteral("font: 11pt \"MS Shell Dlg 2\";"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(610, 40, 101, 16));
        label_8->setStyleSheet(QStringLiteral("font: 11pt \"MS Shell Dlg 2\";"));
        pb_ajouter = new QPushButton(groupBox);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(120, 180, 141, 61));
        pb_ajouter->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-color:transparent;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/images/add-list-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_ajouter->setIcon(icon);
        pb_ajouter->setIconSize(QSize(40, 40));
        pb_modifier = new QPushButton(groupBox);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(610, 180, 141, 61));
        pb_modifier->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-color:transparent;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/images/edit-property-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_modifier->setIcon(icon1);
        pb_modifier->setIconSize(QSize(40, 40));
        le_prenom_e = new QLineEdit(groupBox);
        le_prenom_e->setObjectName(QStringLiteral("le_prenom_e"));
        le_prenom_e->setGeometry(QRect(810, 40, 121, 31));
        le_date_e = new QLineEdit(groupBox);
        le_date_e->setObjectName(QStringLiteral("le_date_e"));
        le_date_e->setGeometry(QRect(810, 80, 121, 31));
        pb_afficher = new QPushButton(tab);
        pb_afficher->setObjectName(QStringLiteral("pb_afficher"));
        pb_afficher->setGeometry(QRect(1070, 40, 111, 61));
        pb_afficher->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-color:transparent;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/images/pages-3-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_afficher->setIcon(icon2);
        pb_afficher->setIconSize(QSize(35, 35));
        pb_supprimer = new QPushButton(tab);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(1070, 110, 111, 61));
        pb_supprimer->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-color:transparent;"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/images/delete-property-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_supprimer->setIcon(icon3);
        pb_supprimer->setIconSize(QSize(35, 35));
        le_supp = new QLineEdit(tab);
        le_supp->setObjectName(QStringLiteral("le_supp"));
        le_supp->setGeometry(QRect(370, 170, 113, 22));
        trecherchec = new QComboBox(tab);
        trecherchec->setObjectName(QStringLiteral("trecherchec"));
        trecherchec->setGeometry(QRect(290, 360, 171, 31));
        trecherchelt = new QLineEdit(tab);
        trecherchelt->setObjectName(QStringLiteral("trecherchelt"));
        trecherchelt->setGeometry(QRect(460, 360, 571, 31));
        trecherchelt_2 = new QLineEdit(tab);
        trecherchelt_2->setObjectName(QStringLiteral("trecherchelt_2"));
        trecherchelt_2->setGeometry(QRect(130, 360, 161, 31));
        tri = new QComboBox(tab);
        tri->setObjectName(QStringLiteral("tri"));
        tri->setGeometry(QRect(210, 30, 73, 22));
        toolButton = new QToolButton(tab);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(0, 20, 121, 61));
        toolButton->setStyleSheet(QLatin1String("background-color: rgb(255, 170, 0);\n"
"text-decoration: underline;\n"
"font: 75 14pt \"MS Shell Dlg 2\";"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/img/fournisseur-icone-png-removebg-preview.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon4, QString());
        le_supp->raise();
        tv_afficher->raise();
        groupBox->raise();
        pb_afficher->raise();
        pb_supprimer->raise();
        trecherchec->raise();
        trecherchelt->raise();
        trecherchelt_2->raise();
        tri->raise();
        toolButton->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1478, 26));
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
        label->setText(QApplication::translate("MainWindow", "ID_E:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Mail_E:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Nom_E:", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Salaire_E:", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Date_E:", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Prenom_E:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pb_ajouter->setToolTip(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pb_ajouter->setText(QString());
#ifndef QT_NO_TOOLTIP
        pb_modifier->setToolTip(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pb_modifier->setText(QString());
#ifndef QT_NO_TOOLTIP
        pb_afficher->setToolTip(QApplication::translate("MainWindow", "AFFICHER", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pb_afficher->setText(QString());
        pb_supprimer->setText(QString());
        trecherchec->clear();
        trecherchec->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ID_E", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Nom_E", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Prenom_E", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Mail_E", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Salaire_E", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Date_E", Q_NULLPTR)
         << QString()
        );
        trecherchelt_2->setText(QApplication::translate("MainWindow", "RECHERCHE SELON :", Q_NULLPTR));
        tri->clear();
        tri->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ID_E", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Salaire_E", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Mail_E", Q_NULLPTR)
        );
        toolButton->setText(QApplication::translate("MainWindow", "Tri", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Chantiers", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
