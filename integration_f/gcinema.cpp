#include "gcinema.h"

#include <QDebug>
#include "connection.h"
#include <QMessageBox>


//test tutoriel Git

gcinema::gcinema()
{
    nom="";
    reference="";
    datec="";
    destination="";
    nombre_salle="";

}


gcinema::gcinema(QString nom,QString reference,QString nombre_salle,QString datec,QString destination)
{
    this->nom=nom;
    this->reference=reference;
    this->datec=datec;
    this->destination=destination;
    this->nombre_salle=nombre_salle;

}


QString gcinema::get_nom(){return nom;}
QString gcinema::get_reference(){return reference;}
QString gcinema::get_nombre_salle(){return nombre_salle;}
QString gcinema::get_date(){return datec;}
QString gcinema::get_destination(){return destination;}



bool gcinema::ajouter()

{
  QSqlQuery query;


  query.prepare("INSERT INTO pcinema(nom, reference, datec, destination, nombre_salle)""VALUES( :nom, :reference, :datec , :destination, :nombre_salle)");

  query.bindValue(":nom",nom);
  query.bindValue(":reference",reference);
  query.bindValue(":datec",datec);
  query.bindValue(":destination",destination);
  query.bindValue(":nombre_salle",nombre_salle);

    return query.exec();
}


bool gcinema::supprimer(QString reff)
{
    QSqlQuery query;

    query.prepare("Delete from pcinema where reference = :reference ");


    query.bindValue(":reference", reff);

    return query.exec();

}

QSqlQueryModel * gcinema::afficher()
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



void gcinema::modifier(QString nom1,QString reference1,QString datec1,QString destination1,QString nb)
{
   QSqlQuery query;

    query.prepare("UPDATE PCINEMA set NOM='"+nom1 +"',REFERENCE='"+reference1+"',DATEC='"+datec1+"',DESTINATION='"+destination1+"' ,NOMBRE_SALLE='"+nb+"' where REFERENCE='"+reference1+"'");


   if(query.exec())
              {
              QMessageBox msgBox;
              msgBox.setText("Cinema modifié");
              msgBox.exec();
              }



}


QSqlQueryModel * gcinema::trier(int test)
{
             QSqlQueryModel *model=new QSqlQueryModel() ;
             QSqlQuery query ;

             model->setHeaderData(1, Qt::Horizontal, QObject::tr("REFERENCE"));
             model->setHeaderData(3, Qt::Horizontal, QObject::tr("DESTINATION "));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("nombre_salle"));

             if(test==1)
             {
                 query.prepare("SELECT *  FROM pcinema ORDER BY REFERENCE ASC ") ;
             }
             else if(test==2)
             {
                 query.prepare("SELECT *  FROM pcinema ORDER BY DESTINATION ASC ") ;
             }
             else if(test==3)
             {
                  query.prepare("SELECT *  FROM pcinema ORDER BY NOMBRE_SALLE ASC ") ;
             }

             if (query.exec()&&query.next())
             {
                 model->setQuery(query) ;
             }


   return model;

}

QSqlQueryModel * gcinema::rechercher(QString reff)
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

//3 criteres

QSqlQueryModel * gcinema::rechercher_3(QString reference,QString nom,QString destination)
{
    QMessageBox msgBox;
    QMessageBox msgBox1;

    QSqlQueryModel *model = new QSqlQueryModel;
    QSqlQuery query;
    int count=0;


    query.prepare("SELECT * FROM pcinema WHERE reference = :reference and nom= :nom and destination= :destination");
    query.bindValue(":reference",reference);
    query.bindValue(":nom",nom);
    query.bindValue(":destination",destination);



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

 if (count<1)
{
    msgBox1.setText("Cinema n'existe pas");
        msgBox1.exec();
        model=0;
}

    }





    return model;


}
