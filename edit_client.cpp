#include "edit_client.h"
#include "ui_edit_client.h"
#include"client.h"
#include"QMessageBox"
#include"QDebug"

edit_client::edit_client(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit_client)
{
    ui->setupUi(this);
}

edit_client::~edit_client()
{
    delete ui;
}



void edit_client::on_pushButton_confirm_verification_clicked()
{
    client c ;
    bool test= false ;

    test = c.search_client(ui->lineEdit_enter_id->text() , &c) ;

    if (test==false )
    {
        QMessageBox::information(nullptr, QObject::tr("Error"),
                    QObject::tr("sorry this client doesn't exist.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }

    else
    {
        c.view_data() ;
        QMessageBox::information(nullptr, QObject::tr("Success"),
                    QObject::tr("Process to the second page to edit.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->lineEdit_id_edit->setText(c.get_id()) ;
        ui->lineEdit_age_edit->setText(c.get_age()) ;
        ui->lineEdit_email_edit->setText(  c.get_mail() );
        ui->lineEdit_enter_id->setText( c.get_id() ) ;
        ui->lineEdit_lastname_edit->setText( c.get_lastname() ) ;
        ui->lineEdit_name_edit->setText( c.get_name()) ;
        ui->lineEdit_number_edit->setText(  c.get_number() );
        ui->lineEdit_type_edit->setText( c.get_type() ) ;

        c.delete_client(ui->lineEdit_enter_id->text() );

    }
}

void edit_client::on_confirm_edit_clicked()
{
    client c(ui->lineEdit_id_edit->text() ,
             ui->lineEdit_age_edit->text(),
             ui->lineEdit_number_edit->text() ,
             ui->lineEdit_name_edit->text()  ,
             ui->lineEdit_lastname_edit->text() ,
             ui->lineEdit_email_edit->text() ,
             ui->lineEdit_type_edit->text()    ) ;

    c.add_client() ;

}








