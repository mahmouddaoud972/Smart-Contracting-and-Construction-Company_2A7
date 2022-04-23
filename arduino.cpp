#include "arduino.h"
#include "ui_arduino.h"

arduino::arduino(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::arduino)
{
    ui->setupUi(this);
}

arduino::arduino()
{
    delete ui;
}
