#ifndef CLIENT_PAGE_H
#define CLIENT_PAGE_H

#include <QDialog>
#include "client.h"

namespace Ui {
class client_page;
}

class client_page : public QDialog
{
    Q_OBJECT

public:
    explicit client_page(QWidget *parent = nullptr);
    ~client_page();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_confi_edit_clicked();

    void on_pushButton_conif_delete_clicked();

    void on_pushButton_confirm_tri_clicked();

    void on_pushButton_search_clicked();

private:
    Ui::client_page *ui;

    client temp_client ;

};

#endif // CLIENT_PAGE_H
