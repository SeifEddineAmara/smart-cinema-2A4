#include "verification_administrateur.h"
#include "ui_verification_administrateur.h"

verification_administrateur::verification_administrateur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::verification_administrateur)
{
    ui->setupUi(this);

    ui->label_login->setText("Connect....");
}

verification_administrateur::~verification_administrateur()
{
    delete ui;
}

void verification_administrateur::on_pushButton_clicked()
{
    QString id;

    id=ui->lineEdit_id->text();

    QSqlQuery  qry;

    if(qry.exec("select * from administrateur where id='"+id +"'"))

        {  int count=0 ;
           while(qry.next())
           {
               count++;
           }

           if(count==1)
           {
               ui->label_login->setText("C'est l'administrateur");
               this->hide();
               administrateur_assistant_page aa;

               aa.setWindowIcon(QIcon(":/new/prefix1/Cinema_2.jpg"));

               aa.setModal(true);
               aa.exec();
           }


           if(count<1)
               ui->label_login->setText("Ce n'est pas l 'administrateur");


        }
}
