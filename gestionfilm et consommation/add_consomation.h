#ifndef ADD_CONSOMATION_H
#define ADD_CONSOMATION_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class add_consomation;
}

class add_consomation : public QDialog
{
    Q_OBJECT

public:
    explicit add_consomation(QWidget *parent = nullptr);
    ~add_consomation();

    QString id_cons() const ;
     QString nom_cons() const ;
      double prix_cons() const;
       int quantite_cons() const ;
        void show_consomation( QString);

private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();

private:
    Ui::add_consomation *ui;
};

#endif // ADD_CONSOMATION_H
