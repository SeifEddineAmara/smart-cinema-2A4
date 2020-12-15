#include "smartcinema.h"
#include "ui_smartcinema.h"

Smartcinema::Smartcinema(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Smartcinema)
{
    ui->setupUi(this);

    //Time

    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(myfunction()));
    timer->start(1000);


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
   /* son->play();*/


    QString  link="http://www.google.com";
    /*QDesktopServices::openUrl(QUrl(link));*/

}

void Smartcinema::on_pushButton_4_clicked()
{
   /* son->play();


    QString filename=QFileDialog::getOpenFileName(
                this,tr("Open File"),"C://",
                "All files(*.*);;Text File (*.text);;Music file(*.mp3)"


                );

    QDesktopServices::openUrl(QUrl("file:///"+filename,QUrl::TolerantMode));*/
}


void Smartcinema::on_pushButton_gest_cinema_clicked()
{


    pagecinema=new cinema_page(this);
    pagecinema->show();
}

void Smartcinema::on_pushButton_gest_salle_clicked()
{


            pagesalle=new salle_page(this);
            pagesalle->show();
}

void Smartcinema::on_pushButton_gest_film_clicked()
{

            fc=new MainWindow_film_consommation(this);
            fc->show();
}


