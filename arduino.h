#include <QtSerialPort/QtSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#ifndef ARDUINO_H
#define ARDUINO_H

#include <QDialog>

namespace Ui {
class arduino;
}

class arduino : public QDialog
{
    Q_OBJECT

public:
    explicit arduino(QWidget *parent = nullptr);
    arduino();
    int connect_arduino();
    int close_arduino();

private:
    Ui::arduino *ui;
};

#endif // ARDUINO_H
