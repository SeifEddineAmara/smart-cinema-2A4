#ifndef FILM_H
#define FILM_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>


class film
{
public:
    film();
film(QString,QString,QString,int);


bool ajouter();
 QSqlQueryModel * afficher();
  bool supprimer(QString);



    QString id_film,nom_film,type_film;
    int duree_film;
};

#endif // FILM_H
