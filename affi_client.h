#ifndef AFFI_CLIENT_H
#define AFFI_CLIENT_H

#include <QDialog>
#include"client.h"
namespace Ui {
class affi_client;
}

class affi_client : public QDialog
{
    Q_OBJECT

public:
    explicit affi_client(QWidget *parent = nullptr);
    ~affi_client();

private:
    Ui::affi_client *ui;
    client temp_client ;
};

#endif // AFFI_CLIENT_H
