#include "cinema_page.h"
#include "ui_cinema_page.h"
#include <QTableWidget>
#include <QMessageBox>
#include <QDateTime>

#include "salle_page.h"
#include "cinema.h"
#include <QMovie>

#include <QPixmap>


Cinema_page::Cinema_page(QWidget *parent): QMainWindow(parent) , ui(new Ui::Cinema_page)

{
    ui->setupUi(this);
    ui->tableView->setModel(tmpc.afficher());

    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(myfunction()));
    timer->start(1000);


/*QPixmap pix(":/icon/imageload/giphy.gif");*/



     /*  QLabel *processLabel = new QLabel(this);*/
           QMovie *movie = new QMovie(":/icon/imageload/giphy.gif");
        movie->start();

        ui->label_15->setMovie(movie);

       /* processLabel->setGeometry(440,100,20,20);
                 processLabel->setScaledContents(true);
        movie->setScaledSize(QSize(1000,1000));
        processLabel->setMovie(movie);*/

}


void Cinema_page::myfunction()
{
    QTime time=QTime::currentTime();
    QString time_text=time.toString("hh: mm : ss");
    ui->label_time->setText(time_text);

}


Cinema_page::~Cinema_page()
{
    delete ui;
}





void Cinema_page::on_Button_rechercher_ajout_cinema_clicked()
{
   QMessageBox msgBox;

  QSqlQueryModel *model = new QSqlQueryModel;
 /*QSqlQueryModel *model1 = new QSqlQueryModel;*/

    QString nom=ui->lineEdit_nom->text();

   QString reference=ui->lineEdit_reference->text();

   QString datec=ui->dateEdit->text();

   QString destination=ui->lineEdit_destination->text();

   QString nombre_salle=ui->spinBox->text();

   Cinema c(nom,reference,nombre_salle,datec,destination);


   model=c.rechercher(reference);
  /*model1=c.rechercher_nom(nom);*/

   if(model==0 )

   {   bool test=c.ajouter();

       if (test)
       {


        ui->tableView->setModel(tmpc.afficher());

        QMessageBox::information(nullptr, QObject::tr("Ajout cinema"),
                    QObject::tr("Cinema ajoute.\n"
                                "Click cancel to exit."), QMessageBox::Cancel);
       }

       else

       {
           QMessageBox::information(nullptr, QObject::tr("Ajout cinema"),
                       QObject::tr("Erreur.\n"
                                   "Click cancel to exit."), QMessageBox::Ok);
       }


   }

   else
  {

       msgBox.setText("Cinema existe deja");
           msgBox.exec();

}


   ui->lineEdit_nom->clear();
   ui->lineEdit_reference->clear();
   ui->lineEdit_destination->clear();


}


void Cinema_page::on_Button_supprimer_cinema_clicked()
{
     QSqlQueryModel *model = new QSqlQueryModel;
 QMessageBox msgBox;

        QString reference=ui->lineEdit_suppression_reference->text();




        model=tmpc.rechercher(reference);


        if(model==0 )

{
            msgBox.setText("Cinema n'existe deja");
                msgBox.exec();

 }

        else
        {     bool test=tmpc.supprimer(reference);

            if (test)
                     {


                QMessageBox::information(nullptr, QObject::tr("Suppression cinema"),
                            QObject::tr("Cinema supprimé.\n"
                                        "Click cancel to exit."), QMessageBox::Cancel);

                      }

            else
            {
                        QMessageBox::information(nullptr, QObject::tr("Suppression cinema"),
                                    QObject::tr("Cinema non supprimé.\n"
                                                "Click cancel to exit."), QMessageBox::Cancel);
             }

        }




        ui->lineEdit_suppression_reference->clear();



 }



void Cinema_page::on_Button_entrer_salle_clicked()
{
 hide();
 page_salle=new salle_page(this);
 page_salle->show();

}



void Cinema_page::on_Button_afficher_liste_clicked()
{

    ui->tableView->setModel(tmpc.afficher());
}


void Cinema_page::on_Button_modifier_clicked()
{
    QMessageBox msgBox;
    QMessageBox msgBox1;
    QSqlQuery query;

   QSqlQueryModel *model = new QSqlQueryModel;

   QString nom1,reference1,datec1,destination1,nb;

   nom1=ui->lineEdit_nom_1->text();
   reference1=ui->lineEdit_reference_1->text();
   datec1=ui->lineEdit_date_1->text();
   destination1=ui->lineEdit_destination_1->text();
   nb=ui->lineEdit_nb_1->text();

   query.prepare("UPDATE PCINEMA set NOM='"+nom1 +" ', REFERENCE='"+reference1+"', DATEC='"+datec1+"', DESTINATION='"+destination1+"' , NOMBRE_SALLE='"+nb+"' where REFERENCE='"+reference1+"' ");

   model=tmpc.rechercher(reference1);

/*if(model==0)
 {
*/
   if(query.exec())

   {
   msgBox.setText("Cinema modifié");
   msgBox.exec();
   ui->tableView_3->setModel(tmpc.afficher());
   ui->tableView_3->show();
   }
/*
else
{
   msgBox1.setText("Cinema non modifié");
       msgBox1.exec();
}

}
*/




  /* ui->lineEdit_nom_1->clear();
   ui->lineEdit_reference_1->clear();
   ui->lineEdit_date_1->clear();
   ui->lineEdit_destination_1->clear();
   ui->lineEdit_nb_1->clear();*/

}


void Cinema_page::on_Button_rechercher_clicked()
{


  /*  ui->tableView_2->setModel(tmpc.rechercher(ui->lineEdit_reference_rechercher->text()));
    ui->tableView_2->show();*/


    ui->tableView_2->setModel(tmpc.rechercher_3(ui->lineEdit_reference_rechercher->text(),ui->lineEdit_nom_rechercher->text(),ui->lineEdit_destination_rechercher->text()));



              ui->tableView_2->show();

}

void Cinema_page::on_tableView_3_activated(const QModelIndex &index)
{
     QMessageBox msgBox1;
     QSqlQuery query;

    QString value=ui->tableView_3->model()->data(index).toString();



    query.prepare("SELECT * FROM pcinema WHERE reference='"+value +"'or nom='"+value +"'");

    if(query.exec())

    {
        while(query.next())

          {
            ui->lineEdit_nom_1->setText(query.value(0).toString());
            ui->lineEdit_reference_1->setText(query.value(1).toString());
            ui->lineEdit_date_1->setText(query.value(2).toString());
            ui->lineEdit_destination_1->setText(query.value(3).toString());
            ui->lineEdit_nb_1->setText(query.value(4).toString());
        }

    }

    else
    {
        msgBox1.setText("Impossible");
            msgBox1.exec();
    }

}


void Cinema_page::on_Button_afficher_liste_2_clicked()
{
  ui->tableView_3->setModel(tmpc.afficher());
}
