#ifndef ADMINISTRATEUR_ASSISTANT_PAGE_H
#define ADMINISTRATEUR_ASSISTANT_PAGE_H

#include<QSystemTrayIcon>
#include"administrateur.h"
#include"assistant.h"
#include "smtp.h"
#include <QPropertyAnimation>
#include<QString>
#include<QSqlQueryModel>
#include<QSqlQuery>
#include <QDialog>

namespace Ui {
class administrateur_assistant_page;
}

class administrateur_assistant_page : public QDialog
{
    Q_OBJECT

public:
    explicit administrateur_assistant_page(QWidget *parent = nullptr);
    ~administrateur_assistant_page();

/*private:
    Ui::administrateur_assistant_page *ui;*/

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
    Ui::administrateur_assistant_page *ui;
    ADMINISTRATEUR ad;
    ASSISTANT ass;
    QPropertyAnimation *animation;

};

#endif // ADMINISTRATEUR_ASSISTANT_PAGE_H
