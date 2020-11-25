#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"add_client.h"
#include"gest_client.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_nextt_clicked()
{
    gest_client x ;
    hide() ;
    x.show() ;
    x.exec() ;

}
