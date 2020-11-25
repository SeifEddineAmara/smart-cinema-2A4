#include "connection.h"

Connection::Connection()
{

}

bool Connection::creatconnect()
{bool test;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Gestionsmartcinema");
/*test_qtGestionsmartcinema*/
db.setUserName("omar");//inserer nom de l'utilisateur
db.setPassword("1234");//inserer mot de passe de cet utilisateur

if (db.open())

test=true;

else

 test=false;



    return  test;
}
