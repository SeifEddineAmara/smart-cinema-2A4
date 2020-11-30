#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDateTime>
#include<QDesktopServices>
#include <QUrl>
#include <QUrl>

#include <QFileDialog>

/*#include <QtWebKitWidgets/QWebView>*/


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
#include <QTimer>

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



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tableView->setModel(tmpc.afficher());
    ui->tableView_affichage_list_salle_2->setModel(tmps.afficher());


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

 QMovie *movie = new QMovie(":/new/prefix2/giphy.gif");
movie->start();

ui->label_26->setMovie(movie);

//Time

timer=new QTimer(this);
connect(timer,SIGNAL(timeout()),this,SLOT(myfunction()));
timer->start(1000);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
   ui->tableView->setModel(tmpc.afficher());
   son->play();


}

void MainWindow::myfunction()
{
    QTime time=QTime::currentTime();
    QString time_text=time.toString("hh: mm : ss");
    ui->label_timer->setText(time_text);
}



void MainWindow::on_pushButton_ajouter_clicked()
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

void MainWindow::on_pushButton_modifier_clicked()
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


}


void MainWindow::on_pushButton_charger_clicked()
{
    son->play();

    ui->tableView_2->setModel(tmpc.afficher());
}


void MainWindow::on_tableView_2_activated(const QModelIndex &index)
{


    QMessageBox msgBox1;
    QSqlQuery query;

   QString value=ui->tableView_2->model()->data(index).toString();



   query.prepare("SELECT * FROM pcinema WHERE reference='"+value +"'or nom='"+value +"'");

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



void MainWindow::on_pushButton_supprimer_clicked()
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

void MainWindow::on_pushButton_trier_clicked()
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

void MainWindow::on_pushButton_rechercher_cinema_clicked()
{
    son->play();


    ui->tableView_rechercher_cinema->setModel(tmpc.rechercher_3(ui->lineEdit_reference_rechercher->text(),ui->lineEdit_nom_rechercher_2->text(),ui->lineEdit_destination_rechercher->text()));

              ui->tableView_rechercher_cinema->show();
}



//salle

void MainWindow::on_pushButton_affichage_salle_clicked()
{
    son->play();


    ui->tableView_affichage_list_salle->setModel(tmps.afficher());

}

void MainWindow::on_pushButton_load_reference_clicked()
{
    son->play();


    QSqlQueryModel * model= new QSqlQueryModel();

 model->setQuery("select reference from pcinema");

    ui->comboBox_ref_cinema->setModel(model);
}


void MainWindow::on_pushButton_ajouter_salle_clicked()
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


void MainWindow::on_pushButton_modifier_salle_clicked()
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


void MainWindow::on_pushButton_charger_salle_clicked()
{
    son->play();


    ui->tableView_affichage_list_salle_2->setModel(tmps.afficher());

}

void MainWindow::on_tableView_affichage_list_salle_2_activated(const QModelIndex &index)
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



void MainWindow::on_pushButton_supprimer_salle_clicked()
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


void MainWindow::on_pushButton_rechercher_salle_clicked()
{

    son->play();


    ui->tableView_salle_rechercher->setModel(tmps.rechercher_3(ui->lineEdit_numero_rechercher->text(),ui->lineEdit_nombre_place_rechercher->text(),ui->lineEdit_ref_cinema_salle_rechercher->text()));

              ui->tableView_rechercher_cinema->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    QPrintPreviewDialog dialog;
        connect(&dialog, SIGNAL(paintRequested(QPrinter*)), this, SLOT(print(QPrinter*)));
        dialog.exec();
}

void MainWindow::print(QPrinter *printer)
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


void MainWindow::on_pushButton_3_clicked()
{
    son->play();


    QString  link="http://www.google.com";
    QDesktopServices::openUrl(QUrl(link));

}

void MainWindow::on_pushButton_4_clicked()
{
    son->play();


    QString filename=QFileDialog::getOpenFileName(
                this,tr("Open File"),"C://",
                "All files(*.*);;Text File (*.text);;Music file(*.mp3)"


                );

    QDesktopServices::openUrl(QUrl("file:///"+filename,QUrl::TolerantMode));
}
