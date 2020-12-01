#include "mainwindow.h"
#include"gest_ticket.h"
#include <QApplication>
#include<QDebug>
#include"connection.h"
#include<QMessageBox>
#include"add_client.h"
#include"gest_client.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    gest_ticket w;


    connection c;
        bool test=c.create_connect();
        if(test==true)
        {
            w.show();
            QMessageBox::information(nullptr, QObject::tr("database is open"),
                        QObject::tr("connection successful.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

        }
        else
            QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                        QObject::tr("connection failed.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);


 //   w.show();
    return a.exec();
}
