#ifndef GEST_TICKET_H
#define GEST_TICKET_H

#include <QDialog>

namespace Ui {
class gest_ticket;
}

class gest_ticket : public QDialog
{
    Q_OBJECT

public:
    explicit gest_ticket(QWidget *parent = nullptr);
    ~gest_ticket();

private slots:
    void on_pushButton_update_film_cine_clicked();

    void on_pushButton_update_cine_salle_clicked();

    void on_pushButton_update_salle_horaire_clicked();

    void on_pushButton_confirm_type_clicked();

    void on_pushButton_update_horaire_clicked();

    void on_pushButton_confirm_ajout_clicked();

    void on_pushButton_confirm_aff_ticket_clicked();

    void on_pushButton_confirm_clicked();

    void on_pushButton_verif_id_update_clicked();

    void on_pushButton_update_confi_type_clicked();

    void on_pushButton_confi_update_clicked();

private:
    Ui::gest_ticket *ui;
};

#endif // GEST_TICKET_H
