#ifndef CINEMA_PAGE_H
#define CINEMA_PAGE_H

#include <QMainWindow>
#include <QTimer>

#include "cinema.h"



#include "salle_page.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Cinema_page; }
QT_END_NAMESPACE

class Cinema_page : public QMainWindow
{
    Q_OBJECT

public:
    Cinema_page(QWidget *parent = nullptr);
    ~Cinema_page();

private slots:





    void on_Button_rechercher_ajout_cinema_clicked();

    void on_Button_entrer_salle_clicked();



    void on_Button_supprimer_cinema_clicked();

    void on_Button_afficher_liste_clicked();

    void on_Button_modifier_clicked();

    void on_Button_rechercher_clicked();

    void on_tableView_3_activated(const QModelIndex &index);


    void on_Button_afficher_liste_2_clicked();

public slots:

    void myfunction();

private:
    Ui::Cinema_page *ui;
    QTimer *timer;
    Cinema tmpc;
    salle_page *page_salle;
};
#endif // CINEMA_PAGE_H
