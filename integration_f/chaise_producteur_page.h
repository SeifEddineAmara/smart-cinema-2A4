#ifndef CHAISE_PRODUCTEUR_PAGE_H
#define CHAISE_PRODUCTEUR_PAGE_H


#include <QMainWindow>
#include "producteur.h"
#include "chaise.h"
#include <QMessageBox>
#include <QSystemTrayIcon>


#include "verification_administrateur.h"



#include <iostream>

#include <QMessageBox>

#include  <QDebug>

#include <QRadioButton>

#include<QtPrintSupport/QPrinter>

#include<QPdfWriter>

#include <QPainter>

#include<QFileDialog>

#include<QTextDocument>

#include <QTextEdit>

#include <QtSql/QSqlQueryModel>

#include<QtPrintSupport/QPrinter>

#include <QVector2D>

#include <QVector>

#include <QSqlQuery>

#include<QDesktopServices>

#include <QMessageBox>

#include<QUrl>

#include <QPixmap>

#include <QTabWidget>

#include <QValidator>

#include <QPrintDialog>

#include<QtSql/QSqlQuery>

#include<QVariant>

#include <QDialog>

namespace Ui {
class chaise_producteur_page;
}

class chaise_producteur_page : public QDialog
{
    Q_OBJECT

public:
    explicit chaise_producteur_page(QWidget *parent = nullptr);
    ~chaise_producteur_page();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_lineEdit_15_textChanged(const QString &arg1);

    void on_pushButton_2_clicked();

    void on_lineEdit_10_textChanged(const QString &arg1);

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_lineEdit_18_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_lineEdit_20_textChanged(const QString &arg1);




private:
    Ui::chaise_producteur_page *ui;
    PRODUCTEUR tmpproducteur;/*definition du tableau de l affichage*/
    CHAISE tmpchaise;
    verification_administrateur   *vad;

};

#endif // CHAISE_PRODUCTEUR_PAGE_H
