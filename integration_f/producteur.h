#ifndef PRODUCTEUR_H
#define PRODUCTEUR_H


#include<QString>
#include<QSqlQueryModel>
#include<QSqlQuery>


class PRODUCTEUR/*creation de la class producteur*/
{
private:
    QString nom,prenom,id,email,telf,adress;

public:
   PRODUCTEUR();
    PRODUCTEUR(QString nom,QString prenom,QString id,QString email,QString telf,QString adress){
        this->nom=nom;
        this->prenom=prenom;
        this->id=id;
        this->email=email;
        this->telf=telf;
         this->adress=adress;

    }
    void setnom(QString nom){this->nom=nom;}
    QString getnom(){return this->nom;}
    void setprenom(QString prenom){this->prenom=prenom;}
    QString getprenom(){return this->prenom;}
    void setid(QString id){this->id=id;}
    QString getid(){return this->id;}
    void setemail(QString email){this->email=email;}
    QString getemail(){return this->email;}
    void settelf(QString telf){this->telf=telf;}
    QString gettelf(){return this->telf;}
    void setadress(QString adress){this->adress=adress;}
    QString getadress(){return this->adress;}


    bool ajouter();
    bool modifier(QString id);
    bool supprimer(QString id);
    QSqlQueryModel * afficher();
    QSqlQueryModel * recherche(QString id);
};

#endif // PRODUCTEUR_H
