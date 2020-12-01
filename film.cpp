#include "film.h"
#include"QString"
#include"QVector"
#include"QDebug"
film::film()
{
    this->id = "" ;
    this->cine = "" ;
    this->name="" ;
    this->type ="" ;

}

QVector<QString> film::search_film()
{
      QSqlQuery query ;
      QVector<QString> x ;

      if(query.exec("SELECT * from film ") )
      {
          while(query.next() )
          {
              x.push_back(query.value(1).toString() ) ;
              qDebug() << query.value(1) ;

          }
      }

      return x;

}


QVector<QString> film::string_to_vector(QString tab)
{
    int j = 0 ;
    QVector<QString> x ;
    int i=0 ;
    QString word="" ;
    while (i!=tab.length() )
    {

        if (tab[i] != ';')
        {

            word.push_back(tab[i]) ;
            i ++ ;
        }
        else if (tab[i] ==';' )
        {
            x.push_back(word) ;
            i ++ ;
            word="" ;

        }

    }

    return x ;
}




QVector<QString> film::search_cine()
{
    QSqlQuery query ;
    QVector<QString> x ;
    QString cinemas ;
    film f ;

    if(query.exec("SELECT * from film ") )
    {
        while(query.next() )
        {
            cinemas.append(query.value(3).toString() ) ;

        }
    }

    x=f.string_to_vector(cinemas) ;

    return x;
}


film::film(QString id , QString name , QString type , QString cine)
{
    this->id = id ;
    this->cine = cine ;
    this->name = name ;
    this->type = type ;
}



