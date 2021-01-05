#include "chaise_producteur_page.h"
#include "ui_chaise_producteur_page.h"

chaise_producteur_page::chaise_producteur_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chaise_producteur_page)
{
    ui->setupUi(this);
    ui->tableView->setModel(tmpproducteur.afficher());//refresh
    ui->tableView_4->setModel(tmpchaise.afficher());//refresh


    ui->lineEdit->setValidator(new QRegExpValidator( QRegExp("[A-Za-z0_]{0,255}"), this ));
    ui->lineEdit_2->setValidator(new QRegExpValidator( QRegExp("[A-Za-z0_]{0,255}"), this ));
    ui->lineEdit_5->setValidator(new QIntValidator(0,99999999,this));

    ui->lineEdit_8->setValidator(new QRegExpValidator( QRegExp("[A-Za-z0_]{0,255}"), this ));
    ui->lineEdit_9->setValidator(new QRegExpValidator( QRegExp("[A-Za-z0_]{0,255}"), this ));
    ui->lineEdit_14->setValidator(new QIntValidator(0,99999999,this));

    ui->lineEdit_16->setValidator(new QIntValidator(0,99999999,this));
    ui->lineEdit_18->setValidator(new QIntValidator(0,99999999,this));
    ui->lineEdit_20->setValidator(new QIntValidator(0,99999999,this));

}

chaise_producteur_page::~chaise_producteur_page()
{
    delete ui;
}





void chaise_producteur_page::on_pushButton_clicked()
{
    //MainWindow::notif("PRODUIT","Ajout d'un produit est reussite");

      if( ui->lineEdit->text().isEmpty() || ui->lineEdit_2->text().isEmpty()|| ui->lineEdit_3->text().isEmpty()|| ui->lineEdit_4->text().isEmpty()|| ui->lineEdit_5->text().isEmpty()|| ui->lineEdit_6->text().isEmpty())
      {
          ui->tableView->setModel(tmpproducteur.afficher());//refresh
              QMessageBox::warning(nullptr, QObject::tr("Attention"),
                          QObject::tr("Veuillez remplir tout les champs.\n"), QMessageBox::Ok);
      }
      else
      {
      PRODUCTEUR p(ui->lineEdit->text(),ui->lineEdit_2->text(),ui->lineEdit_3->text(),ui->lineEdit_4->text(),ui->lineEdit_5->text(),ui->lineEdit_6->text());
      bool test=p.ajouter();
      if (test)
      {
          QMessageBox::information(nullptr, QObject::tr("Ajouter un  PRODUCTEUR"),
                            QObject::tr(" PRODUCTEUR ajouté.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
          ui->tableView->setModel(tmpproducteur.afficher());
      }
      else
      {
          QMessageBox::critical(nullptr, QObject::tr("Ajouter un  PRODUCTEUR"),
                            QObject::tr("Erreur !.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
      }
      }
}

void chaise_producteur_page::on_pushButton_3_clicked()
{

    /*vad=new verification_administrateur(this);
    vad->show();*/

    QString id = ui->lineEdit_15->text();
    PRODUCTEUR p;
    bool test=p.supprimer(id);
    ui->tableView->setModel(tmpproducteur.afficher());//refresh
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("Supprimer un  PRODUCTEUR"),
                    QObject::tr(" PRODUCTEUR supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void chaise_producteur_page::on_lineEdit_15_textChanged(const QString &arg1)
{
    ui->tableView_3->setModel(tmpproducteur.recherche(ui->lineEdit_15->text()));

}

void chaise_producteur_page::on_pushButton_2_clicked()
{
       QString nom,prenom,id,email,telf,adress;


       id=ui->lineEdit_10->text();
        nom=ui->lineEdit_8->text();
        prenom=ui->lineEdit_9->text();
       email=ui->lineEdit_11->text();
        telf =ui->lineEdit_12->text();
         adress =ui->lineEdit_14->text();




         PRODUCTEUR p(nom,prenom,id,email,telf,adress);
        bool test= p.modifier(id);

        if (test)
        {
            QMessageBox::information(nullptr, QObject::tr("Modifier un   PRODUIT"),
                              QObject::tr("  PRODUIT Modifié.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
              ui->tableView->setModel(tmpproducteur.afficher());//refresh
        }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("Modifier un   PRODUIT"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
        }
}

void chaise_producteur_page::on_lineEdit_10_textChanged(const QString &arg1)
{
    ui->tableView_2->setModel(tmpproducteur.recherche(ui->lineEdit_10->text()));

}

void chaise_producteur_page::on_pushButton_4_clicked()
{
    QString numero,type;


        //MainWindow::notif("CHAISE","Ajout d'un chaise est reussite");

        if( ui->lineEdit_16->text().isEmpty() )
        {
            ui->tableView_4->setModel(tmpchaise.afficher());//refresh
                QMessageBox::warning(nullptr, QObject::tr("Attention"),
                            QObject::tr("Veuillez remplir tout les champs.\n"), QMessageBox::Ok);
        }
        else{

            numero=ui->lineEdit_16->text();


             if (ui->comboBox_2->currentIndex()==0)
                type="normal";
             else {
                 type="vip";
             }

             QString id_salle=ui->comboBox_id_salle->currentText();


        CHAISE c( type ,numero,id_salle );
        bool test=c.ajouter();

        if (test)
        {
            QMessageBox::information(nullptr, QObject::tr("Ajouter un   CHAISE"),
                              QObject::tr("  CHAISE ajouté.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
            ui->tableView_4->setModel(tmpchaise.afficher());//refresh
        }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("Ajouter un  CHAISE"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
        }

}}

void chaise_producteur_page::on_pushButton_6_clicked()
{
    QString numero = ui->lineEdit_20->text();
   CHAISE c;
    bool test=c.supprimer(numero);
    ui->tableView_4->setModel(tmpchaise.afficher());//refresh
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("Supprimer un  CHAISE"),
                    QObject::tr(" CHAISE supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void chaise_producteur_page::on_pushButton_5_clicked()
{
    QString numero,type;


        //MainWindow::notif("CHAISE","modification d'un chaise est reussite");

        if( ui->lineEdit_18->text().isEmpty() )
        {
            ui->tableView_4->setModel(tmpchaise.afficher());//refresh
                QMessageBox::warning(nullptr, QObject::tr("Attention"),
                            QObject::tr("Veuillez remplir tout les champs.\n"), QMessageBox::Ok);
        }
        else{

            numero=ui->lineEdit_18->text();


             if (ui->comboBox->currentIndex()==0)
                type="normal";
             else {
                 type="vip";
             }
             QString id_salle=ui->comboBox_id_salle->currentText();

        CHAISE c( type ,numero,id_salle );
        bool test=c.modifier(numero);

        if (test)
        {
            QMessageBox::information(nullptr, QObject::tr("modifier un   CHAISE"),
                              QObject::tr("  CHAISE modifié.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
            ui->tableView_4->setModel(tmpchaise.afficher());
        }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("modifier un  CHAISE"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
        }

}
}



void chaise_producteur_page::on_lineEdit_18_cursorPositionChanged(int arg1, int arg2)
{
     ui->tableView_5->setModel(tmpchaise.recherche(ui->lineEdit_18->text()));
}

    void chaise_producteur_page::on_pushButton_7_clicked()
    {

        QString strStream;
                     QTextStream out(&strStream);

                     const int rowCount = ui->tableView->model()->rowCount();
                     const int columnCount = ui->tableView->model()->columnCount();

                     out <<  "<html>\n"
                         "<head>\n"
                         "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                         <<  QString("<title>%1</title>\n").arg("strTitle")
                         <<  "</head>\n"
                         "<body bgcolor=#ffffff link=#5000A0>\n"

                        //     "<align='right'> " << datefich << "</align>"
                         "<center> <H1>Liste des commandes </H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n";

                     // headers
                     out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
                     for (int column = 0; column < columnCount; column++)
                         if (!ui->tableView->isColumnHidden(column))
                             out << QString("<th>%1</th>").arg(ui->tableView->model()->headerData(column, Qt::Horizontal).toString());
                     out << "</tr></thead>\n";

                     // data table
                     for (int row = 0; row < rowCount; row++) {
                         out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                         for (int column = 0; column < columnCount; column++) {
                             if (!ui->tableView->isColumnHidden(column)) {
                                 QString data = ui->tableView->model()->data(ui->tableView->model()->index(row, column)).toString().simplified();
                                 out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                             }
                         }
                         out << "</tr>\n";
                     }
                     out <<  "</table> </center>\n"
                         "</body>\n"
                         "</html>\n";

               QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Sauvegarder en PDF", QString(), "*.pdf");
                 if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

                QPrinter printer (QPrinter::PrinterResolution);
                 printer.setOutputFormat(QPrinter::PdfFormat);
                printer.setPaperSize(QPrinter::A4);
               printer.setOutputFileName(fileName);

                QTextDocument doc;
                 doc.setHtml(strStream);
                 doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
                 doc.print(&printer);

        }





void chaise_producteur_page::on_pushButton_8_clicked()
{
    QPrinter printer;

       printer.setPrinterName("desiered printer name");

     QPrintDialog dialog(&printer,this);

       if(dialog.exec()== QDialog::Rejected)

           return;

}

void chaise_producteur_page::on_lineEdit_20_textChanged(const QString &arg1)
{
    ui->tableView_6->setModel(tmpchaise.recherche(ui->lineEdit_20->text()));

}

void chaise_producteur_page::on_pushButton_charger_id_salle_clicked()
{

    QSqlQueryModel * model= new QSqlQueryModel();

 model->setQuery("select numero from sallee");

    ui->comboBox_id_salle->setModel(model);
}
