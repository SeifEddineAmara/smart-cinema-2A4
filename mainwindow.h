#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QSystemTrayIcon>
#include"administrateur.h"
#include"assistant.h"
#include "smtp.h"
#include <QPropertyAnimation>
#include<QString>
#include<QSqlQueryModel>
#include<QSqlQuery>


#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_ajouter_administrateur_clicked();

    void on_modifieradmin_clicked();

    void on_supprimeradmin_clicked();

    void on_afficheradmin_clicked();

    void on_ajouterassis_clicked();

    void on_modifierasis_clicked();

    void on_supprimerassis_clicked();

    void on_afficherassis_clicked();

    void on_rechercherassistant_clicked();

    void on_idrecherche_cursorPositionChanged(int arg1, int arg2);

    void on_imprimeradmin_clicked();

    void on_PDF_clicked();
    void mailSent(QString status);
    void sendMail();


    void on_email_clicked();

    void on_envoyer_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    ADMINISTRATEUR ad;
    ASSISTANT ass;
    QPropertyAnimation *animation;

};
#endif // MAINWINDOW_H
