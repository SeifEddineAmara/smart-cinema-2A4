#ifndef TICKET_H
#define TICKET_H
#include"QString"
#include<QSqlQuery>
#include<QSqlQueryModel>
class ticket
{
private:
    QString ID , price ,type , cine , salle , chaise , film , horaire , consommation ;
public:
    ticket();
    ticket(QString ID ,QString price ,
           QString type , QString cine ,QString  salle ,
           QString chaise ,QString film ,QString horaire ,QString consommation  ) ;
    bool add_ticket() ;
    bool delete_ticket(QString id) ;
    QString gest_prix(QString price,QString food_consumption) ;
    bool search_ticket(QString id) ;
    void update_ticket(QString id ,QString cons , QString type , QString price  ) ;
};

#endif // TICKET_H
















