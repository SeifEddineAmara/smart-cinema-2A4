#include "ticket.h"

#include"qdebug.h"
#include"QMessageBox"

ticket::ticket()
{

    this->ID = ""  ;
    this->chaise="" ;
    this->projection= "" ;
    this->consommation = "" ;
    this->price = "" ;
    this->type = "" ;
    this->id_client="";
}

ticket::ticket(QString ID ,QString price ,
       QString type ,
       QString chaise ,QString consommation , QString projection,QString id_client  )
{
    this->ID =  ID ;
    this->chaise=chaise ;
    this->projection= projection ;
    this->consommation = consommation ;
    this->price = price ;
    this->type = type ;
    this->id_client=id_client;


}

bool ticket::add_ticket()
{
    QSqlQuery query ;
    query.prepare("INSERT INTO ticket (ID , PRICE, TYPE, ID_CHAISE,CONSOMMATION,ID_PROJEC,ID_CLIENT ) "
                  "VALUES (:id,:price,:type,:id_chaise,:consommation,:id_projec,:id_client )" );

    query.bindValue(":id", ID ) ;
    query.bindValue(":price" ,price ) ;
    query.bindValue(":type" ,type ) ;
    query.bindValue(":id_chaise" ,chaise ) ;
    query.bindValue(":consommation" ,consommation ) ;
    query.bindValue(":id_projec" ,projection ) ;
    query.bindValue(":id_client" ,id_client ) ;


    return query.exec();

}
bool ticket::delete_ticket(QString id)
{
    QSqlQuery query ;
    query.prepare("Delete from ticket where ID = :id " ) ;
    query.bindValue(":id",id) ;
    return query.exec();


}

QString ticket::gest_prix(QString price , QString id_consommation)
{
    QString price_without_dt = "" ;
    price_without_dt.append(price[0]) ;
    price_without_dt.append(price[1]) ;
    int price_int =  price_without_dt.toInt();
    qDebug() << price_int  ;
    QString final_price ;

    QSqlQuery query ; QString prix_conso ;

    if(query.exec("SELECT * from CONSOMATION ") )
    {
        while(query.next() )
        {
            if(query.value(0).toString().compare(id_consommation)==0)
            {
                prix_conso = query.value(3).toString() ;
            }

        }
    }

    price_int += prix_conso.toInt() ;


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

QString ticket::get_type(){return type; }




void ticket::update_ticket(QString id , QString type ,QString id_consommation )
{
    QSqlQuery query;
    QString price ;

    if(type.compare("etudiant")==0 )
    {
        price="10dt" ;
    }
    else if (type.compare("normal") == 0 )
    {

        price="17dt" ;
    }
    else if (type.compare("client fidele") == 0 )
    {

        price="15dt" ;
    }

    QString new_price =  gest_prix( price,  id_consommation) ;

    query.prepare("UPDATE ticket set  TYPE='"+type+"',CONSOMMATION='"+id_consommation+"',PRICE='"+new_price+"' where ID='"+id+"' ");


       if(query.exec())
                  {
                  QMessageBox msgBox;
                  msgBox.setText("ticket modifié");
                  msgBox.exec();
                  }

}




QVector<QString> ticket::search_client()
{
    QSqlQuery query ;
    QVector<QString> id_clients ;

    if(query.exec("SELECT * from client ") )
    {
        while(query.next() )
        {
                id_clients.append(query.value(0).toString());

        }
    }


    return id_clients;

}

QVector<QString> ticket::search_consommation()
{
    QSqlQuery query ;
    QVector<QString> id_consommation ;

    if(query.exec("SELECT * from CONSOMATION ") )
    {
        while(query.next() )
        {
                id_consommation.append(query.value(0).toString());

        }
    }


    return id_consommation;
}






