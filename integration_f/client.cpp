#include "client.h"

#include"QDebug"
#include"QMessageBox"

client::client()
{
    ID = "" ;
    age = "" ;
    numero = "" ;
    name = "" ;
    las_name = "" ;
    mail = "" ;

}

QString client::get_name(){return name; } ;
QString client::get_lastname(){return las_name; } ;
QString client::get_number(){return numero; } ;
QString client::get_id(){return ID; } ;
QString client::get_age(){return age; } ;
QString client::get_mail(){return mail; } ;


client::client(QString ID , QString age ,QString numero , QString name , QString las_name , QString mail    )
{
    this->ID = ID ;
    this->age = age ;
    this->numero = numero ;
    this->name = name ;
    this->las_name = las_name ;
    this->mail = mail ;

}

bool client::add_client()
{
    QSqlQuery query ;
    query.prepare("INSERT INTO client (ID , AGE, LAS_NAME, NAME, MAIL ,NUMERO ) " "VALUES (:id,:age,:las_name,:name,:mail,:numero )" );
    query.bindValue(":id", ID ) ;
    query.bindValue(":name" ,name ) ;
    query.bindValue(":las_name" ,las_name ) ;
    query.bindValue(":age" ,age ) ;
    query.bindValue(":mail" ,mail ) ;
    query.bindValue(":numero" ,numero ) ;

    return query.exec() ;
}

QSqlQueryModel * client::afficher()
{

    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from client");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("age "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("last name"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("name"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("mail"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("numero"));

    return model;
}


bool client::delete_client(QString id )
{
    QSqlQuery query ;

    query.prepare("Delete from client where ID = :id " ) ;
    query.bindValue(":id",id) ;
    return query.exec();
}

/*
void client::edit_client(QString id)
{

    bool test=false;
    client c ;
    test=c.search_client(id , &c) ;
    if (test == false )
    {
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("sorry this client doesn't exist.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else
    {


    }



}
*/




bool client::search_client(QString id, client *c )
{
    QSqlQuery query ;
    bool test=false ;
    if( query.exec("SELECT * from client ") )
    {
        while(query.next() && test==false )
        {
            if(query.value(0) == id  )
            {
                test = true ;

                // query.value(0) ; //id
                //query.value(1) ; //age
        //        qDebug() << query.value(2) ; //last name
          //      qDebug() << query.value(3) ; // type
            //    qDebug() << query.value(4) ; //name
            //    qDebug() << query.value(5) ;//mail
              //  qDebug() << query.value(6) ;//numero
               // client c(id ,age ,numero ,nom ,last_name ,mail , type) ;
                client x(query.value(0).toString(),
                         query.value(1).toString() ,
                         query.value(5).toString() ,
                         query.value(3).toString(),
                         query.value(2).toString(),
                         query.value(4).toString() );
//  (QString ID , QString age ,QString numero , QString name , QString las_name , QString mail
                (*c) = x ;
            }
        }
    }

    return test;

}

void client::view_data()
{
    qDebug() << " id : "<< ID ;
    qDebug() << " name : "<< name ;
    qDebug() << " last name : "<< las_name ;
    qDebug() << " numero : "<< numero ;
    qDebug() << " mail : "<< mail ;
    qDebug() << " age : "<< age ;


}


QSqlQueryModel * client::trier(QString xtype )

{

     QSqlQueryModel *model=new QSqlQueryModel() ;

     QSqlQuery query ;
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("age "));
     if (xtype.compare("name")==0 )
     {
     query.prepare("SELECT *  FROM client ORDER BY NAME ASC ") ;
     }
     else if (xtype.compare("prenom")==0)
     {

         query.prepare("SELECT *  FROM client ORDER BY LAS_NAME ASC ") ;
     }



     if (query.exec()&&query.next())

     {

         model->setQuery(query) ;

     }

     return model;
}

bool client::search_client_view(QString id ,QSqlQueryModel *model  , QString xname  )
{
    QSqlQuery query ;
    bool test=false ;
    query.prepare("SELECT * from client where ID = :id  ");
    query.bindValue(":id", id);




    if( query.exec() )
    {
        while(query.next() && test==false )
        {
            if(query.value(0) == id && query.value(3).toString().compare(xname)==0 )
            {
                test = true ;
                model->setQuery(query) ;
                query.value(1) = "testt" ;
            }
        }
    }

    return test;

}


