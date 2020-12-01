#ifndef CLIENT_H
#define CLIENT_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>



class client
{
private:
    QString ID , age , numero  ;
    QString name , las_name , mail ,type  ;


public:
    client();
    client(QString ID , QString age ,QString numero , QString name , QString las_name , QString mail , QString type   ) ;
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
    QString get_type() ;
    QString get_mail() ;
    QSqlQueryModel * trier();
    bool search_client_view(QString id ,QSqlQueryModel *model  ) ;




};

#endif // CLIENT_H
