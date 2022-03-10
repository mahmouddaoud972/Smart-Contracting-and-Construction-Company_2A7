#include "mainwindow.h"
#include<QtWidgets/QApplication>
#include <QApplication>
#include <QFile>
#include <QMessageBox>
#include "connection.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //style sheet
    QFile styleSheetFile("C:/Users/21655/Desktop/Projet C++/fournisseur/Hookmark.qss");
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleSheetFile.readAll());
    a.setStyleSheet(styleSheet);
    //
    MainWindow w;

    w.show();
    return a.exec();
}
