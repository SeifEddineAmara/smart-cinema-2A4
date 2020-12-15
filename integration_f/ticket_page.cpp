#include "ticket_page.h"
#include "ui_ticket_page.h"

ticket_page::ticket_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ticket_page)
{
    ui->setupUi(this);
}

ticket_page::~ticket_page()
{
    delete ui;
}
