#ifndef CLIENT_H
#define CLIENT_H


#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>



class client
{
private:
    QString ID , age , numero  ;
    QString name , las_name , mail   ;


public:
    client();
    client(QString ID , QString age ,QString numero , QString name , QString las_name , QString mail   ) ;
    bool add_client() ;
    void view_data() ;
    QSqlQueryModel *afficher() ;
    bool delete_client(QString id  ) ;
    void edit_client(QString id ) ;
    bool search_client(QString id , client *c ) ;
    QString get_name() ;
    QString get_lastname() ;
    QString get_number() ;
    QString get_id() ;
    QString get_age() ;
    QString get_mail() ;
    QSqlQueryModel * trier(QString xtype);
    bool search_client_view(QString id ,QSqlQueryModel *model , QString xname  ) ;




};
#endif // CLIENT_H
