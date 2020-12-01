#include "ticket.h"
#include"qdebug.h"
#include"QMessageBox"
ticket::ticket()
{

    this->ID = ""  ;
    this->chaise="" ;
    this->cine = "" ;
    this->consommation = "" ;
    this->film = "" ;
    this->horaire = "" ;
    this->price = "" ;
    this->salle = "" ;
    this->type = "" ;
}

ticket::ticket(QString ID ,QString price ,
         QString type , QString cine ,QString  salle ,
         QString chaise ,QString film ,QString horaire ,QString consommation  )
{
    this->ID =  ID ;
    this->chaise=chaise ;
    this->cine = cine ;
    this->consommation = consommation ;
    this->film = film ;
    this->horaire = horaire ;
    this->price = price ;
    this->salle = salle ;
    this->type = type ;

}

bool ticket::add_ticket()
{
    QSqlQuery query ;
    query.prepare("INSERT INTO ticket (ID , PRICE, TYPE, CINEMA, SALLE ,CHAISE, FILM,HORAIRE,CONSOMMATION ) "
                  "VALUES (:id,:price,:type,:cinema,:salle,:chaise,:film,:horaire,:consommation )" );
    query.bindValue(":id", ID ) ;
    query.bindValue(":price" ,price ) ;
    query.bindValue(":type" ,type ) ;
    query.bindValue(":cinema" ,cine ) ;
    query.bindValue(":salle" ,salle ) ;
    query.bindValue(":chaise" ,chaise ) ;
    query.bindValue(":film" ,film ) ;
    query.bindValue(":horaire" ,horaire ) ;
    query.bindValue(":consommation" ,consommation ) ;

    return query.exec();

}
bool ticket::delete_ticket(QString id)
{
    QSqlQuery query ;
    query.prepare("Delete from ticket where ID = :id " ) ;
    query.bindValue(":id",id) ;
    return query.exec();


}

QString ticket::gest_prix(QString price , QString food_consumption)
{
    QString price_without_dt = "" ;
    price_without_dt.append(price[0]) ;
    price_without_dt.append(price[1]) ;

    int price_int =  price_without_dt.toInt();
    qDebug() << price_int  ;
    QString final_price ;

    if(food_consumption.compare("juices     : 2dt")== 0 )
    {
        price_int +=2 ;

    }
    else if  (food_consumption.compare("chips      : 1dt")== 0 )
    {
        price_int +=1 ;

    }
    else if  (food_consumption.compare("soda       : 3dt")== 0 )
    {
        price_int +=3 ;

    }
    else if  (food_consumption.compare("chocolate  : 4dt")== 0 )
    {
        price_int +=4 ;

    }
    else if  (food_consumption.compare("pas de consommation")== 0 )
    {
        final_price = price ;

    }

    final_price = QString::number(price_int) ;

    return final_price;


}



bool ticket::search_ticket(QString id)
{
    QSqlQuery query ;
    bool test=false ;
    if( query.exec("SELECT * from ticket ") )
    {
        while(query.next() && test==false )
        {
            if(query.value(0) == id )
            {
                test = true ;
            }
        }
    }

    return test;
}

void ticket::update_ticket(QString id ,QString cons , QString type , QString price  )
{
    QSqlQuery query;

    query.prepare("UPDATE ticket set CONSOMMATION='"+cons +" ', TYPE='"+type+"', PRICE='"+price+"' where ID='"+id+"' ");


       if(query.exec())
                  {
                  QMessageBox msgBox;
                  msgBox.setText("ticket modifié");
                  msgBox.exec();
                  }






}
















