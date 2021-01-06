#include "mainwindow_film_consommation.h"
#include "ui_mainwindow_film_consommation.h"
/*
MainWindow_film_consommation::MainWindow_film_consommation(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_film_consommation)
{
    ui->setupUi(this);
}

MainWindow_film_consommation::~MainWindow_film_consommation()
{
    delete ui;
}

void MainWindow_film_consommation::on_actionactionremove_consomation_triggered()
{

}

void MainWindow_film_consommation::on_actionactionadd_consomation_triggered()
{

}

void MainWindow_film_consommation::on_actionactionremove_film_triggered()
{

}

void MainWindow_film_consommation::on_actionactionadd_film_triggered()
{

}
*/



#include <QMessageBox>

#include "addfilm.h"
#include "add_consomation.h"



MainWindow_film_consommation::MainWindow_film_consommation(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow_film_consommation)
{
    ui->setupUi(this);

    son=new QSound("C:/Users/EXTRA/Desktop/Integration f/integration_f/seif.wav");

    alert=0;
       messageboxactive=0;

   //connect too database
  /*  Connexion c;
    c.createconnect();*/

    //show database content
  show_tables();

  //for email tab
      connect(ui->sendBtn, SIGNAL(clicked()),this, SLOT(sendMail()));
      connect(ui->browseBtn, SIGNAL(clicked()), this, SLOT(browse()));


      QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label_t()));


}

void MainWindow_film_consommation::update_label_t()
{

    data_temperature=A.read_from_arduino();
    QString DataAsString = QString(data_temperature);
    qDebug()<< data_temperature;

     /*ui->label_2->setText("temp : "+data_temperature);*/

    if (data_temperature=="21"||data_temperature=="22"||data_temperature=="23"||data_temperature=="24"||data_temperature=="25"||data_temperature=="26"||data_temperature=="27"){
        if (messageboxactive==0){
            alert=1;
        }


    }
    if (alert==1)
    {
         alert=0;
         messageboxactive=1;
        int reponse = QMessageBox::question(this, "led", "allumer led", QMessageBox::Yes |  QMessageBox::No);
                                   if (reponse == QMessageBox::Yes)
                                   {
                                     led=1;
                                   }
                                   if (reponse == QMessageBox::No)
                                   {
                                      led=0;
                                   }

    }
    if (led==1){
        A.write_to_arduino("1");
    }
    if (data_temperature=="20"||data_temperature=="19"||data_temperature=="18"||data_temperature=="17"||data_temperature=="16"||data_temperature=="15"||data_temperature=="14"){
        A.write_to_arduino("0");
        led=0;
    }













}

MainWindow_film_consommation::~MainWindow_film_consommation()
{
    delete ui;
}



void MainWindow_film_consommation::show_tables()
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

void MainWindow_film_consommation::on_actionadd_film_triggered() //ajout
{

//creation instance
    addfilm af(this);

    //ouvrir dialog//f addd film
    int res=af.exec();
    if (res == QDialog::Rejected )
        return;

  //remplissage variables
    QString id=af.id_film();
    QString nom=af.nom_film();
    QString type=af.type_film();
    int duree=af.duree_film();

    if (id.length() >5){

    QMessageBox::warning(this, tr("error"),
                             QString(tr("id too long!"))
                             );
    return;
    }

    //ajout
    film f(id,nom,type, duree);
    f.ajouter();

//refresh du tableau (affichage)
 show_tables();

}


void MainWindow_film_consommation::on_tab_film_doubleClicked() //modifier
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
void MainWindow_film_consommation::on_tab_film_clicked(const QModelIndex &index)
{
    sel_film=ui->tab_film->model()->data(index).toString();

}

//determiner ID de la ligne
void MainWindow_film_consommation::on_tab_cons_clicked(const QModelIndex &index)
{
     sel_cons=ui->tab_cons->model()->data(index).toString();
}


void MainWindow_film_consommation::on_actionremove_film_triggered() //suppression
{
  film f;
f.supprimer(sel_film);
 show_tables();

}


void MainWindow_film_consommation::on_actionremove_consomation_triggered() //suppression
{
    consomation c;
  c.supprimer(sel_cons);
   show_tables();
}


//recherche
void MainWindow_film_consommation::on_recherche_film_textChanged(const QString &arg1)
{
    proxy_film->setFilterFixedString(arg1) ;

}

//crud consomation

void MainWindow_film_consommation::on_actionadd_consomation_triggered() //ajout
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


void MainWindow_film_consommation::on_tab_cons_doubleClicked() //modifier
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
void MainWindow_film_consommation::on_recherche_cons_textChanged(const QString &arg1)
{
    proxy_cons->setFilterFixedString(arg1);

}

//mailing
void  MainWindow_film_consommation::browse()
{
    files.clear();

    QFileDialog dialog(this);
    dialog.setDirectory(QDir::homePath());
    dialog.setFileMode(QFileDialog::ExistingFiles);

    if (dialog.exec())
        files = dialog.selectedFiles();

    QString fileListString;
    foreach(QString file, files)
        fileListString.append( "\"" + QFileInfo(file).fileName() + "\" " );

    ui->file->setText( fileListString );

}
void   MainWindow_film_consommation::sendMail()
{
    Smtp* smtp = new Smtp("seifeddine.amara@esprit.tn",ui->mail_pass->text(), "smtp.gmail.com");
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    if( !files.isEmpty() )
        smtp->sendMail("seifeddine.amara@esprit.tn", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText(), files );
    else
        smtp->sendMail("seifeddine.amara@esprit.tn", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText());
}
void   MainWindow_film_consommation::mailSent(QString status)
{

    if(status == "Message sent")
        QMessageBox::warning( nullptr, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
    ui->rcpt->clear();
    ui->subject->clear();
    ui->file->clear();
    ui->msg->clear();
    ui->mail_pass->clear();
}

//export excel
void MainWindow_film_consommation::on_pushButton_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Excel file"), qApp->applicationDirPath (),
                                                    tr("Excel Files (*.xls)"));
    if (fileName.isEmpty())
        return;

    ExportExcelObject obj(fileName, "mydata", ui->tab_film);

    //colums to export
    obj.addField(0, "id", "char(20)");
    obj.addField(1, "nom", "char(20)");
    obj.addField(2, "type", "char(20)");
    obj.addField(3, "duree", "char(20)");


    int retVal = obj.export2Excel();
    if( retVal > 0)
    {
        QMessageBox::information(this, tr("Done"),
                                 QString(tr("%1 records exported!")).arg(retVal)
                                 );
    }
}


void MainWindow_film_consommation::on_play_clicked()
{
    son->play();
}

void MainWindow_film_consommation::on_mute_clicked()
{
    son->stop();
}
