#include "assistant.h"
#include <QMessageBox>
ASSISTANT::ASSISTANT()
{
 }

    bool ASSISTANT::ajouter()
    {
      QSqlQuery query;

            query.prepare("INSERT INTO ASSISTANT (NOM,PRENOM,MAIL,ID,NBRH) " "VALUES (:nom, :prenom, :mail, :id, :nbrh)");
            query.bindValue(":nom", nom);
            query.bindValue(":prenom", prenom);
            query.bindValue(":id", id);
            query.bindValue(":mail", mail);
             query.bindValue(":nbrh", nbrh);
            return query.exec();
    }
    QSqlQueryModel * ASSISTANT::afficher()
    {
        QSqlQueryModel * model= new QSqlQueryModel();

            model->setQuery("select * from ASSISTAANT ");
            model->setHeaderData(0, Qt::Horizontal, QObject::tr("NOM"));
            model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRENOM"));
            model->setHeaderData(2, Qt::Horizontal, QObject::tr("ID"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("MAIL"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("NBRH"));
             model->setQuery("SELECT NOM,PRENOM,ID,MAIL,NBRH FROM ASSISTANT ORDER BY NBRH ");
            return model;
    }
    bool ASSISTANT::supprimer(QString id)
    {
        QSqlQuery query;
        query.prepare("Delete from ASSISTANT where ID = :id ");
        query.bindValue(":id",id);
        return query.exec();
    }
    bool ASSISTANT::modifier()
    {

            QSqlQuery query;


            query.prepare("UPDATE ASSISTANT SET  NOM = :nom , PRENOM = :prenom ,  ID = :id , MAIL = :mail ,NBRH = :nbrh  WHERE ID = :id " );
            query.bindValue(":nom", nom);
            query.bindValue(":prenom", prenom);
            query.bindValue(":mail", mail);
             query.bindValue(":id", id);
             query.bindValue(":nbrh", nbrh);
            return query.exec();


    }
    QSqlQueryModel * ASSISTANT::recherche(QString id)
    {
        QSqlQueryModel * model= new QSqlQueryModel();

            model->setQuery("SELECT * FROM ASSISTANT WHERE ID LIKE '%"+id+"%'");
            model->query().bindValue(":id",id);
            model->setHeaderData(0, Qt::Horizontal, QObject::tr("NOM"));
            model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRENOM"));
            model->setHeaderData(2, Qt::Horizontal, QObject::tr("ID"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("MAIL"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("NBRH"));
            return model;

    }
    bool ASSISTANT::existance(QString id)
    {
        QMessageBox msgBox;
        QMessageBox msgBox1;
        bool test=0;
        QSqlQuery query;
        int count=0;
        query.prepare("SELECT * FROM assistant WHERE id= ?");
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


