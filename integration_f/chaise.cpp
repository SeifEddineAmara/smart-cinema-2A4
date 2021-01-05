#include "chaise.h"

CHAISE::CHAISE()
{

}


bool CHAISE::ajouter()
{
  QSqlQuery query;

        query.prepare("INSERT INTO CHAISE (NUMERO,TYPE,ID_SALLE) " "VALUES (:numero, :type, :id_salle)");
        query.bindValue(":numero", numero);
        query.bindValue(":type", type);
        query.bindValue(":id_salle", id_salle);



        return query.exec();
}
QSqlQueryModel * CHAISE::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();

        model->setQuery("select * from CHAISE ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMERO"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPE"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("ID_salle"));

         model->setQuery("SELECT * FROM CHAISE ORDER BY NUMERO  ");
        return model;
}
bool CHAISE::supprimer(QString numero )
{
    QSqlQuery query;
    query.prepare("Delete from CHAISE where NUMERO = :numero ");
    query.bindValue(":numero",numero);
    return query.exec();
}
bool CHAISE::modifier(QString numero)
{

        QSqlQuery query;


        query.prepare("UPDATE CHAISE SET  NUMERO = :numero , TYPE = :type WHERE NUMERO = :numero " );
        query.bindValue(":numero", numero);
        query.bindValue(":type", type);


        return query.exec();


}
QSqlQueryModel * CHAISE::recherche(QString numero)
{
    QSqlQueryModel * model= new QSqlQueryModel();

        model->setQuery("SELECT * FROM CHAISE WHERE NUMERO LIKE '%"+numero+"%'");
        model->query().bindValue(":numero",numero);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMERO"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPE"));

        return model;
}

