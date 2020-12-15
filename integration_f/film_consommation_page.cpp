#include "film_consommation_page.h"
#include "ui_film_consommation_page.h"

film_consommation_page::film_consommation_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::film_consommation_page)
{
    ui->setupUi(this);
}

film_consommation_page::~film_consommation_page()
{
    delete ui;
}
