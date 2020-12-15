#include "salle_page.h"
#include "ui_salle_page.h"

#include <QMessageBox>

#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>

#include <QSqlQuery>
#include <QSqlQueryModel>

salle_page::salle_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::salle_page)
{
    ui->setupUi(this);

     ui->tableView_affichage_list_salle_2->setModel(tmps.afficher());

    son=new QSound(":/new/prefix4/Mousclik.wav");

    ui->lineEdit_numero_salle_ajout->setValidator(new QIntValidator(0,99999999,this));
    ui->lineEdit_numero_salle_modifcation->setValidator(new QIntValidator(0,99999999,this));
    ui->lineEdit_nombre_salle_modification->setValidator(new QIntValidator(0,99999999,this));
    ui->lineEdit_nombre_salle_disponible_modifcation->setValidator(new QIntValidator(0,99999999,this));
    ui->lineEdit_numero_salle_supprimer->setValidator(new QIntValidator(0,99999999,this));
    ui->lineEdit_numero_rechercher->setValidator(new QIntValidator(0,99999999,this));
    ui->lineEdit_nombre_place_rechercher->setValidator(new QIntValidator(0,99999999,this));
}

salle_page::~salle_page()
{
    delete ui;
}


void salle_page::on_pushButton_affichage_salle_clicked()
{
    son->play();


    ui->tableView_affichage_list_salle->setModel(tmps.afficher());

}

void salle_page::on_pushButton_load_reference_clicked()
{
    son->play();


    QSqlQueryModel * model= new QSqlQueryModel();

 model->setQuery("select reference from pcinema");

    ui->comboBox_ref_cinema->setModel(model);
}


void salle_page::on_pushButton_ajouter_salle_clicked()
{
    son->play();


    QMessageBox msgBox;

   QSqlQueryModel *model = new QSqlQueryModel;


    QString numero=ui->lineEdit_numero_salle_ajout->text();

    QString nombre_de_place=ui->spinBox_nb_place_salle_ajout->text();

    QString nombre_de_place_disponible=ui->spinBox_nb_place_dispo_salle_ajout->text();

    QString ref_cinema=ui->comboBox_ref_cinema->currentText();


    gsalle s(numero,nombre_de_place,nombre_de_place_disponible,ref_cinema);


    model=s.rechercher(numero);

    if(model==0 )

    {  bool test=s.ajouter();

        if (test)
        {


         ui->tableView_affichage_list_salle->setModel(tmps.afficher());

         QMessageBox::information(nullptr, QObject::tr("Ajout salle"),
                     QObject::tr("Salle ajoute.\n"
                                 "Click cancel to exit."), QMessageBox::Cancel);
        }

        else

        {
            QMessageBox::information(nullptr, QObject::tr("Ajout salle"),
                        QObject::tr("Erreur.\n"
                                    "Click cancel to exit."), QMessageBox::Ok);
        }

}


  else
   {

        msgBox.setText("Salle existe deja");
            msgBox.exec();

 }



    ui->lineEdit_numero_salle_ajout->clear();
    ui->comboBox_ref_cinema->clear();
}


void salle_page::on_pushButton_modifier_salle_clicked()
{

    son->play();


   QString numero1,nombre_de_place1,nombre_de_place_disponible1;

   numero1=ui->lineEdit_numero_salle_modifcation->text();
   nombre_de_place1=ui->lineEdit_nombre_salle_modification->text();
   nombre_de_place_disponible1=ui->lineEdit_nombre_salle_disponible_modifcation->text();



   tmps.modifier(numero1,nombre_de_place1,nombre_de_place_disponible1);


   ui->tableView_affichage_list_salle_2->setModel(tmps.afficher());
   ui->tableView_affichage_list_salle_2->show();


}


void salle_page::on_pushButton_charger_salle_clicked()
{
    son->play();


    ui->tableView_affichage_list_salle_2->setModel(tmps.afficher());

}

void salle_page::on_tableView_affichage_list_salle_2_activated(const QModelIndex &index)
{
    QMessageBox msgBox1;
    QSqlQuery query;

   QString value=ui->tableView_affichage_list_salle_2->model()->data(index).toString();



   query.prepare("SELECT * FROM sallee WHERE numero='"+value +"'");

   if(query.exec())

   {
       while(query.next())

         {
           ui->lineEdit_numero_salle_modifcation->setText(query.value(0).toString());
           ui->lineEdit_nombre_salle_modification->setText(query.value(1).toString());
           ui->lineEdit_nombre_salle_disponible_modifcation->setText(query.value(2).toString());
       }

   }

   else
   {
       msgBox1.setText("Impossible");
           msgBox1.exec();
   }
}



void salle_page::on_pushButton_supprimer_salle_clicked()
{

    son->play();


    QSqlQueryModel *model = new QSqlQueryModel;
QMessageBox msgBox;

       QString numero=ui->lineEdit_numero_salle_supprimer->text();




       model=tmps.rechercher(numero);


       if(model==0 )

{
           msgBox.setText("Salle n'existe deja");
               msgBox.exec();

}

       else
       {
           bool test=tmps.supprimer(numero);

           if (test)
                    {


               QMessageBox::information(nullptr, QObject::tr("Suppression salle"),
                           QObject::tr("Salle supprimé.\n"
                                       "Click cancel to exit."), QMessageBox::Cancel);

                     }

           else
           {
                       QMessageBox::information(nullptr, QObject::tr("Suppression salle"),
                                   QObject::tr("Salle non supprimé.\n"
                                               "Click cancel to exit."), QMessageBox::Cancel);
            }

       }




       ui->lineEdit_numero_salle_supprimer->clear();

}


void salle_page::on_pushButton_rechercher_salle_clicked()
{

    son->play();


    ui->tableView_salle_rechercher->setModel(tmps.rechercher_3(ui->lineEdit_numero_rechercher->text(),ui->lineEdit_nombre_place_rechercher->text(),ui->lineEdit_ref_cinema_salle_rechercher->text()));

/*              ui->tableView_salle_rechercher->show();*/
}
