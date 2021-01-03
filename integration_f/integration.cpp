#include "integration.h"
#include "ui_integration.h"
#include <QDebug>
#include <QMessageBox>
#include "administrateur.h"

Integration::Integration(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Integration)
{
    ui->setupUi(this);
    ui->label_login->setText("Connect....");


    ui->comboBox_typeagent->addItem("Administrateur");
    ui->comboBox_typeagent->addItem("Assistant");

}

Integration::~Integration()
{
    delete ui;
}


void Integration::on_pushButton_login_clicked()
{
   QString username,password;



    QString username1,password1;

    int count=0;



    username=ui->lineEdit_username->text();
    password=ui->lineEdit_password->text();

    QSqlQuery  qry;
    QMessageBox msgBox;



if(ui->comboBox_typeagent->currentText()=="Administrateur")
{
    if(qry.exec("select * from administrateur  where username='"+username +"'and password='"+password+"'"))
{

            if(qry.next())
           {
            count++;
           }



           if(count==1)
           {
               msgBox.setText("Bienveneue chers administrateur");
               msgBox.exec();

               ui->label_login->setText("Nom d'utilisateur et le mot de passe sont corrects");
               this->hide();
               Smartcinema sc;
               sc.setWindowIcon(QIcon(":/new/prefix1/Cinema_2.jpg"));

               sc.setModal(true);
               sc.exec();
           }

           if(count==0)
           {
               ui->label_login->setText("Nom d'utilisateur et le mot de passe ne sont pas corrects ");


               verif++;

           }

}
}

     else if(ui->comboBox_typeagent->currentText()=="Assistant")
    {
            if(qry.exec("select * from ASSISTANT where username='"+username +"'and password='"+password+"'"))
           {

                       if(qry.next())
                      {
                       count++;
                      }


                      if(count==1)
                      {
                          msgBox.setText("Bienveneue chers assistant ");
                          msgBox.exec();

                          ui->label_login->setText("Nom d'utilisateur et le mot de passe sont corrects");
                          this->hide();
                          Smartcinema sc;
                          sc.setWindowIcon(QIcon(":/new/prefix1/Cinema_2.jpg"));

                          sc.setModal(true);
                          sc.exec();
                      }

                      if(count==0)
                      {
                          ui->label_login->setText("Nom d'utilisateur et le mot de passe ne sont pas corrects");

                          verif++;
                      }


           }




}

if(verif==4)
{
    Smtp* smtp = new Smtp("abdelkader.daghrour@esprit.tn", "191JMT2184", "smtp.gmail.com", 465);

    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));



    smtp->sendMail("abdelkader.daghrour@esprit.tn","omar.m'rad@esprit.tn","alert","Quelqu'un veut entrer a ton application");
    verif=0;
}






 qDebug()<<verif;
}








/* if(verif==3)
{

 Smtp* smtp = new Smtp("abdelkader.daghrour@esprit.tn", "191JMT2184", "smtp.gmail.com", 465);

 connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));



 smtp->sendMail("abdelkader.daghrour@esprit.tn","omar.m'rad@esprit.tn","alert","Quelq");

 }*/


/*  if(count==-1)
  {

     ui->label_login->setText("Username and password are not correct");

     qDebug()<<"Count1 est "<<count;

     count =-2;

  }*/

  /*if(count==-2)
  {
      ui->label_login->setText("Username and password are not correct");

      qDebug()<<"Count2 est "<<count;

  }*/


/*qry.prepare("select from usercinema where username=:username and password=:password");

 qry.bindValue(":username",username);
 qry.bindValue("password",password);

 if(qry.exec("select * from usercinema where username='"+username +"'and password='"+password+"'"))
 {
     qry.first();
     username1=qry.value(0).toString();
     password1=qry.value(1).toString();

 }


 if(username==username1 && password==password1)
 {
      ui->label_login->setText("Username and password are correct");
      this->hide();
      Smartcinema sc;
      sc.setWindowIcon(QIcon(":/new/prefix1/Cinema_2.jpg"));

      sc.setModal(true);
      sc.exec();
 }

 else if (username!=username1 && password!=password1)
 {
     ui->label_login->setText("Username and password are not correct");


     verif+=2;
 }
 verif++;

 qDebug()<<"verif est "<<verif;*/

/*
void Integration::on_pushButton_verifier_clicked()
{
    int verif=0;
            on_pushButton_login_clicked(verif);

            qDebug()<<"verif est "<<verif;
}*/
