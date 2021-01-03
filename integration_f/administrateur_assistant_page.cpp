#include "administrateur_assistant_page.h"
#include "ui_administrateur_assistant_page.h"

#include<QtPrintSupport/QPrinter>
#include<QTextDocument>
#include <QMediaPlayer>
#include<QPdfWriter>
#include <QPropertyAnimation>
#include <QPrintDialog>
#include <QPainter>
#include <QPropertyAnimation>
#include<QTextStream>
#include<QFileDialog>
#include <QMessageBox>
#include <QApplication>

/*
administrateur_assistant_page::administrateur_assistant_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::administrateur_assistant_page)
{
    ui->setupUi(this);
}

administrateur_assistant_page::~administrateur_assistant_page()
{
    delete ui;
}
*/
administrateur_assistant_page::administrateur_assistant_page(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::administrateur_assistant_page)

{
    ui->setupUi(this);
    animation = new QPropertyAnimation(ui->cinema, "geometry");
            animation->setDuration(9000);
            animation->setStartValue(ui->cinema->geometry());
            animation->setEndValue(QRect(200,450,100,50));
            animation->start();
    ui->tableViewadmin->setModel(ad.afficher());
    ui->tableViewassis->setModel(ass.afficher());


}

administrateur_assistant_page::~administrateur_assistant_page()
{
    delete ui;
}




void administrateur_assistant_page::on_ajouter_administrateur_clicked()
{

    QString nom=ui->nomadmin->text();
    QString prenom=ui->prenomadmin->text();
    QString mail=ui->emailadmin->text();
    QString id=ui->idadmin->text();
    QString username=ui->usernameadmin->text();
    QString password=ui->passwordadmin->text();


    ADMINISTRATEUR ad(nom,prenom,mail,id,username,password);
    bool ex=ad.existance(id);
    if(ex)
    {
    bool test=ad.ajouter();
    if(test)
    {
        ui->tableViewadmin->setModel(ad.afficher());

        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("ajout successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("ajout failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("saisir un autre id.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}

void administrateur_assistant_page::on_modifieradmin_clicked()
{

    QString nom=ui->nomadmin->text();
    QString prenom=ui->prenomadmin->text();
    QString mail=ui->emailadmin->text();
    QString id=ui->idadmin->text();
    QString username=ui->usernameadmin->text();
    QString password=ui->passwordadmin->text();
    ADMINISTRATEUR ad(nom,prenom,mail,id,username,password);

    bool test=ad.modifier();
    if(test)
    {
        ui->tableViewadmin->setModel(ad.afficher());

        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("modify successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("modify failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void administrateur_assistant_page::on_supprimeradmin_clicked()
{
    QString id=ui->idsuppadmin->text();
    ADMINISTRATEUR ad;
    bool test=ad.supprimer(id);
    if(test)
    {
        ui->tableViewadmin->setModel(ad.afficher());

        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("suppression successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("supression failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void administrateur_assistant_page::on_afficheradmin_clicked()
{
    ADMINISTRATEUR ad;
    ui->tableViewadmin->setModel(ad.afficher());
}

void administrateur_assistant_page::on_ajouterassis_clicked()
{
    QString nom=ui->nomassis->text();
    QString prenom=ui->prenomassis->text();
    QString mail=ui->emailassis->text();
    QString id=ui->idassis->text();
    int    nbrh=ui->NOMBREHASSIS->text().toInt();
    QString username=ui->usernamassis->text();
    QString password=ui->passwordassis->text();



    ASSISTANT ass(nom,prenom,mail,id,nbrh,username,password);
     bool ex=ass.existance(id);
    if(ex)
    {
    bool test=ass.ajouter();
    if(test)
    {
        ui->tableViewassis->setModel(ass.afficher());

        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("ajout successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("ajout failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("saisir un autre id.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}


void administrateur_assistant_page::on_modifierasis_clicked()
{
    QString nom=ui->nomassis->text();
    QString prenom=ui->prenomassis->text();
    QString mail=ui->emailassis->text();
    QString id=ui->idassis->text();
    int     nbrh=ui->nbrh->text().toInt();
    QString username=ui->usernamassis->text();
    QString password=ui->passwordassis->text();

    ASSISTANT ass(nom,prenom,mail,id,nbrh,username,password);
    bool test=ass.modifier();
    if(test)
    {

            ui->tableViewassis->setModel(ass.afficher());


            QMessageBox::information(nullptr, QObject::tr("database is open"),
                        QObject::tr("modify successful.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

    }
        else
            QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                        QObject::tr("modify failed.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);


}

void administrateur_assistant_page::on_supprimerassis_clicked()
{
    QString id=ui->suppassisid->text();
    ASSISTANT ass;
    bool test=ass.supprimer(id);
 if(test)
{
    ui->tableViewassis->setModel(ass.afficher());


    QMessageBox::information(nullptr, QObject::tr("database is open"),
                QObject::tr("suppression successful.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

}
else
    QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                QObject::tr("supression failed.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);
}


void administrateur_assistant_page::on_afficherassis_clicked()
{
    ASSISTANT ass;
    ui->tableViewassis->setModel(ass.afficher());
}



void administrateur_assistant_page::on_idrecherche_cursorPositionChanged(int arg1, int arg2)
{
    QString id=ui->idrecherche->text();
    ui->tableViewrechercher->setModel(ass.recherche(id));
}

void administrateur_assistant_page::on_imprimeradmin_clicked()
{
    QPrinter printer;

        printer.setPrinterName("desiered printer name");

      QPrintDialog dialog(&printer,this);

        if(dialog.exec()== QDialog::Rejected)

            return;
}

void administrateur_assistant_page::on_PDF_clicked()
{
    QString strStream;
                    QTextStream out(&strStream);

                    const int rowCount = ui->tableViewadmin->model()->rowCount();
                    const int columnCount = ui->tableViewadmin->model()->columnCount();

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
                        if (!ui->tableViewadmin->isColumnHidden(column))
                            out << QString("<th>%1</th>").arg(ui->tableViewadmin->model()->headerData(column, Qt::Horizontal).toString());
                    out << "</tr></thead>\n";

                    // data table
                    for (int row = 0; row < rowCount; row++) {
                        out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                        for (int column = 0; column < columnCount; column++) {
                            if (!ui->tableViewadmin->isColumnHidden(column)) {
                                QString data = ui->tableViewadmin->model()->data(ui->tableViewadmin->model()->index(row, column)).toString().simplified();
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
void administrateur_assistant_page::sendMail()

{

    Smtp* smtp = new Smtp("abdelkader.daghrour@esprit.tn", "191JMT2184", "smtp.gmail.com", 465);

    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));





    smtp->sendMail("abdelkader.daghrour@esprit.tn", ui->emailenvoie->text(),ui->sujetenvoie->text(),ui->messagenvoyer->text());

}
void administrateur_assistant_page::mailSent(QString status)
{
    if(status == "Message sent")
        QMessageBox::warning( 0, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
}


void administrateur_assistant_page::on_envoyer_clicked()
{
     sendMail();
}

/*
void administrateur_assistant_page::on_rechercherassistant_clicked()
{

}*/
