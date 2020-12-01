#include "welcome_window.h"
#include "ui_welcome_window.h"

welcome_window::welcome_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::welcome_window)
{
    ui->setupUi(this);
}

welcome_window::~welcome_window()
{
    delete ui;
}

void welcome_window::on_pushButton_2_clicked()
{

}
