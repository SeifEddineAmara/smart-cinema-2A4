#include "gest_client.h"
#include "ui_gest_client.h"
#include"affi_client.h"
#include"delete_client.h"
#include"add_client.h"
#include"edit_client.h"
gest_client::gest_client(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gest_client)
{
    ui->setupUi(this);
}

gest_client::~gest_client()
{
    delete ui;
}

void gest_client::on_pushButton_show_client_clicked()
{
    affi_client w ;
    w.show() ;
    w.exec() ;
}

void gest_client::on_pushButton_delete_client_clicked()
{
    delete_client x ;
    x.show() ;
    x.exec() ;

}

void gest_client::on_pushButton_add_client_clicked()
{
    add_client x ;
    x.show() ;
    x.exec() ;

}

void gest_client::on_pushButton_update_client_clicked()
{
    edit_client x ;
    x.show() ;
    x.exec() ;
}
