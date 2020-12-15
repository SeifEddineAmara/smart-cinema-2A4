#include "integration.h"
#include <QMessageBox>
#include "connection.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Integration w;
    Smartcinema sc;
    Connection c;


    w.setWindowIcon(QIcon(":/new/prefix1/Cinema_2.jpg"));



    bool test=c.createconnect();
    if(test)

    {   w.show();
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("connection successful.\n"
                                "Click Cancel to exit."), QMessageBox::Ok);

     }

    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


    return a.exec();
}

