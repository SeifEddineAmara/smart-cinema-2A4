#include "producteur.h"

PRODUCTEUR::PRODUCTEUR()
{

}


bool PRODUCTEUR::ajouter()
{
  QSqlQuery query;

        query.prepare("INSERT INTO PRODUCTEUR (NOM,PRENOM,ID,EMAIL,TELF,ADRESS) " "VALUES (:nom, :prenom, :id,:email, :telf , :adress)");
        query.bindValue(":nom", nom);
        query.bindValue(":prenom", prenom);
        query.bindValue(":id", id);
        query.bindValue(":email", email);
        query.bindValue(":telf", telf);
        query.bindValue(":adress", adress);
        return query.exec();
}
QSqlQueryModel * PRODUCTEUR::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();

        model->setQuery("select * from PRODUCTEUR ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("NOM"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRENOM"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("ID"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("EMAIL"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("TELF"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("ADRESS"));
         model->setQuery("SELECT NOM,PRENOM,ID,EMAIL,TELF,ADRESS FROM PRODUCTEUR ORDER BY NOM  ");
        return model;
}
bool PRODUCTEUR::supprimer(QString id)
{
    QSqlQuery query;
    query.prepare("Delete from PRODUCTEUR where ID = :id ");/*recherche ID = id */
    query.bindValue(":id",id);
    return query.exec();
}
bool PRODUCTEUR::modifier(QString id)
{

        QSqlQuery query;


        query.prepare("UPDATE PRODUCTEUR SET  NOM = :nom , PRENOM = :prenom ,  ID = :id , EMAIL = :email , TELF = :telf , ADRESS = :adress  WHERE ID = :id " );
        query.bindValue(":nom", nom);
        query.bindValue(":prenom", prenom);
        query.bindValue(":email", email);
         query.bindValue(":id", id);
          query.bindValue(":email", email);
           query.bindValue(":telf", telf);
            query.bindValue(":adress", adress);

        return query.exec();

}
QSqlQueryModel * PRODUCTEUR::recherche(QString id)/*cherche un producteur de meme id*/
{
    QSqlQueryModel * model= new QSqlQueryModel();

        model->setQuery("SELECT * FROM PRODUCTEUR WHERE ID LIKE '%"+id+"%'");
        //model->query().bindValue(":id",id);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("NOM"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRENOM"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("ID"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("EMAIL"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("TELF"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("ADRESS"));
        return model;
}
