#ifndef MAIL_H
#define MAIL_H

#include <QDialog>

namespace Ui {
class Mail;
}

class Mail : public QDialog
{
    Q_OBJECT

public:
    explicit Mail(QWidget *parent = nullptr);
    ~Mail();
void setData(const QString &labelText);
private slots:
    void on_pb_send_clicked();

    void on_pb_cancel_destroyed();

    void on_pb_cancel_clicked();

private:
    Ui::Mail *ui;
};

#endif // MAIL_H
