#ifndef ADDFILM_H
#define ADDFILM_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class addfilm;
}

class addfilm : public QDialog
{
    Q_OBJECT

public:
    explicit addfilm(QWidget *parent = nullptr);
    ~addfilm();

    QString id_film() const ;
     QString nom_film() const ;
      QString type_film() const;
       int duree_film() const ;
       void show_film( QString);

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::addfilm *ui;
};

#endif // ADDFILM_H
