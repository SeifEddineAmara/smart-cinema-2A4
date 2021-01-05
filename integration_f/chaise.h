#ifndef CHAISE_H
#define CHAISE_H

#include<QString>
#include<QSqlQueryModel>
#include<QSqlQuery>


class CHAISE
{
private:
    QString type , numero,id_salle;

public:
   CHAISE();
   CHAISE(QString type , QString numero,QString id_salle ){
        this->type=type;
        this->numero=numero;
        this->id_salle=id_salle;


    }
    void settype(QString type){this->type=type;}
    QString gettype(){return this->type;}
    void setnumero(QString numero){this->numero=numero;}
    QString getnumero(){return this->numero;}


    bool ajouter();
    bool modifier(QString numero);
    bool supprimer(QString numero);
    QSqlQueryModel * afficher();
    QSqlQueryModel * recherche(QString numero);
};


#endif // CHAISE_H
