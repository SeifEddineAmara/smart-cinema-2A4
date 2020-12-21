#include "smartcinema.h"
#include "ui_smartcinema.h"
#include <QMovie>

Smartcinema::Smartcinema(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Smartcinema)
{
    ui->setupUi(this);

    son=new QSound(":/new/prefix4/Mousclik.wav");


    //Time

    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(myfunction()));
    timer->start(1000);


    QMovie *movie = new QMovie(":/new/prefix4/giphy.gif");
   movie->start();
   //gif

    /*QMovie *movie = new QMovie(":/new/prefix2/giphy.gif");
   movie->start();*/

   /*ui->label_26->setMovie(movie);*/
   ui->label_26->setMovie(movie);


}

Smartcinema::~Smartcinema()
{
    delete ui;
}



void Smartcinema::myfunction()
{
    QTime time=QTime::currentTime();
    QString time_text=time.toString("hh: mm : ss");
    ui->label_timer->setText(time_text);
}






void Smartcinema::on_pushButton_3_clicked()
{
    son->play();


    QString  link="http://www.google.com";
    QDesktopServices::openUrl(QUrl(link));

}

void Smartcinema::on_pushButton_4_clicked()
{
    son->play();


    QString filename=QFileDialog::getOpenFileName(
                this,tr("Open File"),"C://",
                "All files(*.*);;Text File (*.text);;Music file(*.mp3)"


                );

    QDesktopServices::openUrl(QUrl("file:///"+filename,QUrl::TolerantMode));
}


void Smartcinema::on_pushButton_gest_cinema_clicked()
{
    son->play();


    pagecinema=new cinema_page(this);
    pagecinema->show();
}

void Smartcinema::on_pushButton_gest_salle_clicked()
{

    son->play();

            pagesalle=new salle_page(this);
            pagesalle->show();
}

void Smartcinema::on_pushButton_gest_film_clicked()
{
    son->play();

            fc=new MainWindow_film_consommation(this);
            fc->show();
}



void Smartcinema::on_pushButton_gest_ticket_clicked()
{
    son->play();


    t=new ticket_page(this);
    t->show();
}



void Smartcinema::on_pushButton_gest_client_clicked()
{
    son->play();


    c=new client_page(this);
    c->show();
}

void Smartcinema::on_pushButton_gest_producteur_clicked()
{
    son->play();

      vad=new verification_administrateur(this);
      vad->show();


}

void Smartcinema::on_pushButton_gest_chaise_producteur_clicked()
{
    son->play();


    cp=new chaise_producteur_page(this);
    cp->show();

}
