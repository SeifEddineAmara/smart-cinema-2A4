#ifndef CONSOMATION_H
#define CONSOMATION_H


#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "connexion.h"

class consomation
{
public:
    consomation();
consomation(QString,QString,int,double);

Connexion conn;

bool ajouter();
 QSqlQueryModel * afficher();
  bool supprimer(QString);



    QString id_cons,nom_cons;
    int quant_cons;
    double prix_cons;
};

#endif // CONSOMATION_H
