#ifndef HELLO_H
#define HELLO_H

#include <QDialog>

namespace Ui {
class hello;
}

class hello : public QDialog
{
    Q_OBJECT

public:
    explicit hello(QWidget *parent = nullptr);
    ~hello();

private:
    Ui::hello *ui;
};

#endif // HELLO_H
