#include "client_page.h"
#include "ui_client_page.h"
#include"client.h"
#include"QMessageBox"



client_page::client_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::client_page)
{
    ui->setupUi(this);

     ui->tableView->setModel(temp_client.afficher()) ;


    ui->comboBox_tri_client_nom->addItem("name");
    ui->comboBox_tri_client_nom->addItem("prenom");

}

client_page::~client_page()
{
    delete ui;
}

void client_page::on_pushButton_clicked()
{
    QString nom = ui->lineEdit_name->text() ;
    QString last_name = ui->lineEdit_last_name->text() ;
    QString numero = ui->lineEdit_number->text() ;
    QString id = ui->lineEdit_id->text() ;
    QString age = ui->lineEdit_age->text() ;
    QString mail = ui->lineEdit_email->text() ;

    client c(id ,age ,numero ,nom ,last_name ,mail ) ;

    bool test = c.add_client() ;
    if (test==true )
    {
        QMessageBox::information(nullptr, QObject::tr("client added"),
                    QObject::tr("Yes.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
}

void client_page::on_pushButton_2_clicked()
{

    ui->tableView->setModel(temp_client.afficher()) ;
}

void client_page::on_pushButton_confi_edit_clicked()
{
    client c ;
    bool test= false ;

    test = c.search_client(ui->lineEdit_id_edit->text() , &c) ;

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
                    QObject::tr("return to the ajout tab .\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->lineEdit_age->setText(c.get_age()) ;
        ui->lineEdit_email->setText(  c.get_mail() );
        ui->lineEdit_id->setText( c.get_id() ) ;
        ui->lineEdit_last_name->setText( c.get_lastname() ) ;
        ui->lineEdit_name->setText( c.get_name()) ;
        ui->lineEdit_number->setText(  c.get_number() );

        c.delete_client(ui->lineEdit_id->text() );



    }
}



void client_page::on_pushButton_conif_delete_clicked()
{
    QString id  = ui->lineEdit_id_delete->text() ;
    bool test = temp_client.delete_client(id) ;

    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("Yes.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
    {
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("No.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void client_page::on_pushButton_confirm_tri_clicked()
{
    client tempclient2 ;
    ui->tableView_trie_client->setModel(tempclient2.trier(ui->comboBox_tri_client_nom->currentText())) ;
}

void client_page::on_pushButton_search_clicked()
{
    client x ;
    bool test = false ;
    QSqlQueryModel *model=new QSqlQueryModel() ;
    test =x.search_client_view( ui->lineEdit_search_id->text() ,  model , ui->lineEdit_search_name->text()  ) ;

    if( test==false)
    {

        QMessageBox::information(nullptr, QObject::tr("error"),
                    QObject::tr("no client found.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else
    {
        ui->tableView_search->setModel(model) ;

    }

}
