#ifndef GEST_CLIENT_H
#define GEST_CLIENT_H

#include <QDialog>
#include"client.h"

namespace Ui {
class gest_client;
}

class gest_client : public QDialog
{
    Q_OBJECT

public:
    explicit gest_client(QWidget *parent = nullptr);
    ~gest_client();


private slots:
    void on_pushButton_show_client_clicked();

    void on_pushButton_delete_client_clicked();

    void on_pushButton_add_client_clicked();

    void on_pushButton_update_client_clicked();


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::gest_client *ui;
    client tempclient2 ;
};

#endif // GEST_CLIENT_H
