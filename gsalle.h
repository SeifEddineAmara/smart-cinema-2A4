#ifndef GSALLE_H
#define GSALLE_H

#include <QString>

#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtCharts/QChartView>

class gsalle
{

private:

    QString numero;
    QString nombre_de_place;
    QString nombre_de_place_disponible;
    QString ref_cinema;

public:

    gsalle();
    gsalle(QString,QString,QString,QString);

    QString get_numero();
    QString get_nombre_place();
    QString get_nombre_de_place_disponible();
    QString get_ref_cinema();


    bool ajouter();
    bool supprimer(QString);

    bool modifier(QString,QString,QString,QString);

    QSqlQueryModel * afficher();
    QSqlQueryModel* rechercher(QString reff);
    QSqlQueryModel* rechercher_3(QString num,QString nb,QString reff);





};
#endif // GSALLE_H
