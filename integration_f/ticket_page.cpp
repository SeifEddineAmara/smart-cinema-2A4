#include "ticket_page.h"
#include "ui_ticket_page.h"
#include"ticket.h"
#include"QMessageBox"
#include "projection.h"
/*
ticket_page::ticket_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ticket_page)
{
    ui->setupUi(this);
}

ticket_page::~ticket_page()
{
    delete ui;
}

*/
ticket_page::ticket_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ticket_page)
{
    ui->setupUi(this);

    ui->comboBox_type->addItem("normal") ;
    ui->comboBox_type->addItem("etudiant");
    ui->comboBox_type->addItem("client fidele");
/*
    ui->comboBox_consommation->addItem("pas de consommation") ;
    ui->comboBox_consommation->addItem("juices     : 2dt") ;
    ui->comboBox_consommation->addItem("chips      : 1dt") ;
    ui->comboBox_consommation->addItem("soda       : 3dt") ;
    ui->comboBox_consommation->addItem("chocolate  : 4dt") ;

*/


}

ticket_page::~ticket_page()
{
    delete ui;
}


void ticket_page::on_pushButton_confirm_type_clicked()
{
    if(ui->comboBox_type->currentText().compare("etudiant")==0 )
    {
        ui->lineEdit_price->setText( "10dt") ;
    }
    else if (ui->comboBox_type->currentText().compare("normal") == 0 )
    {

        ui->lineEdit_price->setText("17dt") ;
    }
    else if (ui->comboBox_type->currentText().compare("client fidele") == 0 )
    {

        ui->lineEdit_price->setText("15dt") ;
    }




}


void ticket_page::on_pushButton_confirm_ajout_clicked()
{

      ticket y ;
      projection x ;
      QString projection_id  =x.extract_cine(ui->comboBox_projection->currentText()) ;

      QString price = y.gest_prix(ui->lineEdit_price->text() , ui->comboBox_consommation->currentText()) ;
      ticket y2( ui->lineEdit_id->text() ,price,
                ui->comboBox_type->currentText() ,
                ui->comboBox_chaise->currentText() ,
                ui->comboBox_consommation->currentText() , projection_id,ui->comboBox_client->currentText()  ) ;
      //qDebug() << ui->comboBox_consommation->currentText() ;
      bool test = y2.add_ticket() ;
    /*  qDebug() << ui->comboBox_chaise->currentText()  ;*/
      if (test==true )
      {
          QMessageBox::information(nullptr, QObject::tr("ticket added"),
                      QObject::tr("Yes.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

      }


}




void ticket_page::on_pushButton_confirm_aff_ticket_clicked()
{

    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from ticket");
    ui->tableView_aff_ticket->setModel(model) ;

}



void ticket_page::on_pushButton_confirm_clicked()
{
    ticket x ;
    bool test =  x.delete_ticket(ui->lineEdit_id_delete->text()) ;
    if(test==true)
    {
        QMessageBox::information(nullptr, QObject::tr("success"),
                    QObject::tr("Yes.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }


}
/*
void gest_ticket::on_pushButton_verif_id_update_clicked()
{
    ticket x ;
    bool test = x.search_ticket(ui->lineEdit_id_update->text() ) ;
    if(test==true)
    {
        QMessageBox::information(nullptr, QObject::tr("success"),
                    QObject::tr("ticket found.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->comboBox_update_type->addItem("normal") ;
        ui->comboBox_update_type->addItem("etudiant");
        ui->comboBox_update_type->addItem("client fidele");

        ui->comboBox_update_cons->addItem("pas de consommation") ;
        ui->comboBox_update_cons->addItem("juices     : 2dt") ;
        ui->comboBox_update_cons->addItem("chips      : 1dt") ;
        ui->comboBox_update_cons->addItem("soda       : 3dt") ;
        ui->comboBox_update_cons->addItem("chocolate  : 4dt") ;

    }
    else if (test==false)
    {
        QMessageBox::information(nullptr, QObject::tr("error"),
                    QObject::tr("ticket not found.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }


}*/
/*
void gest_ticket::on_pushButton_update_confi_type_clicked()
{
    if(ui->comboBox_update_type->currentText().compare("etudiant")==0 )
    {
        ui->lineEdit_price_update->setText( "10dt") ;
    }
    else if (ui->comboBox_update_type->currentText().compare("normal") == 0 )
    {

        ui->lineEdit_price_update->setText("17dt") ;
    }
    else if (ui->comboBox_update_type->currentText().compare("client fidele") == 0 )
    {

        ui->lineEdit_price_update->setText("15dt") ;
    }
}*/

void ticket_page::on_pushButton_confi_update_clicked()
{

    ticket x ;
  /*  QString price = x.gest_prix(ui->lineEdit_price_update->text() , ui->comboBox_update_cons->currentText()) ;*/
    x.update_ticket(ui->lineEdit_id_update_tickett->text() ,
                    ui->comboBox_update_type->currentText() ,
                    ui->comboBox_update_cons->currentText()
                     ) ;


}

/*
void ticket_page::on_pushButton_clicked()
{
    welcome_window x ;
    hide() ;
    x.show() ;
    x.exec() ;
}
*/
void ticket_page::on_pushButton_update_projection_clicked()
{
    projection x ;
    QVector<QString> list_projec =  x.get_projection() ;

    for ( int i=0 ; i<list_projec.size() ; i++ )
    {
        ui->comboBox_projection->addItem(list_projec[i]);

    }

}



void ticket_page::on_pushButton_update_chaise_id_clicked()
{
    projection x ;
    QString projection_id  =x.extract_cine(ui->comboBox_projection->currentText()) ; //extracting the id of the projection
    QString id_salle=x.extract_salle(projection_id) ;
    QVector<QString> list_chaise = x.extract_chaise(id_salle) ;
    for ( int i=0 ; i<list_chaise.size() ; i++ )
    {
        ui->comboBox_chaise->addItem(list_chaise[i]);

    }

}

void ticket_page::on_pushButton_update_client_clicked()
{
    ticket x ;
    QVector<QString> list_clients =  x.search_client() ;

    for ( int i=0 ; i<list_clients.size() ; i++ )
    {
        ui->comboBox_client->addItem(list_clients[i]);

    }
}

void ticket_page::on_pushButton_verif_id_update_clicked()
{
    ticket x ;
    //ticket x2 ;
    bool test =  x.search_ticket(ui->lineEdit_id_update_tickett->text()) ;
    if(test==true)
    {
        QMessageBox::information(nullptr, QObject::tr("success"),
                    QObject::tr("Yes your ticket exists.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
       // ui->comboBox_update_type->addItem(x2.get_type()) ;
        ui->comboBox_update_type->addItem("normal") ;
        ui->comboBox_update_type->addItem("etudiant");
        ui->comboBox_update_type->addItem("client fidele");

        QVector<QString> list_consommation =  x.search_consommation() ;

        for ( int i=0 ; i<list_consommation.size() ; i++ )
        {
            ui->comboBox_update_cons->addItem(list_consommation[i]);

        }

    }
    else
    {

        QMessageBox::information(nullptr, QObject::tr("success"),
                    QObject::tr("Yes your ticket doesnt exists.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
}


void ticket_page::on_pushButton_confirm_consomm_clicked()
{
    ticket x ;
    QVector<QString> list_consommation =  x.search_consommation() ;

    for ( int i=0 ; i<list_consommation.size() ; i++ )
    {
        ui->comboBox_consommation->addItem(list_consommation[i]);

    }


}







