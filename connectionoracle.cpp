#include "connectionoracle.h"

connectionoracle::connectionoracle()
{

}
bool connectionoracle::createconnect()
{
bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("source_Project2A");//inserer le nom de la source de données ODBC
db.setUserName("abdelkader");//inserer nom de l'utilisateur
db.setPassword("0000");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}
