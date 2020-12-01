#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSortFilterProxyModel>
#include <QTextTableFormat>
#include <QStandardItemModel>
#include <QDialog>
#include <QFileDialog>

#include "connexion.h"
#include "film.h"
#include "consomation.h"
#include "smtp.h"
#include "exportexcelobject.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void show_tables();

    QSortFilterProxyModel *proxy_film,*proxy_cons;
    QString sel_cons="consomation", sel_film="film";
     film tmp_film;
consomation tmp_cons;


private slots:
    void on_actionadd_film_triggered();

    void on_actionremove_film_triggered();

    void on_actionadd_consomation_triggered();

    void on_actionremove_consomation_triggered();

    void on_tab_film_clicked(const QModelIndex &index);

    void on_tab_cons_clicked(const QModelIndex &index);

    void on_tab_film_doubleClicked();

    void on_tab_cons_doubleClicked();

    void on_recherche_cons_textChanged(const QString &arg1);

    void on_recherche_film_textChanged(const QString &arg1);

    void sendMail();
    void mailSent(QString);
    void browse();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QStringList files;



};
#endif // MAINWINDOW_H
