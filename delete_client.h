#ifndef DELETE_CLIENT_H
#define DELETE_CLIENT_H

#include <QDialog>

namespace Ui {
class delete_client;
}

class delete_client : public QDialog
{
    Q_OBJECT

public:
    explicit delete_client(QWidget *parent = nullptr);
    ~delete_client();

private slots:
    void on_pushButton_confirm_delete_clicked();

private:
    Ui::delete_client *ui;
};

#endif // DELETE_CLIENT_H
