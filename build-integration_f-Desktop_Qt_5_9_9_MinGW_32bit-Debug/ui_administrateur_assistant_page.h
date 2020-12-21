/********************************************************************************
** Form generated from reading UI file 'administrateur_assistant_page.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATEUR_ASSISTANT_PAGE_H
#define UI_ADMINISTRATEUR_ASSISTANT_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_administrateur_assistant_page
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QPushButton *ajouter_administrateur;
    QPushButton *modifieradmin;
    QLineEdit *nomadmin;
    QLineEdit *prenomadmin;
    QLineEdit *emailadmin;
    QLineEdit *idadmin;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QGroupBox *groupBox_2;
    QTableView *tableViewadmin;
    QPushButton *afficheradmin;
    QPushButton *imprimeradmin;
    QPushButton *PDF;
    QGroupBox *groupBox_3;
    QLabel *label;
    QLineEdit *idsuppadmin;
    QPushButton *supprimeradmin;
    QFrame *cinema;
    QGroupBox *groupBox_8;
    QLineEdit *emailenvoie;
    QLineEdit *sujetenvoie;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *envoyer;
    QLineEdit *messagenvoyer;
    QWidget *tab_2;
    QGroupBox *groupBox_4;
    QTableView *tableViewassis;
    QPushButton *afficherassis;
    QGroupBox *groupBox_5;
    QPushButton *ajouterassis;
    QPushButton *modifierasis;
    QLineEdit *nomassis;
    QLineEdit *prenomassis;
    QLineEdit *emailassis;
    QLineEdit *idassis;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *NOMBREHASSIS;
    QLabel *nbrh;
    QGroupBox *groupBox_6;
    QLabel *label_10;
    QLineEdit *suppassisid;
    QPushButton *supprimerassis;
    QGroupBox *groupBox_7;
    QPushButton *rechercherassistant;
    QLineEdit *idrecherche;
    QTableView *tableViewrechercher;
    QLabel *label_11;

    void setupUi(QDialog *administrateur_assistant_page)
    {
        if (administrateur_assistant_page->objectName().isEmpty())
            administrateur_assistant_page->setObjectName(QStringLiteral("administrateur_assistant_page"));
        administrateur_assistant_page->resize(733, 488);
        administrateur_assistant_page->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/beige.jpg);"));
        tabWidget = new QTabWidget(administrateur_assistant_page);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(60, 0, 561, 561));
        QFont font;
        font.setPointSize(9);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix2/marron.jpg);"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 211, 171));
        ajouter_administrateur = new QPushButton(groupBox);
        ajouter_administrateur->setObjectName(QStringLiteral("ajouter_administrateur"));
        ajouter_administrateur->setGeometry(QRect(20, 140, 75, 23));
        ajouter_administrateur->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        modifieradmin = new QPushButton(groupBox);
        modifieradmin->setObjectName(QStringLiteral("modifieradmin"));
        modifieradmin->setGeometry(QRect(110, 140, 75, 23));
        modifieradmin->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        nomadmin = new QLineEdit(groupBox);
        nomadmin->setObjectName(QStringLiteral("nomadmin"));
        nomadmin->setGeometry(QRect(60, 20, 113, 20));
        nomadmin->setStyleSheet(QStringLiteral("border-image: whit"));
        prenomadmin = new QLineEdit(groupBox);
        prenomadmin->setObjectName(QStringLiteral("prenomadmin"));
        prenomadmin->setGeometry(QRect(60, 50, 113, 20));
        prenomadmin->setStyleSheet(QStringLiteral("border-image: whit"));
        emailadmin = new QLineEdit(groupBox);
        emailadmin->setObjectName(QStringLiteral("emailadmin"));
        emailadmin->setGeometry(QRect(60, 80, 113, 20));
        emailadmin->setStyleSheet(QStringLiteral("border-image: whit"));
        idadmin = new QLineEdit(groupBox);
        idadmin->setObjectName(QStringLiteral("idadmin"));
        idadmin->setGeometry(QRect(70, 110, 113, 20));
        idadmin->setStyleSheet(QStringLiteral("border-image: whit"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 20, 47, 14));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 50, 47, 14));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 80, 47, 14));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 110, 47, 14));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(250, 10, 291, 311));
        tableViewadmin = new QTableView(groupBox_2);
        tableViewadmin->setObjectName(QStringLiteral("tableViewadmin"));
        tableViewadmin->setGeometry(QRect(20, 20, 241, 151));
        tableViewadmin->setStyleSheet(QStringLiteral("border-image: whit"));
        afficheradmin = new QPushButton(groupBox_2);
        afficheradmin->setObjectName(QStringLiteral("afficheradmin"));
        afficheradmin->setGeometry(QRect(20, 200, 75, 23));
        afficheradmin->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        imprimeradmin = new QPushButton(groupBox_2);
        imprimeradmin->setObjectName(QStringLiteral("imprimeradmin"));
        imprimeradmin->setGeometry(QRect(200, 200, 75, 23));
        imprimeradmin->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        PDF = new QPushButton(groupBox_2);
        PDF->setObjectName(QStringLiteral("PDF"));
        PDF->setGeometry(QRect(110, 200, 80, 22));
        PDF->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 190, 191, 131));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 50, 47, 14));
        idsuppadmin = new QLineEdit(groupBox_3);
        idsuppadmin->setObjectName(QStringLiteral("idsuppadmin"));
        idsuppadmin->setGeometry(QRect(40, 50, 113, 20));
        idsuppadmin->setStyleSheet(QStringLiteral("border-image: whit"));
        supprimeradmin = new QPushButton(groupBox_3);
        supprimeradmin->setObjectName(QStringLiteral("supprimeradmin"));
        supprimeradmin->setGeometry(QRect(60, 90, 75, 23));
        supprimeradmin->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        cinema = new QFrame(tab);
        cinema->setObjectName(QStringLiteral("cinema"));
        cinema->setGeometry(QRect(-10, 0, 120, 80));
        cinema->setStyleSheet(QStringLiteral("image: url(:/a.png);"));
        cinema->setFrameShape(QFrame::StyledPanel);
        cinema->setFrameShadow(QFrame::Raised);
        groupBox_8 = new QGroupBox(tab);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(30, 330, 461, 151));
        emailenvoie = new QLineEdit(groupBox_8);
        emailenvoie->setObjectName(QStringLiteral("emailenvoie"));
        emailenvoie->setGeometry(QRect(70, 50, 113, 21));
        emailenvoie->setStyleSheet(QStringLiteral("border-image: whit"));
        sujetenvoie = new QLineEdit(groupBox_8);
        sujetenvoie->setObjectName(QStringLiteral("sujetenvoie"));
        sujetenvoie->setGeometry(QRect(70, 90, 113, 21));
        sujetenvoie->setStyleSheet(QStringLiteral("border-image: whit"));
        label_12 = new QLabel(groupBox_8);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 50, 47, 14));
        label_13 = new QLabel(groupBox_8);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 90, 47, 14));
        label_14 = new QLabel(groupBox_8);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(240, 20, 47, 14));
        envoyer = new QPushButton(groupBox_8);
        envoyer->setObjectName(QStringLiteral("envoyer"));
        envoyer->setGeometry(QRect(320, 90, 80, 22));
        envoyer->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        messagenvoyer = new QLineEdit(tab);
        messagenvoyer->setObjectName(QStringLiteral("messagenvoyer"));
        messagenvoyer->setGeometry(QRect(320, 350, 141, 61));
        messagenvoyer->setStyleSheet(QStringLiteral("border-image: whit"));
        tabWidget->addTab(tab, QString());
        cinema->raise();
        groupBox->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        groupBox_8->raise();
        messagenvoyer->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(250, 10, 291, 261));
        tableViewassis = new QTableView(groupBox_4);
        tableViewassis->setObjectName(QStringLiteral("tableViewassis"));
        tableViewassis->setGeometry(QRect(20, 20, 241, 151));
        tableViewassis->setStyleSheet(QStringLiteral("border-image: whit"));
        afficherassis = new QPushButton(groupBox_4);
        afficherassis->setObjectName(QStringLiteral("afficherassis"));
        afficherassis->setGeometry(QRect(100, 200, 75, 23));
        afficherassis->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/orange.png);\n"
""));
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(20, 10, 211, 261));
        ajouterassis = new QPushButton(groupBox_5);
        ajouterassis->setObjectName(QStringLiteral("ajouterassis"));
        ajouterassis->setGeometry(QRect(20, 220, 75, 23));
        ajouterassis->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/orange.png);\n"
"border-radius:1px;\n"
""));
        modifierasis = new QPushButton(groupBox_5);
        modifierasis->setObjectName(QStringLiteral("modifierasis"));
        modifierasis->setGeometry(QRect(110, 220, 75, 23));
        modifierasis->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        nomassis = new QLineEdit(groupBox_5);
        nomassis->setObjectName(QStringLiteral("nomassis"));
        nomassis->setGeometry(QRect(70, 20, 113, 20));
        nomassis->setStyleSheet(QStringLiteral("border-image: whit"));
        prenomassis = new QLineEdit(groupBox_5);
        prenomassis->setObjectName(QStringLiteral("prenomassis"));
        prenomassis->setGeometry(QRect(70, 50, 113, 20));
        prenomassis->setStyleSheet(QStringLiteral("border-image: whit"));
        emailassis = new QLineEdit(groupBox_5);
        emailassis->setObjectName(QStringLiteral("emailassis"));
        emailassis->setGeometry(QRect(70, 80, 113, 20));
        emailassis->setStyleSheet(QStringLiteral("border-image: whit"));
        idassis = new QLineEdit(groupBox_5);
        idassis->setObjectName(QStringLiteral("idassis"));
        idassis->setGeometry(QRect(70, 110, 113, 20));
        idassis->setStyleSheet(QStringLiteral("border-image: whit"));
        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 20, 47, 14));
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 50, 47, 14));
        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 80, 47, 14));
        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 110, 47, 14));
        NOMBREHASSIS = new QLineEdit(groupBox_5);
        NOMBREHASSIS->setObjectName(QStringLiteral("NOMBREHASSIS"));
        NOMBREHASSIS->setGeometry(QRect(70, 140, 113, 21));
        NOMBREHASSIS->setStyleSheet(QStringLiteral("border-image: whit"));
        nbrh = new QLabel(groupBox_5);
        nbrh->setObjectName(QStringLiteral("nbrh"));
        nbrh->setGeometry(QRect(10, 140, 47, 14));
        groupBox_6 = new QGroupBox(tab_2);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(20, 280, 191, 131));
        label_10 = new QLabel(groupBox_6);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 50, 47, 14));
        suppassisid = new QLineEdit(groupBox_6);
        suppassisid->setObjectName(QStringLiteral("suppassisid"));
        suppassisid->setGeometry(QRect(40, 50, 113, 20));
        suppassisid->setStyleSheet(QStringLiteral("border-image: whit"));
        supprimerassis = new QPushButton(groupBox_6);
        supprimerassis->setObjectName(QStringLiteral("supprimerassis"));
        supprimerassis->setGeometry(QRect(60, 90, 75, 23));
        supprimerassis->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        groupBox_7 = new QGroupBox(tab_2);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(250, 280, 271, 151));
        rechercherassistant = new QPushButton(groupBox_7);
        rechercherassistant->setObjectName(QStringLiteral("rechercherassistant"));
        rechercherassistant->setGeometry(QRect(160, 30, 80, 22));
        rechercherassistant->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        idrecherche = new QLineEdit(groupBox_7);
        idrecherche->setObjectName(QStringLiteral("idrecherche"));
        idrecherche->setGeometry(QRect(40, 30, 113, 21));
        idrecherche->setStyleSheet(QStringLiteral("border-image: whit"));
        tableViewrechercher = new QTableView(groupBox_7);
        tableViewrechercher->setObjectName(QStringLiteral("tableViewrechercher"));
        tableViewrechercher->setGeometry(QRect(10, 60, 256, 61));
        tableViewrechercher->setStyleSheet(QStringLiteral("border-image: whit"));
        label_11 = new QLabel(groupBox_7);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(16, 24, 16, 20));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(administrateur_assistant_page);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(administrateur_assistant_page);
    } // setupUi

    void retranslateUi(QDialog *administrateur_assistant_page)
    {
        administrateur_assistant_page->setWindowTitle(QApplication::translate("administrateur_assistant_page", "Smart cinema", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("administrateur_assistant_page", "ajout", Q_NULLPTR));
        ajouter_administrateur->setText(QApplication::translate("administrateur_assistant_page", "ajouter", Q_NULLPTR));
        modifieradmin->setText(QApplication::translate("administrateur_assistant_page", "modifier", Q_NULLPTR));
        label_2->setText(QApplication::translate("administrateur_assistant_page", "Nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("administrateur_assistant_page", "Prenom", Q_NULLPTR));
        label_4->setText(QApplication::translate("administrateur_assistant_page", "Email", Q_NULLPTR));
        label_5->setText(QApplication::translate("administrateur_assistant_page", "ID", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("administrateur_assistant_page", "affichage", Q_NULLPTR));
        afficheradmin->setText(QApplication::translate("administrateur_assistant_page", "afficher", Q_NULLPTR));
        imprimeradmin->setText(QApplication::translate("administrateur_assistant_page", "imprimer", Q_NULLPTR));
        PDF->setText(QApplication::translate("administrateur_assistant_page", "PDF", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("administrateur_assistant_page", "suppression", Q_NULLPTR));
        label->setText(QApplication::translate("administrateur_assistant_page", "Id", Q_NULLPTR));
        supprimeradmin->setText(QApplication::translate("administrateur_assistant_page", "supprimer", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("administrateur_assistant_page", "email", Q_NULLPTR));
        label_12->setText(QApplication::translate("administrateur_assistant_page", "email", Q_NULLPTR));
        label_13->setText(QApplication::translate("administrateur_assistant_page", "sujet", Q_NULLPTR));
        label_14->setText(QApplication::translate("administrateur_assistant_page", "message", Q_NULLPTR));
        envoyer->setText(QApplication::translate("administrateur_assistant_page", "envoyer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("administrateur_assistant_page", "Administrateur", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("administrateur_assistant_page", "affichage", Q_NULLPTR));
        afficherassis->setText(QApplication::translate("administrateur_assistant_page", "afficher", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("administrateur_assistant_page", "ajout", Q_NULLPTR));
        ajouterassis->setText(QApplication::translate("administrateur_assistant_page", "ajouter", Q_NULLPTR));
        modifierasis->setText(QApplication::translate("administrateur_assistant_page", "modifier", Q_NULLPTR));
        label_6->setText(QApplication::translate("administrateur_assistant_page", "Nom", Q_NULLPTR));
        label_7->setText(QApplication::translate("administrateur_assistant_page", "Prenom", Q_NULLPTR));
        label_8->setText(QApplication::translate("administrateur_assistant_page", "Email", Q_NULLPTR));
        label_9->setText(QApplication::translate("administrateur_assistant_page", "ID", Q_NULLPTR));
        nbrh->setText(QApplication::translate("administrateur_assistant_page", "nbrh", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("administrateur_assistant_page", "suppression", Q_NULLPTR));
        label_10->setText(QApplication::translate("administrateur_assistant_page", "Id", Q_NULLPTR));
        supprimerassis->setText(QApplication::translate("administrateur_assistant_page", "supprimer", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("administrateur_assistant_page", "recherche", Q_NULLPTR));
        rechercherassistant->setText(QApplication::translate("administrateur_assistant_page", "rechercher", Q_NULLPTR));
        label_11->setText(QApplication::translate("administrateur_assistant_page", "ID", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("administrateur_assistant_page", "assistant", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class administrateur_assistant_page: public Ui_administrateur_assistant_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATEUR_ASSISTANT_PAGE_H
