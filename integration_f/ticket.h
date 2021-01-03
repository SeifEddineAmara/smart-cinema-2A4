#ifndef TICKET_H
#define TICKET_H

#include"QString"
#include<QSqlQuery>
#include<QSqlQueryModel>
class ticket
{
private:
    QString ID , price ,type , chaise , projection ,  consommation,id_client ;
public:
    ticket();
    ticket(QString ID ,QString price ,
           QString type ,
           QString chaise ,QString consommation , QString projection,QString id_client  ) ;
    bool add_ticket() ;
    bool delete_ticket(QString id) ;
    QString gest_prix(QString price,QString id_consommation) ;
    bool search_ticket(QString id) ;
    void update_ticket(QString id ,QString type  , QString id_consommation ) ;
    QString get_type() ;
    QVector<QString> search_client();
    QVector<QString> search_consommation();

};

#endif // TICKET_H
