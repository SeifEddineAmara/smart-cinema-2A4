#include "add_film.h"
#include "ui_add_film.h"



addfilm::addfilm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addfilm)
{
    ui->setupUi(this);
}

addfilm::~addfilm()
{
    delete ui;
}

QString addfilm::id_film() const {
    return ui->id_film->text();
}

QString addfilm::nom_film() const {
    return ui->nom_film->text();
}

QString addfilm::type_film() const {

    return ui->type_film->currentText();
}

int addfilm::duree_film() const{

    return ui->duree_film->value();
}

//configure ok and cancel
void addfilm::on_buttonBox_accepted()
{
accept();
}

void addfilm::on_buttonBox_rejected()
{
    reject();
}

void addfilm::show_film( QString sel_film) {
    QSqlQuery bery;
    bery.prepare("select * from FILM where ID='"+sel_film+"'");
    bery.exec();
    while(bery.next()){
 ui->id_film->setText(bery.value(3).toString());
  ui->nom_film->setText(bery.value(0).toString());
   ui->type_film->setCurrentText(bery.value(1).toString());
    ui->duree_film->setValue(bery.value(2).toInt());

    }

}
