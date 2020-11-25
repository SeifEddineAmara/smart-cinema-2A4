#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

#include "addfilm.h"
#include "add_consomation.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   //connect too database
    Connexion c;
    c.createconnect();

    //show database content
  show_tables();



}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::show_tables()
{


//film
proxy_film = new QSortFilterProxyModel();
proxy_film->setSourceModel(tmp_film.afficher());
    proxy_film->setFilterCaseSensitivity(Qt::CaseInsensitive);
    proxy_film->setFilterKeyColumn(-1);
ui->tab_film->setModel(proxy_film);

 //consomation
proxy_cons = new QSortFilterProxyModel();
proxy_cons->setSourceModel(tmp_cons.afficher());
    proxy_cons->setFilterCaseSensitivity(Qt::CaseInsensitive);
    proxy_cons->setFilterKeyColumn(-1);
ui->tab_cons->setModel(proxy_cons);

}


//crud film

void MainWindow::on_actionadd_film_triggered() //ajout
{

//creation instance
    addfilm af(this);

    //ouvrir dialog
    int res=af.exec();
    if (res == QDialog::Rejected )
        return;

  //remplissage variables
    QString id=af.id_film();
    QString nom=af.nom_film();
    QString type=af.type_film();
    int duree=af.duree_film();

    //ajout
    film f(id,nom,type, duree);
    f.ajouter();

//refresh du tableau (affichage)
 show_tables();

}


void MainWindow::on_tab_film_doubleClicked() //modifier
{
    addfilm af(this);

  af.show_film(sel_film);
  int res=af.exec();
  if (res == QDialog::Rejected )
    return;

  //remplissage variables
    QString id=af.id_film();
    QString nom=af.nom_film();
    QString type=af.type_film();
    int duree=af.duree_film();

  QSqlQuery query;


  query.prepare("UPDATE FILM SET NOM= :nom ,TYPE= :type ,DUREE= :duree where ID= :id ");
  query.bindValue(":id", sel_film);
  query.bindValue(":nom", nom);
  query.bindValue(":type",type);
  query.bindValue(":duree",duree);

  query.exec();

   show_tables();
}


//determiner ID de la ligne
void MainWindow::on_tab_film_clicked(const QModelIndex &index)
{
    sel_film=ui->tab_film->model()->data(index).toString();

}

//determiner ID de la ligne
void MainWindow::on_tab_cons_clicked(const QModelIndex &index)
{
     sel_cons=ui->tab_cons->model()->data(index).toString();
}


void MainWindow::on_actionremove_film_triggered() //suppression
{
  film f;
f.supprimer(sel_film);
 show_tables();

}


void MainWindow::on_actionremove_consomation_triggered() //suppression
{
    consomation c;
  c.supprimer(sel_cons);
   show_tables();
}


//recherche
void MainWindow::on_recherche_film_textChanged(const QString &arg1)
{
    proxy_film->setFilterFixedString(arg1);

}

//crud consomation

void MainWindow::on_actionadd_consomation_triggered() //ajout
{


    //creation instance
        add_consomation ac(this);

        //ouvrir dialog
        int res=ac.exec();
        if (res == QDialog::Rejected )
            return;

      //remplissage variables
        QString id=ac.id_cons();
        QString nom=ac.nom_cons();
        double prix=ac.prix_cons();
        int quantite=ac.quantite_cons();


        //ajout
        consomation c(id,nom,quantite,prix);
        c.ajouter();

    //refresh du tableau (affichage)
 show_tables();


}


void MainWindow::on_tab_cons_doubleClicked() //modifier
{
    add_consomation ac(this);

  ac.show_consomation(sel_cons);
  int res=ac.exec();
  if (res == QDialog::Rejected )
    return;

  //remplissage variables
  QString id=ac.id_cons();
  QString nom=ac.nom_cons();
  double prix=ac.prix_cons();
  int quantite=ac.quantite_cons();

  QSqlQuery query;


  query.prepare("UPDATE CONSOMATION SET NOM= :nom ,PRIX= :prix ,QUANTITE= :quantite where  ID= :id ");
  query.bindValue(":id", sel_cons);
  query.bindValue(":nom", nom);
  query.bindValue(":prix",prix);
  query.bindValue(":quantite",quantite);

  query.exec();
   show_tables();
}



//recherche
void MainWindow::on_recherche_cons_textChanged(const QString &arg1)
{
    proxy_cons->setFilterFixedString(arg1);

}


