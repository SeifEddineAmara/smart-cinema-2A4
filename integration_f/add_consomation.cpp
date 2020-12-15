#include "add_consomation.h"
#include "ui_add_consomation.h"

add_consomation::add_consomation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_consomation)
{
    ui->setupUi(this);
}

add_consomation::~add_consomation()
{
    delete ui;
}

QString add_consomation::id_cons() const {

    return ui->id_cons->text();

}

QString add_consomation::nom_cons() const {
    return ui->nom_cons->text();
}

double add_consomation::prix_cons() const {

    return ui->prix_cons->value();
}

int add_consomation::quantite_cons() const{

    return ui->quant_cons->value();
}

//configure ok and cancel
void add_consomation::on_buttonBox_accepted()
{
accept();
}

void add_consomation::on_buttonBox_rejected()
{
    reject();
}


void add_consomation::show_consomation( QString sel_cons) {
    QSqlQuery bery;
    bery.prepare("select * from CONSOMATION where ID='"+sel_cons+"'");
    bery.exec();
    while(bery.next()){
 ui->id_cons->setText(bery.value(0).toString());
  ui->nom_cons->setText(bery.value(1).toString());
   ui->prix_cons->setValue(bery.value(3).toReal());
    ui->quant_cons->setValue(bery.value(2).toInt());

    }

}
