#include "cinema_page.h"
#include "ui_cinema_page.h"

#include <QMessageBox>




#include "tableprinter.h"

#include <QPrinter>
#include <QPrintPreviewDialog>
#include <QPainter>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>
#include <QMovie>

#include <QSqlQuery>
#include <QSqlQueryModel>





class PrintBorder : public PagePrepare {
public:
    virtual void preparePage(QPainter *painter);
    static int pageNumber;
};

int PrintBorder::pageNumber = 0;

void PrintBorder::preparePage(QPainter *painter) { // print a border on each page
    QRect rec = painter->viewport();
    painter->setPen(QPen(QColor(0, 0, 0), 1));
    painter->drawRect(rec);
    painter->translate(10, painter->viewport().height() - 10);
    painter->drawText(0, 0, QString("Page %1").arg(pageNumber));
    pageNumber += 1;
}

cinema_page::cinema_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cinema_page)
{
    ui->setupUi(this);

    ui->tableView->setModel(tmpc.afficher());

    son=new QSound(":/new/prefix4/Mousclik.wav");

    model = new QSqlTableModel;
    model->setTable("pcinema");
    model->select();
    ui->tableView->setModel(model);

    //combox

     ui->comboBox_tri->addItem("REFERENCE");
     ui->comboBox_tri->addItem("DESTINATION");
     ui->comboBox_tri->addItem("NOMBRE_SALLE");

    //gif

     QMovie *movie = new QMovie(":/new/prefix4/giphy.gif");
    movie->start();

 /*   ui->label_37->setMovie(movie);*/


    /////

   ui->lineEdit_reference_ajout->setValidator(new QIntValidator(0,99999999,this));
    ui->lineEdit_reference_modification->setValidator(new QIntValidator(0,99999999,this));
    ui->lineEdit_nombre_salle_modication->setValidator(new QIntValidator(0,99999999,this));
    ui->lineEdit_reference_suppression->setValidator(new QIntValidator(0,99999999,this));
    ui->lineEdit_reference_rechercher->setValidator(new QIntValidator(0,99999999,this));

    ui->lineEdit_nom_ajout->setValidator(new QRegExpValidator( QRegExp("[A-Za-z0_]{0,255}"), this ));
    ui->lineEdit_destination_ajout->setValidator(new QRegExpValidator( QRegExp("[A-Za-z0_]{0,255}"), this ));

    ui->lineEdit_nom_modifcation->setValidator(new QRegExpValidator( QRegExp("[A-Za-z0_]{0,255}"), this ));
    ui->lineEdit_destination_modifcation->setValidator(new QRegExpValidator( QRegExp("[A-Za-z0_]{0,255}"), this ));

    ui->lineEdit_nom_rechercher_2->setValidator(new QRegExpValidator( QRegExp("[A-Za-z0_]{0,255}"), this ));
    ui->lineEdit_destination_rechercher->setValidator(new QRegExpValidator( QRegExp("[A-Za-z0_]{0,255}"), this ));



}

cinema_page::~cinema_page()
{
    delete ui;
}


void cinema_page::on_pushButton_clicked()
{
   ui->tableView->setModel(tmpc.afficher());
   son->play();


}




void cinema_page::on_pushButton_ajouter_clicked()
{
    son->play();


    QMessageBox msgBox;

   QSqlQueryModel *model = new QSqlQueryModel;


     QString nom=ui->lineEdit_nom_ajout->text();

    QString reference=ui->lineEdit_reference_ajout->text();

    QString datec=ui->dateEdit->text();

    QString destination=ui->lineEdit_destination_ajout->text();

    QString nombre_salle=ui->spinBox->text();

    gcinema c(nom,reference,nombre_salle,datec,destination);


    model=c.rechercher(reference);

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


    ui->lineEdit_nom_ajout->clear();
    ui->lineEdit_reference_ajout->clear();
    ui->lineEdit_destination_ajout->clear();
}

void cinema_page::on_pushButton_modifier_clicked()
{

    son->play();


    QMessageBox msgBox;
    QMessageBox msgBox1;
    QString nom1,reference1,datec1,destination1,nb;

   nom1=ui->lineEdit_nom_modifcation->text();
   reference1=ui->lineEdit_reference_modification->text();
   datec1=ui->lineEdit_date_modifcation->text();
   destination1=ui->lineEdit_destination_modifcation->text();
   nb=ui->lineEdit_nombre_salle_modication->text();




   tmpc.modifier(nom1,reference1,datec1,destination1,nb);




   ui->tableView_2->setModel(tmpc.afficher());
   ui->tableView_2->show();

ui->tableView->setModel(tmpc.afficher());

}


void cinema_page::on_pushButton_charger_clicked()
{
    son->play();

    ui->tableView_2->setModel(tmpc.afficher());
}


void cinema_page::on_tableView_2_activated(const QModelIndex &index)
{


    QMessageBox msgBox1;
    QSqlQuery query;

   QString value=ui->tableView_2->model()->data(index).toString();



   query.prepare("SELECT * from pcinema WHERE reference='"+value +"'");

   if(query.exec())

   {
       while(query.next())

         {
           ui->lineEdit_nom_modifcation->setText(query.value(0).toString());
           ui->lineEdit_reference_modification->setText(query.value(1).toString());
           ui->lineEdit_date_modifcation->setText(query.value(2).toString());
           ui->lineEdit_destination_modifcation->setText(query.value(3).toString());
           ui->lineEdit_nombre_salle_modication->setText(query.value(4).toString());
       }

   }

   else
   {
       msgBox1.setText("Impossible");
           msgBox1.exec();
   }
}



void cinema_page::on_pushButton_supprimer_clicked()
{

    son->play();

    QSqlQuery query;

    QSqlQueryModel *model = new QSqlQueryModel;
QMessageBox msgBox;

       QString reference=ui->lineEdit_reference_suppression->text();




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




       ui->lineEdit_reference_suppression->clear();

}

void cinema_page::on_pushButton_trier_clicked()
{

    son->play();


    int test=0;

      if (ui->comboBox_tri->currentText()=="REFERENCE")
                 {test=1;}

      else if (ui->comboBox_tri->currentText()=="DESTINATION")
                  {test=2;}

      else if (ui->comboBox_tri->currentText()=="NOMBRE_SALLE")
                  {test=3;}


      ui->tableView_tri->setModel(tmpc.trier(test)) ;

}

void cinema_page::on_pushButton_rechercher_cinema_clicked()
{
    son->play();


    ui->tableView_rechercher_cinema->setModel(tmpc.rechercher_3(ui->lineEdit_reference_rechercher->text(),ui->lineEdit_nom_rechercher_2->text(),ui->lineEdit_destination_rechercher->text()));

              ui->tableView_rechercher_cinema->show();

              ui->lineEdit_reference_rechercher->clear();
              ui->lineEdit_nom_rechercher_2->clear();
              ui->lineEdit_destination_rechercher->clear();
}

/*
void cinema_page::on_pushButton_2_clicked()
{
    QPrintPreviewDialog dialog;
        connect(&dialog, SIGNAL(paintRequested(QPrinter*)), this, SLOT(print(QPrinter*)));
        dialog.exec();
}
*/

void cinema_page::print(QPrinter *printer)
{
    QPainter painter;
        if(!painter.begin(printer))
        {
            qWarning() << "can't start printer";
            return;
        }

        // print table
        TablePrinter tablePrinter(&painter, printer);
        QVector<int> columnStretch = QVector<int>() << 10 << 15 << 20 << 25 << 30;
        if(!tablePrinter.printTable(ui->tableView->model(), columnStretch)) {
            qDebug() << tablePrinter.lastError();
        }
        painter.end();
}

void cinema_page::on_pushButton_refresh_clicked()
{
    ui->tableView_rechercher_cinema->setModel(tmpc.afficher());
}

void cinema_page::on_pushButton_imprimer_clicked()
{
    QPrintPreviewDialog dialog;
        connect(&dialog, SIGNAL(paintRequested(QPrinter*)), this, SLOT(print(QPrinter*)));
        dialog.exec();
}
