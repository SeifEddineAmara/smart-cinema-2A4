#ifndef SMARTCINEMA_H
#define SMARTCINEMA_H

#include <QDialog>



#include "cinema_page.h"
#include "salle_page.h"
#include "mainwindow_film_consommation.h"

#include <QTimer>
#include<QDesktopServices>
#include <QUrl>
#include <QUrl>
#include <QFileDialog>
#include <QDateTime>



namespace Ui {
class Smartcinema;
}

class Smartcinema : public QDialog
{
    Q_OBJECT

public:
    explicit Smartcinema(QWidget *parent = nullptr);
    ~Smartcinema();



private slots:


    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_gest_cinema_clicked();
    void on_pushButton_gest_salle_clicked();


    void on_pushButton_gest_film_clicked();

private:
    Ui::Smartcinema *ui;

    cinema_page  *pagecinema;
    salle_page   *pagesalle;

    MainWindow_film_consommation *fc;


    QTimer *timer;

public slots:

    void myfunction();






};

#endif // SMARTCINEMA_H
