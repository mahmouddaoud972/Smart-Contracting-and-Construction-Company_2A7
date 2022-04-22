#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_pushButton_2_clicked();

    void on_Gemployees_clicked();

    void on_Gfournisseurs_clicked();

    void on_pushButton_12_clicked();

    void on_pb_login_clicked();

    void on_retour_clicked();

private:
    Ui::MainWindow *ui;


};
#endif // MAINWINDOW_H
