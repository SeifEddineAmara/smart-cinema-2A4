#ifndef CHAISE_H
#define CHAISE_H

#include<QString>
#include<QSqlQueryModel>
#include<QSqlQuery>


class CHAISE
{
private:
    QString type , numero ;

public:
   CHAISE();
   CHAISE(QString type , QString numero ){
        this->type=type;
        this->numero=numero;


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
