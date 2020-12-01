#include "gest_client.h"
#include "ui_gest_client.h"
#include"affi_client.h"
#include"delete_client.h"
#include"add_client.h"
#include"edit_client.h"
#include"client.h"
#include"QMessageBox"

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



void gest_client::on_pushButton_clicked()
{
    client tempclient2 ;
    ui->tableView_trie->setModel(tempclient2.trier()) ;
}

void gest_client::on_pushButton_2_clicked()
{
    client x ;
    bool test = false ;
    QSqlQueryModel *model=new QSqlQueryModel() ;
    test =x.search_client_view( ui->lineEdit_id_search_view->text() ,  model  ) ;

    if( test==false)
    {

        QMessageBox::information(nullptr, QObject::tr("error"),
                    QObject::tr("no client found.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else
    {
        ui->tableView_search_view->setModel(model) ;

    }


}
