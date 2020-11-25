#include "mainwindow.h"
#include "connexion.h"

#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.setWindowTitle("Cinena");

    w.show();


    return a.exec();
}
