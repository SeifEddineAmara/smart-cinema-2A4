#ifndef SALLE_PAGE_H
#define SALLE_PAGE_H

#include <QDialog>

#include <QDialog>
#include "gcinema.h"
#include "gsalle.h"
#include <QSound>

namespace Ui {
class salle_page;
}

class salle_page : public QDialog
{
    Q_OBJECT

public:
    explicit salle_page(QWidget *parent = nullptr);
    ~salle_page();

private slots:

    void on_pushButton_ajouter_salle_clicked();

    void on_pushButton_affichage_salle_clicked();

    void on_pushButton_modifier_salle_clicked();

    void on_pushButton_charger_salle_clicked();

    void on_tableView_affichage_list_salle_2_activated(const QModelIndex &index);

    void on_pushButton_supprimer_salle_clicked();

    void on_pushButton_rechercher_salle_clicked();

    void on_pushButton_load_reference_clicked();


private:

    Ui::salle_page *ui;

    gsalle tmps;
    QTimer *timer;
    QSound *son;
};

#endif // SALLE_PAGE_H
