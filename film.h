#ifndef FILM_H
#define FILM_H
#include"qstring.h"
#include"QString"
#include"QVector"
#include"QSqlQuery"
#include"QSqlQueryModel"

class film
{
private:
    QString id , name , type , cine ;


public:
    film();
    film(QString id , QString name , QString type , QString cine) ;
    QVector<QString> search_film();
    QVector<QString> search_cine();
    QVector<QString> string_to_vector(QString tab);



};

#endif // FILM_H
