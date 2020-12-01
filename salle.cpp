#include "salle.h"
#include"QString"
#include"QVector"

salle::salle()
{

}
QVector<QString> salle::string_to_vector(QString tab)
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

bool salle::search_film(QString movie_name , QString movies)
{

    bool x = false ;
    salle s ;
    int i ;
    QVector<QString> names = s.string_to_vector(movies) ;
    for( i =0 ; i < names.size() ; i++  )
    {
        if(movie_name.compare(names[i]) == 0 )
        {
            x = true ;
        }

    }

    return x ;
}




int salle::search_index(QVector<QString>tab , QString film )
{
    int  i=0 ;
    int index =-1 ;
    for ( i = 0; i < tab.size(); i++)
    {
        if (tab[i].compare(film)==0)
        {
            index = i ;
        }
    }
    return index ;
}

















