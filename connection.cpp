#include "connection.h"

connection::connection()
{

}


bool connection::create_connect()
{
    bool test=false;
   // printf("ggaaaaaa ");
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("ahmed123");//inserer le nom de la source de données ODBC
    db.setUserName("ahmed");//inserer nom de l'utilisateur
    db.setPassword("ahmed");//inserer mot de passe de cet utilisateur

    if (db.open())
    {
        test=true;

    }
    return  test;
}


