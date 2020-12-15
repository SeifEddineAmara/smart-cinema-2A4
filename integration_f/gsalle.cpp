#include "gsalle.h"
#include <QDebug>
#include "connection.h"
#include <QMessageBox>


//test tutoriel

gsalle::gsalle()
{
    numero="";
    nombre_de_place="";
    nombre_de_place_disponible="";
    ref_cinema="";

}


gsalle::gsalle(QString numero,QString nombre_de_place,QString nombre_de_place_disponible,QString ref_cinema)
{
    this->numero=numero;
    this->nombre_de_place=nombre_de_place;
    this->nombre_de_place_disponible=nombre_de_place_disponible;
    this->ref_cinema=ref_cinema;

}

QString gsalle::get_numero(){return numero;}
QString gsalle::get_nombre_place(){return nombre_de_place;}
QString gsalle::get_nombre_de_place_disponible(){return nombre_de_place_disponible;}
QString gsalle::get_ref_cinema(){return ref_cinema;}


bool gsalle::ajouter()

{
  QSqlQuery query;


  query.prepare("INSERT INTO sallee(numero, nombre_de_place, nombre_de_place_disponible, ref_cinema)""VALUES( :numero, :nombre_de_place, :nombre_de_place_disponible , :ref_cinema)");

  query.bindValue(":numero",numero);
  query.bindValue(":nombre_de_place",nombre_de_place);
  query.bindValue(":nombre_de_place_disponible",nombre_de_place_disponible);
  query.bindValue(":ref_cinema",ref_cinema);

    return query.exec();
}


bool gsalle::supprimer(QString num)
{
    QSqlQuery query;


    query.prepare("Delete from sallee where numero = :numero ");

    query.bindValue(":numero", num);

    return query.exec();

}

QSqlQueryModel * gsalle::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from sallee");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("numero"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("nombre_de_place"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("nombre_de_place_disponible "));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("ref_cinema"));

    return model;
}


void gsalle::modifier(QString numero1,QString nombre_de_place1,QString nombre_de_place_disponible1)
{
   QSqlQuery query;

   query.prepare("UPDATE sallee set numero='"+numero1 +" ', nombre_de_place='"+nombre_de_place1+"', nombre_de_place_disponible='"+nombre_de_place_disponible1+"' where numero='"+numero1+"' ");



   if(query.exec())

   {
       QMessageBox msgBox;
       msgBox.setText("Salle modifié");
       msgBox.exec();
   }

}



QSqlQueryModel * gsalle::rechercher(QString num)
{
    QMessageBox msgBox;
    QMessageBox msgBox1;
    QSqlQueryModel *model = new QSqlQueryModel;
    QSqlQuery query;
    int count=0;


    query.prepare("SELECT * FROM sallee WHERE numero = ? ");
    query.addBindValue(num);



    if(query.exec() )

    {
while (query.next())
   {
   count ++;
}
if(count==1)
   {
    msgBox.setText("Numero existe");
    msgBox.exec();
    model->setQuery(query);
}

else if (count<1)
{
    msgBox1.setText("Numero n'existe pas");
        msgBox1.exec();
        model=0;
}



    }



    return model;


}


QSqlQueryModel * gsalle::rechercher_3(QString num,QString nb,QString reff)
{
    QMessageBox msgBox;
    QMessageBox msgBox1;

    QSqlQueryModel *model = new QSqlQueryModel;
    QSqlQuery query;
    int count=0;


    query.prepare("SELECT * FROM sallee WHERE numero = ? and nombre_de_place= ? and ref_cinema= ?");
    query.addBindValue(num);
    query.addBindValue(nb);
    query.addBindValue(reff);



    if(query.exec() )

    {
while (query.next())
   {
   count ++;
}
if(count==1)
   {
    msgBox.setText("Salle existe");
    msgBox.exec();
    model->setQuery(query);
}

else if (count<1)
{
    msgBox1.setText("Salle n'existe pas");
        msgBox1.exec();
        model=0;
}

    }





    return model;


}

