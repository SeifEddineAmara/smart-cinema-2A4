#ifndef TICKET_PAGE_H
#define TICKET_PAGE_H

#include <QDialog>

namespace Ui {
class ticket_page;
}

class ticket_page : public QDialog
{
    Q_OBJECT

public:
    explicit ticket_page(QWidget *parent = nullptr);
    ~ticket_page();

private slots:



    void on_pushButton_confirm_type_clicked();


    void on_pushButton_confirm_ajout_clicked();

    void on_pushButton_confirm_aff_ticket_clicked();

    void on_pushButton_confirm_clicked();

   /* void on_pushButton_verif_id_update_clicked();*/

    /*void on_pushButton_update_confi_type_clicked();*/

    void on_pushButton_confi_update_clicked();

  /*  void on_pushButton_clicked();*/

    void on_pushButton_update_projection_clicked();

    void on_pushButton_update_chaise_id_clicked();


    void on_pushButton_update_client_clicked();

    void on_pushButton_verif_id_update_clicked();



    void on_pushButton_confirm_consomm_clicked();

private:
    Ui::ticket_page *ui;
};

#endif // TICKET_PAGE_H
