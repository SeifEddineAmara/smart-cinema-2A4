#ifndef GCINEMA_H
#define GCINEMA_H

#include <QString>

#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtCharts/QChartView>

class gcinema
{

private:

    QString nom;
    QString reference;
    QString nombre_salle;
    QString datec;
    QString destination;

public:

    gcinema();
    gcinema(QString,QString,QString,QString,QString);

    QString get_nom();
    QString get_reference();
    QString get_nombre_salle();
    QString get_date();
    QString get_destination();

    bool ajouter();
    bool supprimer(QString);

    bool modifier(QString,QString,QString,QString,QString);

    QSqlQueryModel * afficher();
    QSqlQueryModel* rechercher(QString reff);
    QSqlQueryModel* rechercher_3(QString reff,QString nomm,QString dest);





};
#endif // GCINEMA_H
