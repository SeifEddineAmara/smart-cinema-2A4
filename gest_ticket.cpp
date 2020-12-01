#include "gest_ticket.h"
#include "ui_gest_ticket.h"
#include"film.h"
#include"salle.h"
#include"QDebug"
#include"ticket.h"
#include"QMessageBox"

gest_ticket::gest_ticket(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gest_ticket)
{
    ui->setupUi(this);

    ui->comboBox_type->addItem("normal") ;
    ui->comboBox_type->addItem("etudiant");
    ui->comboBox_type->addItem("client fidele");

    ui->comboBox_consommation->addItem("pas de consommation") ;
    ui->comboBox_consommation->addItem("juices     : 2dt") ;
    ui->comboBox_consommation->addItem("chips      : 1dt") ;
    ui->comboBox_consommation->addItem("soda       : 3dt") ;
    ui->comboBox_consommation->addItem("chocolate  : 4dt") ;




}

gest_ticket::~gest_ticket()
{
    delete ui;
}

void gest_ticket::on_pushButton_update_film_cine_clicked()
{
    QVector<QString> list_film ;
    film x ;
    list_film = x.search_film() ;
    for ( int i=0 ; i<list_film.size() ; i++ )
    {
        ui->comboBox_film->addItem(list_film[i]);

    }
}


void gest_ticket::on_pushButton_update_cine_salle_clicked()
{
    QVector<QString> list_cine ;
    film x ;
    list_cine=x.search_cine() ;
    for ( int i=0 ; i<list_cine.size() ; i++ )
    {
        ui->comboBox_cine->addItem(list_cine[i]);

    }

}


void gest_ticket::on_pushButton_update_salle_horaire_clicked()
{
    QVector<QString> x ;
    QSqlQuery query ;
    salle s ;

    if(query.exec("SELECT * from salle ") )
    {
        while(query.next() )
        {
            qDebug() << query.value(1).toString();
            if (query.value(1).toString().compare(ui->comboBox_cine->currentText())==0 && s.search_film(ui->comboBox_film->currentText() ,query.value(5).toString() )==true )
            {
                ui->comboBox_salle->addItem(query.value(0).toString() ) ;
            }

        }
    }

}


void gest_ticket::on_pushButton_confirm_type_clicked()
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

void gest_ticket::on_pushButton_update_horaire_clicked()
{
    QVector<QString> vec_horaire , vec_films ;
    QSqlQuery query ;
    QString list_films , list_horaire ;
    salle s ;
    if(query.exec("SELECT * from salle ") )
    {
        while(query.next() )
        {
            if (query.value(0).toString().compare(ui->comboBox_salle->currentText())==0 )
            {
                list_horaire = query.value(4).toString() ;
                list_films = query.value(5).toString() ;

            }

        }
    }
    vec_horaire = s.string_to_vector(list_horaire) ;
    vec_films = s.string_to_vector(list_films) ;

    int index =  s.search_index(vec_films , ui->comboBox_film->currentText() );

    ui->comboBox_horaire->addItem(vec_horaire[index]) ;


}

void gest_ticket::on_pushButton_confirm_ajout_clicked()
{
      ticket y ;

      QString price = y.gest_prix(ui->lineEdit_price->text() , ui->comboBox_consommation->currentText()) ;
      ticket x(ui->lineEdit_id->text() , price ,
               ui->comboBox_type->currentText() , ui->comboBox_cine->currentText() ,
               ui->comboBox_salle->currentText() , "5530" , ui->comboBox_film->currentText() ,
               ui->comboBox_horaire->currentText() , ui->comboBox_consommation->currentText()) ;
      //qDebug() << ui->comboBox_consommation->currentText() ;

      bool test = x.add_ticket() ;
      if (test==true )
      {
          QMessageBox::information(nullptr, QObject::tr("ticket added"),
                      QObject::tr("Yes.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

      }


}




void gest_ticket::on_pushButton_confirm_aff_ticket_clicked()
{

    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from ticket");
    ui->tableView_aff_ticket->setModel(model) ;

}



void gest_ticket::on_pushButton_confirm_clicked()
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


}

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
}

void gest_ticket::on_pushButton_confi_update_clicked()
{

    ticket x ;
    QString price = x.gest_prix(ui->lineEdit_price_update->text() , ui->comboBox_update_cons->currentText()) ;
    x.update_ticket(ui->lineEdit_id_update->text() ,
                    ui->comboBox_update_cons->currentText() ,
                    ui->comboBox_update_type->currentText() ,
                     price ) ;

}







