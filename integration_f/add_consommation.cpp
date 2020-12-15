#include "add_consommation.h"
#include "ui_add_consommation.h"

add_consommation::add_consommation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_consommation)
{
    ui->setupUi(this);
}

add_consommation::~add_consommation()
{
    delete ui;
}
