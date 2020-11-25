
#include "cinema_page.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Cinema_page w;
    Connection c;


    w.setWindowIcon(QIcon(":/icon/imageload/Icon.jpg"));



    bool test=c.creatconnect();

    if(test)

    {
        w.show();
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("connection successful.\n"
                                "Click cancel to exit."), QMessageBox::Ok);

     }
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click cancel to exit."), QMessageBox::Cancel);


    return a.exec();
}
