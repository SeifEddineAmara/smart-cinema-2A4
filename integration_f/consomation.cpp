#include "consomation.h"

#include <QMessageBox>

consomation::consomation()
{

}


consomation::consomation(QString id,QString nom,int quant, double prix)
{
  this->id_cons=id;
  this->nom_cons=nom;
  this->quant_cons=quant;
  this->prix_cons=prix;

}

bool consomation::ajouter()
{

QSqlQuery query;


query.prepare("INSERT INTO CONSOMATION (ID,NOM,QUANTITE,PRIX) "
                    "VALUES (:id,:nom, :quantite, :prix)");
query.bindValue(":id", id_cons);
query.bindValue(":quantite", quant_cons);
query.bindValue(":nom", nom_cons);
query.bindValue(":prix",prix_cons);

return    query.exec();
}

QSqlQueryModel * consomation::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select ID,NOM,QUANTITE,PRIX from CONSOMATION");

    return model;
}


bool consomation::supprimer(QString sel_cons)
{
QSqlQuery query;
query.prepare("Delete from CONSOMATION where ID = :id ");
query.bindValue(":id", sel_cons);
return    query.exec();
}
