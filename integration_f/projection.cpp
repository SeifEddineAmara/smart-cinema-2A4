#include "projection.h"
#include"QDebug"

projection::projection()
{
    this->ID="" ;  this->id_film="" ; this->id_cine="" ;  this->id_salle="" ; this->time="" ;
}

projection::projection(QString id , QString id_film , QString id_cine , QString id_salle , QString time  )
{
    this->ID = id ;
    this->id_film=id_film ;
    this->id_cine = id_cine ;
    this->id_salle = id_salle ;
    this->time = time ;

}

QVector<QString> projection::search_films()
{
    QSqlQuery query ;
    QVector<QString> x ;
    QString string_x ;

    if(query.exec("SELECT * from film ") )
    {
        while(query.next() )
        {
            string_x.append(query.value(3).toString()) ;//id film
            string_x.append("-") ;
            string_x.append(query.value(0).toString()) ;//nom film

            x.push_back(string_x ) ;
            qDebug() << string_x ;
            string_x = "" ;

        }
    }

    return x;

}

QVector<QString> projection::search_cine()
{
    QSqlQuery query ;
    QVector<QString> x ;
    QString string_x ;

    if(query.exec("SELECT * from pcinema ") )
    {
        while(query.next() )
        {
            string_x.append(query.value(1).toString()) ;//id
            string_x.append("-") ;
            string_x.append(query.value(0).toString()) ;//nom

            x.push_back(string_x ) ;
            qDebug() << string_x ;
            string_x = "" ;

        }
    }

    return x;

}

QString projection::extract_cine( QString x  )
{
    QString string_cine_id = "";
    //int index=strchr(x , '-') ;
    /*int index = x.indexOf("-") ;
    for( int i=index+1 ; i<x.length() ; i ++  )
    {
        string_cine_name.append(x[i]) ;
    }
    */
    int i =  0 ;
    bool test = false ;

    while(i!=x.length() && test==false )
    {
        if(x[i]!='-' )
        {
            string_cine_id.append(x[i]) ;
        }
        else if (x[i]=='-' )
        {
            test= true ;
        }
        i++ ;
    }

    qDebug() << string_cine_id ;

    return string_cine_id;

}


QVector<QString> projection::search_salle(QString cine_id)
{
    QSqlQuery query ;
    QVector<QString> id_salles ;

    if(query.exec("SELECT * from sallee ") )
    {
        while(query.next() )
        {
            qDebug() << query.value(1) ;
            if(query.value(3).toString().compare(cine_id)==0 )
            {
                id_salles.append(query.value(0).toString());
            }

        }
    }


    return id_salles;

}





bool projection::ajout_projection()
{

    QSqlQuery query ;
    query.prepare("INSERT INTO projection (ID , ID_FILM, ID_CINE, ID_SALLE, TIME ) " "VALUES (:id,:id_film,:id_cine,:id_salle,:time )" );
    query.bindValue(":id", ID ) ;
    query.bindValue(":id_film" ,id_film ) ;
    query.bindValue(":id_cine" ,id_cine ) ;
    query.bindValue(":id_salle" ,id_salle ) ;
    query.bindValue(":time" ,time ) ;


    return query.exec() ;

}


QVector<QString> projection::get_projection()
{
    QString projec="" ;

    QSqlQuery query , query_film , query_cine  ;

    QVector<QString> x ;
    QString string_projection , id_filmm , id_cinee  ;

    query_film.prepare("SELECT * from film ");
    query_cine.prepare("SELECT * from pcinema ");

    if(query.exec("SELECT * from projection ") )
    {
        while(query.next() )
        {
            string_projection.append(query.value(0).toString()) ;
            string_projection.append("-") ;

            if(query_film.exec() )
            {
                while(query_film.next() )
                {
                    if(query_film.value(3).toString().compare(query.value(1).toString())==0 )
                    {
                        string_projection.append(query_film.value(0).toString() ) ;
                        string_projection.append("-") ;
                    }
                }
            }

            if(query_cine.exec() )
            {
                while(query_cine.next() )
                {
                    if(query_cine.value(1).toString().compare(query.value(2).toString())==0 )
                    {
                        string_projection.append(query_cine.value(0).toString() ) ;
                        string_projection.append("-") ;
                    }
                }
            }

            string_projection.append(query.value(3).toString()) ;
            string_projection.append("-") ;
            string_projection.append(query.value(4).toString()) ;

            x.push_back(string_projection ) ;
            qDebug() << string_projection ;
            string_projection = "" ;

        }
    }

    return x;
}


QString projection::extract_salle(QString id)
{
    QSqlQuery query ;
    QString id_salle ;
    bool test = false ;

    if(query.exec("SELECT * from projection ") )
    {
        while(query.next() && test==false)
        {
            if(query.value(0).toString().compare(id)==0 )
            {
                id_salle = query.value(3).toString() ;
                test = true ;
            }

        }
    }
    return id_salle;

}



QVector<QString> projection::extract_chaise(QString id_salle)
{
    QSqlQuery query ;
    QVector<QString> list_chaise ;

    if(query.exec("SELECT * from chaise ") )
    {
        while(query.next() )
        {
            if(query.value(2).toString().compare(id_salle)==0 )
            {
                list_chaise.push_back(query.value(0).toString() ) ;

            }

        }
    }


    return list_chaise;

}


bool projection::delete_projec(QString id)
{
    QSqlQuery query ;
    query.prepare("Delete from projection where ID = :id " ) ;
    query.bindValue(":id",id) ;
    return query.exec();


}

bool projection::update_proj(QString id, QString new_horaire)
{
    QSqlQuery query;

    query.prepare("UPDATE PROJECTION SET  ID = :id , TIME = :new_horaire WHERE ID = :id " );
    query.bindValue(":id", id);
    query.bindValue(":new_horaire", new_horaire);


    return query.exec();


}
















