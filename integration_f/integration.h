#ifndef INTEGRATION_H
#define INTEGRATION_H
#include <QSqlQuery>
#include <QMainWindow>
#include "smtp.h"

#include "smartcinema.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Integration; }
QT_END_NAMESPACE

class Integration : public QMainWindow
{
    Q_OBJECT

public:
    Integration(QWidget *parent = nullptr);
    ~Integration();
    int verif=0;



private slots:
    void on_pushButton_login_clicked();

  /*  void on_pushButton_verifier_clicked();*/

private:
    Ui::Integration *ui;


};
#endif // INTEGRATION_H
