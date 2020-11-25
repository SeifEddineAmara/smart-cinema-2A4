#ifndef EDIT_CLIENT_H
#define EDIT_CLIENT_H

#include <QDialog>

namespace Ui {
class edit_client;
}

class edit_client : public QDialog
{
    Q_OBJECT

public:
    explicit edit_client(QWidget *parent = nullptr);
    ~edit_client();

private slots:
    void on_pushButton_confirm_verification_clicked();

    void on_confirm_edit_clicked();

private:
    Ui::edit_client *ui;
};

#endif // EDIT_CLIENT_H
