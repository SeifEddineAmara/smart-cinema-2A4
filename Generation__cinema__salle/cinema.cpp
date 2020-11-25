#include "cinema.h"
#include <QDebug>
#include "connection.h"
#include <QMessageBox>

//test tutoriel Git

Cinema::Cinema()
{
    nom="";
    reference="";
    datec="";
    destination="";
    nombre_salle="";

}


Cinema::Cinema(QString nom,QString reference,QString nombre_salle,QString datec,QString destination)
{
    this->nom=nom;
    this->reference=reference;
    this->datec=datec;
    this->destination=destination;
    this->nombre_salle=nombre_salle;

}


QString Cinema::get_nom(){return nom;}
QString Cinema::get_reference(){return reference;}
QString Cinema::get_nombre_salle(){return nombre_salle;}
QString Cinema::get_date(){return datec;}
QString Cinema::get_destination(){return destination;}



bool Cinema::ajouter()

{
  QSqlQuery query;

 /* QString res=QString::number(reference);
  QString res1=QString::number(nombre_salle);*/

  query.prepare("INSERT INTO pcinema(nom, reference, datec, destination, nombre_salle)""VALUES( :nom, :reference, :datec , :destination, :nombre_salle)");

  query.bindValue(":nom",nom);
  query.bindValue(":reference",reference);
  query.bindValue(":datec",datec);
  query.bindValue(":destination",destination);
  query.bindValue(":nombre_salle",nombre_salle);

    return query.exec();
}


bool Cinema::supprimer(QString reff)
{
    QSqlQuery query;

    /*QString res=QString::number(reff);*/

    query.prepare("Delete from pcinema where reference = :reference ");

    query.bindValue(":reference", reff);

    return query.exec();

}

QSqlQueryModel * Cinema::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from pcinema");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("reference"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("datec "));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("destination"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("nombre_salle"));

    return model;
}



bool Cinema::modifier(QString n,QString dt,QString dest,QString nb,QString ref)
{
   QSqlQuery query;
   query.prepare("UPDATE pcinema set nom=?,datec=:?,destination=?,nombre_salle=? where (reference=:reference)");
   query.addBindValue(ref);
   query.addBindValue(n);
   query.addBindValue(dt);
   query.addBindValue(dest);
   query.addBindValue(nb);

    return query.exec();

}


QSqlQueryModel * Cinema::rechercher(QString reff)
{
    QMessageBox msgBox;
    QMessageBox msgBox1;
    QSqlQueryModel *model = new QSqlQueryModel;
    QSqlQuery query;
    int count=0;


    query.prepare("SELECT * FROM pcinema WHERE reference = ? ");
    query.addBindValue(reff);



    if(query.exec() )

    {
while (query.next())
   {
   count ++;
}
if(count==1)
   {
    msgBox.setText("Reference existe");
    msgBox.exec();
    model->setQuery(query);
}

else if (count<1)
{
    msgBox1.setText("Reference n'existe pas");
        msgBox1.exec();
        model=0;
}



    }





    return model;


}

////3 criteres
QSqlQueryModel * Cinema::rechercher_3(QString reff,QString nomm,QString dest)
{
    QMessageBox msgBox;
    QMessageBox msgBox1;

    QSqlQueryModel *model = new QSqlQueryModel;
    QSqlQuery query;
    int count=0;


    query.prepare("SELECT * FROM pcinema WHERE reference = ? and nom= ? and destination= ?");
    query.addBindValue(reff);
    query.addBindValue(nomm);
    query.addBindValue(dest);



    if(query.exec() )

    {
while (query.next())
   {
   count ++;
}
if(count==1)
   {
    msgBox.setText("Cinema existe");
    msgBox.exec();
    model->setQuery(query);
}

else if (count<1)
{
    msgBox1.setText("Cinema n'existe pas");
        msgBox1.exec();
        model=0;
}







































    }





    return model;


}



