#ifndef ADMINISTRATEUR_H
#define ADMINISTRATEUR_H

#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>


class ADMINISTRATEUR
{
private:
    QString nom,prenom,mail,id,username,password;



public:
    ADMINISTRATEUR();
    ADMINISTRATEUR(QString nom,QString prenom,QString mail,QString id,QString username,QString password){
        this->nom=nom;
        this->prenom=prenom;
        this->mail=mail;
        this->id=id;
        this->username=username;
        this->password=password;

    }
    int verif=0;
    void setnom(QString nom){this->nom=nom;}
    QString getnom(){return this->nom;}
    void setprenom(QString prenom){this->prenom=prenom;}
    QString getprenom(){return this->prenom;}
    void setmail(QString mail){this->mail=mail;}
    QString getmail(){return this->mail;}
    void setid(QString id){this->id=id;}
    QString getid(){return this->id;}
    bool ajouter();
    bool modifier();
    bool supprimer(QString id);
    QSqlQueryModel * afficher();
    QSqlQueryModel * recherche(QString id);
    bool existance(QString id);
};


#endif // ADMINISTRATEUR_H
