#include "film.h"

film::film()
{

}


film::film(QString id,QString nom,QString type,int duree)
{
  this->id_film=id;
  this->nom_film=nom;
  this->type_film=type;
  this->duree_film=duree;

}

bool film::ajouter()
{

QSqlQuery query;


query.prepare("INSERT INTO FILM (NOM, TYPE, DUREE,ID) "
                    "VALUES (:nom, :type, :duree,:id)");
query.bindValue(":id", id_film);
query.bindValue(":duree",duree_film);//remplir idfilm dans :id dune maniere securise
query.bindValue(":type", type_film);
query.bindValue(":nom", nom_film);

return    query.exec();
}

QSqlQueryModel * film::afficher()
{

    QSqlQueryModel * modal=new QSqlQueryModel();
    modal->setQuery("SELECT ID,NOM,TYPE,DUREE FROM FILM");

    return modal;

}


bool film::supprimer(QString sel_film)
{
QSqlQuery query;
query.prepare("Delete from FILM where ID = :id ");
query.bindValue(":id", sel_film);
return    query.exec();
}
