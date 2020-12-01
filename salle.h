#ifndef SALLE_H
#define SALLE_H
#include"QString"
#include"QVector"
#include"QSqlQuery"
#include"QSqlQueryModel"
#include"film.h"
class salle
{
private:
    QString id , nbr_chaise , nbr_chaise_dispo , horaire , film , cine ;
public:
    salle();
    bool search_film(QString movie_name, QString movies);
    QVector<QString> string_to_vector(QString tab);
    int search_index(QVector<QString>tab , QString film );
};

#endif // SALLE_H
