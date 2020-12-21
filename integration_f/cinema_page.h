#ifndef CINEMA_PAGE_H
#define CINEMA_PAGE_H

#include <QDialog>
#include "gcinema.h"
#include "gsalle.h"
#include <QSound>


class QPrinter;
class QSqlTableModel;


namespace Ui {
class cinema_page;
}

class cinema_page : public QDialog
{
    Q_OBJECT

public:
    explicit cinema_page(QWidget *parent = nullptr);
    ~cinema_page();


    private slots:

    void on_pushButton_clicked();

    void on_pushButton_ajouter_clicked();

    void on_pushButton_modifier_clicked();

    void on_pushButton_charger_clicked();

    void on_tableView_2_activated(const QModelIndex &index);

    void on_pushButton_supprimer_clicked();

    void on_pushButton_trier_clicked();

    void on_pushButton_rechercher_cinema_clicked();

    /*void on_pushButton_2_clicked();*/

    void print(QPrinter *printer);




    void on_pushButton_refresh_clicked();

    void on_pushButton_imprimer_clicked();

private:
    Ui::cinema_page *ui;

    gcinema tmpc;
    QSqlTableModel *model;
    QSound *son;
};

#endif // CINEMA_PAGE_H
