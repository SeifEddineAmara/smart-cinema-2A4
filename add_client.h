#ifndef ADD_CLIENT_H
#define ADD_CLIENT_H

#include <QDialog>

namespace Ui {
class add_client;
}

class add_client : public QDialog
{
    Q_OBJECT

public:
    explicit add_client(QWidget *parent = nullptr);
    ~add_client();


private slots:
    void on_pushButton_confirm_clicked();

private:
    Ui::add_client *ui;
};

#endif // ADD_CLIENT_H
