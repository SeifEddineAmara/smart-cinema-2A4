#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "gcinema.h"
#include "gsalle.h"
#include <QMainWindow>



class QPrinter;
class QSqlTableModel;


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_ajouter_clicked();

    void on_pushButton_modifier_clicked();

    void on_pushButton_charger_clicked();

    void on_tableView_2_activated(const QModelIndex &index);

    void on_pushButton_supprimer_clicked();

    void on_pushButton_trier_clicked();

    void on_pushButton_rechercher_cinema_clicked();

    void on_pushButton_ajouter_salle_clicked();

    void on_pushButton_affichage_salle_clicked();

    void on_pushButton_modifier_salle_clicked();

    void on_pushButton_charger_salle_clicked();

    void on_tableView_affichage_list_salle_2_activated(const QModelIndex &index);

    void on_pushButton_supprimer_salle_clicked();

    void on_pushButton_rechercher_salle_clicked();

    void on_pushButton_2_clicked();

    void print(QPrinter *printer);

    void on_pushButton_load_reference_clicked();

public slots:

    void myfunction();
private:
    Ui::MainWindow *ui;
    gcinema tmpc;
    gsalle tmps;
    QSqlTableModel *model;
    QTimer *timer;

};

#endif // MAINWINDOW_H
