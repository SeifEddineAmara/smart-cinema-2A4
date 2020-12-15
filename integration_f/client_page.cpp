#include "client_page.h"
#include "ui_client_page.h"

client_page::client_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::client_page)
{
    ui->setupUi(this);
}

client_page::~client_page()
{
    delete ui;
}
