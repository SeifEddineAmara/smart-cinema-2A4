#include "projection_page.h"
#include "ui_projection_page.h"

#include"projection.h"
#include"QString"
#include"QVector"
#include"QMessageBox"
#include"QDebug"


projection_page::projection_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::projection_page)
{
    ui->setupUi(this);
}

projection_page::~projection_page()
{
    delete ui;
}


void projection_page::on_pushButton_search_film_clicked()
{

        projection x ;
        QVector<QString> list_films ;
        list_films=x.search_films() ;

        for ( int i=0 ; i<list_films.size() ; i++ )
        {
            ui->comboBox_film->addItem(list_films[i]);

        }

}

void projection_page::on_pushButton_search_cine_clicked()
{
    projection x ;
    QVector<QString> list_cine ;
    list_cine=x.search_cine() ;

    for ( int i=0 ; i<list_cine.size() ; i++ )
    {
        ui->comboBox_cine->addItem(list_cine[i]);

    }
}


void projection_page::on_pushButton_search_salle_clicked()
{
    projection x ;
    qDebug()<< ui->comboBox_cine->currentText() ;
    QString cine_name  = x.extract_cine(ui->comboBox_cine->currentText()) ;
    QVector<QString> list_salle = x.search_salle(cine_name) ;
    for ( int i=0 ; i<list_salle.size() ; i++ )
    {
        ui->comboBox_salle->addItem(list_salle[i]);

    }

}




void projection_page::on_pushButton_conf_clicked()
{
    projection x ;
    QString id = ui->lineEdit_id->text() ;
    QString id_film = x.extract_cine(ui->comboBox_film->currentText()) ;
    QString id_cine = x.extract_cine(ui->comboBox_cine->currentText()) ;
    QString id_salle = ui->comboBox_salle->currentText() ;

    QString time = ui->timeEdit_ajout->text() ;

    projection x2(id , id_film ,  id_cine ,  id_salle ,  time) ;
    bool test = x2.ajout_projection() ;

    if (test==true )
    {
        QMessageBox::information(nullptr, QObject::tr("client added"),
                    QObject::tr("Yes.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
}

void projection_page::on_pushButton_clicked()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from projection");
    ui->tableView_affi_projec->setModel(model) ;
}



void projection_page::on_pushButton_2_clicked()
{
    projection x ;
    bool test =  x.delete_projec(ui->lineEdit_delete->text()) ;
    if(test==true)
    {
        QMessageBox::information(nullptr, QObject::tr("success"),
                    QObject::tr("Yes.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }

}




void projection_page::on_pushButton_confirm_edit_clicked()
{
    projection x ;
    bool test =  x.update_proj(ui->lineEdit_edit_id->text() , ui->timeEdit_update->text()) ;
    if(test==true)
    {
        QMessageBox::information(nullptr, QObject::tr("success"),
                    QObject::tr("Yes.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
}
