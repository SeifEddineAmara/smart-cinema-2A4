#include "addfilm.h"
#include "ui_addfilm.h"

addfilm::addfilm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addfilm)
{
    ui->setupUi(this);

    ui->nom_film->setValidator(new QRegExpValidator( QRegExp("[A-Za-z0_]{0,255}"), this ));

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

void addfilm::on_pushButton_clicked()
{
    ui->label_5->setText("Name :");
    ui->label_6->setText("Duration(min) :");
    ui->label_4->setText("Movie :");



}
