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

   ui->label_26->setMovie(movie);


   int ret=A.connect_arduino();

   alert=0;
   messageboxactive=0;

   switch(ret)
   {

     case (0):

       qDebug() << "arduino is available and connect to : " << A.getarduino_port_name();
       break;

     case(1):qDebug() << "arduino is available but not  connect to : " << A.getarduino_port_name();
       break;

       case(-1):qDebug()<< "arduino is not available  : " ;
       break;

   }

   /* QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label()));*/
    QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label1()));





}

/*
void Smartcinema::update_label()
{

    data_temperature=A.read_from_arduino();
    QString DataAsString = QString(data_temperature);
    qDebug()<< data_temperature;

     ui->label_2->setText("temp : "+data_temperature);

    if (data_temperature=="21"||data_temperature=="22"||data_temperature=="23"||data_temperature=="24"||data_temperature=="25"||data_temperature=="26"||data_temperature=="27"){
        if (messageboxactive==0){
            alert=1;
        }


    }
    if (alert==1)
    {
         alert=0;
         messageboxactive=1;
        int reponse = QMessageBox::question(this, "led", "allumer led", QMessageBox::Yes |  QMessageBox::No);
                                   if (reponse == QMessageBox::Yes)
                                   {
                                     led=1;
                                   }
                                   if (reponse == QMessageBox::No)
                                   {
                                      led=0;
                                   }

    }
    if (led==1){
        A.write_to_arduino("1");
    }
    if (data_temperature=="20"||data_temperature=="19"||data_temperature=="18"||data_temperature=="17"||data_temperature=="16"||data_temperature=="15"||data_temperature=="14"){
        A.write_to_arduino("0");
        led=0;
    }













}
*/


void Smartcinema::update_label1()
{
    data=A.read_from_arduino();
    qDebug()<< data;

    /*ui->label_gaz->setText("data : "+data);*/

    if (data=="3")
    {
        int reponse = QMessageBox::question(this, "Alert gaz", "Faites vos protocoles", QMessageBox::Yes |  QMessageBox::No);

        if (reponse == QMessageBox::Yes)
        {
         A.write_to_arduino("1");
        }
        if (reponse == QMessageBox::No)
        {
         A.write_to_arduino("0");
        }

    }



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

void Smartcinema::on_pushButton_projection_clicked()
{
    son->play();


    pp=new projection_page(this);
    pp->show();
}
