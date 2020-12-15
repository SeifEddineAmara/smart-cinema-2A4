 #include "ajouter_adminstrateur.h"
#include "ui_ajouter_adminstrateur.h"

ajouter_adminstrateur::ajouter_adminstrateur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajouter_adminstrateur)
{
    ui->setupUi(this);
}

ajouter_adminstrateur::~ajouter_adminstrateur()
{
    delete ui;
}
