#include "affi_client.h"
#include "ui_affi_client.h"
#include"client.h"



affi_client::affi_client(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::affi_client)
{
    ui->setupUi(this);
    ui->tab_affi_client->setModel(temp_client.afficher()) ;
}

affi_client::~affi_client()
{
    delete ui;
    client temp_client ;
}



