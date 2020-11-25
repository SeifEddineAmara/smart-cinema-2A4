#include "salle_page.h"
#include "ui_salle_page.h"



salle_page::salle_page(QWidget *parent) :

    QDialog(parent),
    ui(new Ui::salle_page)
{
    ui->setupUi(this);
}

salle_page::~salle_page()
{
    delete ui;
}




void salle_page::on_pushButton_clicked()
{
    this->hide();
    QWidget *parent=this->parentWidget();
    parent->show();
    parent->show();
}
