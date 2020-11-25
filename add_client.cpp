#include "add_client.h"
#include "ui_add_client.h"
#include"client.h"
#include"QMessageBox"
#include"affi_client.h"

add_client::add_client(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_client)
{
    ui->setupUi(this);
}

add_client::~add_client()
{
    delete ui;
}



void add_client::on_pushButton_confirm_clicked()
{

    QString nom = ui->lineEdit_name->text() ;
    QString last_name = ui->lineEdit_lastname->text() ;
    QString numero = ui->lineEdit_number->text() ;
    QString id = ui->lineEdit_id->text() ;
    QString age = ui->lineEdit_age->text() ;
    QString mail = ui->lineEdit_mail->text() ;
    QString type = ui->lineEdit_type->text() ;
    client c(id ,age ,numero ,nom ,last_name ,mail , type) ;

    bool test = c.add_client() ;
    if (test==true )
    {
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("Yes.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }


}


