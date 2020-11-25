#include "delete_client.h"
#include "ui_delete_client.h"
#include"client.h"
#include"QMessageBox"
delete_client::delete_client(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delete_client)
{
    ui->setupUi(this);
}

delete_client::~delete_client()
{
    delete ui;
}

void delete_client::on_pushButton_confirm_delete_clicked()
{
    client c  ;
    QString id  = ui->lineEdit_delete->text() ;
    bool test = c.delete_client(id) ;
    if(test==true)
    {
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("Yes.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
}
