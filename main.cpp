#include "mainwindow.h"
#include "connectionoracle.h"
#include <QMessageBox>
#include <QApplication>
#include <QMediaPlayer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
        connectionoracle c;
        bool test=c.createconnect();
        MainWindow w;
        if(test)
        {w.show();
            QMessageBox::information(nullptr, QObject::tr("database is open"),
                        QObject::tr("connection successful.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

    }
        else
            QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                        QObject::tr("connection failed.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        QMediaPlayer * player = new QMediaPlayer();
            player->setMedia(QUrl("qrc:/2019-03-04_-_They_Said_I_Cant_-_David_Fesliyan.mp3"));
            player->setVolume(50);
            player->play();


        w.show();
        return a.exec();
    return a.exec();
}
