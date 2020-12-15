#include "integration.h"
#include "ui_integration.h"

Integration::Integration(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Integration)
{
    ui->setupUi(this);
    ui->label_login->setText("Connect....");

}

Integration::~Integration()
{
    delete ui;
}


void Integration::on_pushButton_login_clicked()
{
    QString username,password;

    username=ui->lineEdit_username->text();
    password=ui->lineEdit_password->text();

    QSqlQuery  qry;

    if(qry.exec("select * from usercinema where username='"+username +"'and password='"+password+"'"))

        {  int count=0 ;
           while(qry.next())
           {
               count++;
           }

           if(count==1)
           {
               ui->label_login->setText("Username and password are correct");
               this->hide();
               Smartcinema sc;
               sc.setWindowIcon(QIcon(":/new/prefix1/Cinema_2.jpg"));

               sc.setModal(true);
               sc.exec();
           }

           if(count>1)
               ui->label_login->setText("Duplicate username and password ");

           if(count<1)
               ui->label_login->setText("Username and password are not correct");


        }

}
