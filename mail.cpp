#include "mail.h"
#include "ui_mail.h"
#include <QSslSocket>
#include "SmtpMime"
#include <QMessageBox>
#include <QTextEdit>
#include <QPixmap>
Mail::Mail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Mail)
{
    ui->setupUi(this);
 /*   QPixmap bkgnd("E:/Projet/fournisseur/images/screen.jpg");
        bkgnd = bkgnd.scaled(500,500);
        QPalette palette;
        palette.setBrush(QPalette::Background, bkgnd);
        this->setPalette(palette);*/

}

Mail::~Mail()
{
    delete ui;
}
void Mail::setData(const QString &labelText) {
  ui->le_rec->setText(labelText);
}
void Mail::on_pb_send_clicked()
{
    QString rec=ui->le_rec->text();
    QString obj=ui->le_obj->text();
    QString desc=ui->te_desc->toPlainText();
    //QString texte = edit->toPlainText();
    SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);

       // We need to set the username (your email address) and the password
       // for smtp authentification.

       smtp.setUser("tsmart.building@gmail.com");
       smtp.setPassword("Esprit2022/");

       // Now we create a MimeMessage object. This will be the email.

       MimeMessage message;

       message.setSender(new EmailAddress("tsmart.building@gmail.com", "smart building"));
       message.addRecipient(new EmailAddress(rec));
       message.setSubject(obj);

       // Now add some text to the email.
       // First we create a MimeText object.

       MimeText text;

       text.setText(desc);

       // Now add it to the mail

       message.addPart(&text);

       // Now we can send the mail

       smtp.connectToHost();
       smtp.login();
       if(smtp.sendMail(message)){
        QMessageBox::information(this,"Good","email sent !");
       }else
       {
           QMessageBox::critical(this,"err","error");

       }
       smtp.quit();


}


void Mail::on_pb_cancel_clicked()
{
    close();
}
