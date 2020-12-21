#ifndef SMARTCINEMA_H
#define SMARTCINEMA_H

#include <QDialog>



#include "cinema_page.h"
#include "salle_page.h"
#include "mainwindow_film_consommation.h"
#include "chaise_producteur_page.h"

#include "client_page.h"
#include "ticket_page.h"
#include "administrateur_assistant_page.h"
#include "verification_administrateur.h"

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

    void on_pushButton_gest_ticket_clicked();

    void on_pushButton_gest_client_clicked();

    void on_pushButton_gest_producteur_clicked();

    void on_pushButton_gest_chaise_producteur_clicked();

private:
    Ui::Smartcinema *ui;

    cinema_page  *pagecinema;
    salle_page   *pagesalle;

    MainWindow_film_consommation *fc;

    client_page *c;
    ticket_page *t;
    administrateur_assistant_page *adminassis;
    verification_administrateur   *vad;
    chaise_producteur_page *cp;

    QTimer *timer;
    QSound *son;


public slots:

    void myfunction();






};

#endif // SMARTCINEMA_H
