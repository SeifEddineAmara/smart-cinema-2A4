#include "administrateur.h"
#include <QMessageBox>
ADMINISTRATEUR::ADMINISTRATEUR()
{
}

bool ADMINISTRATEUR::ajouter()
{
  QSqlQuery query;

        query.prepare("INSERT INTO ADMINISTRATEUR (NOM,PRENOM,MAIL,ID) " "VALUES (:nom, :prenom, :mail, :id)");
        query.bindValue(":nom", nom);
        query.bindValue(":prenom", prenom);
        query.bindValue(":mail", mail);
        query.bindValue(":id", id);
        return query.exec();
}
QSqlQueryModel * ADMINISTRATEUR::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();

        model->setQuery("select * from ADMINISTRATEUR ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("NOM"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRENOM"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("ID"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("MAIL"));
         model->setQuery("SELECT NOM,PRENOM,ID,MAIL FROM ADMINISTRATEUR ORDER BY NOM  ");
        return model;
}
bool ADMINISTRATEUR::supprimer(QString id)
{
    QSqlQuery query;
    query.prepare("Delete from ADMINISTRATEUR where ID = :id ");
    query.bindValue(":id",id);
    return query.exec();
}
bool ADMINISTRATEUR::modifier()
{

        QSqlQuery query;


        query.prepare("UPDATE ADMINISTRATEUR SET  NOM = :nom , PRENOM = :prenom , MAIL = :mail, ID = :id   WHERE ID = :id " );
        query.bindValue(":nom", nom);
        query.bindValue(":prenom", prenom);
        query.bindValue(":mail", mail);
         query.bindValue(":id", id);

        return query.exec();


}
QSqlQueryModel * ADMINISTRATEUR::recherche(QString id)
{
    QSqlQueryModel * model= new QSqlQueryModel();

        model->setQuery("SELECT * FROM ADMINISTRATEUR WHERE ID LIKE '%"+id+"%'");
        model->query().bindValue(":id",id);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("NOM"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRENOM"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("ID"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("MAIL"));
        return model;

}
bool ADMINISTRATEUR::existance(QString id)
{
    QMessageBox msgBox;
    QMessageBox msgBox1;
    bool test=0;
    QSqlQuery query;
    int count=0;
    query.prepare("SELECT * FROM administrateur WHERE id= ?");
    query.addBindValue(id);
    if(query.exec() )
    {
while (query.next())
   {
   count ++;
   }
if(count==1)
   {
    msgBox.setText("id deja existe");
    msgBox.exec();
    test=0;
   }

else if (count<1)
{
    msgBox1.setText("id disponible");
        msgBox1.exec();
        test=1;
}

    }

    return test;
}
