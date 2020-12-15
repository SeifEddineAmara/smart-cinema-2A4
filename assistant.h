#ifndef ASSISTANT_H
#define ASSISTANT_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>

class ASSISTANT
{
private:
    QString nom,prenom,mail,id;
    int nbrh;

public:
    ASSISTANT();
    ASSISTANT(QString nom,QString prenom,QString mail,QString id,int nbrh){
        this->nom=nom;
        this->prenom=prenom;
        this->mail=mail;
        this->id=id;
        this->nbrh=nbrh;
    }
    void setnom(QString nom){this->nom=nom;}
    QString getnom(){return this->nom;}
    void setprenon(QString prenom){this->prenom=prenom;}
    QString getprenom(){return this->prenom;}
    void setmail(QString mail){this->mail=mail;}
    QString getmail(){return this->mail;}
    void setid(QString id){this->id=id;}
    QString getid(){return this->id;}
    void setnbrh(int nbrh){this->nbrh=nbrh;}
    int getnbrh(){return this->nbrh;}
    bool ajouter();
    bool modifier();
    bool supprimer(QString id);
    QSqlQueryModel * afficher();
    QSqlQueryModel * recherche(QString id);
    bool existance(QString id);
};

#endif // ASSISTANT_H

