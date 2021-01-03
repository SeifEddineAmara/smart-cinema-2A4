/********************************************************************************
** Form generated from reading UI file 'smartcinema.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTCINEMA_H
#define UI_SMARTCINEMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Smartcinema
{
public:
    QGroupBox *groupBox;
    QLabel *label_timer;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_gest_ticket;
    QPushButton *pushButton_gest_cinema;
    QPushButton *pushButton_gest_film;
    QPushButton *pushButton_gest_salle;
    QPushButton *pushButton_gest_chaise_producteur;
    QPushButton *pushButton_gest_producteur;
    QLabel *label_26;
    QTextEdit *textEdit;
    QLabel *label_2;
    QPushButton *pushButton_gest_client;
    QPushButton *pushButton_projection;
    QLabel *label_gaz;

    void setupUi(QDialog *Smartcinema)
    {
        if (Smartcinema->objectName().isEmpty())
            Smartcinema->setObjectName(QStringLiteral("Smartcinema"));
        Smartcinema->resize(931, 530);
        Smartcinema->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/beige.jpg);"));
        groupBox = new QGroupBox(Smartcinema);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 911, 511));
        QFont font;
        font.setPointSize(14);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix2/marron.jpg);"));
        label_timer = new QLabel(groupBox);
        label_timer->setObjectName(QStringLiteral("label_timer"));
        label_timer->setGeometry(QRect(780, 10, 111, 21));
        QFont font1;
        font1.setPointSize(16);
        label_timer->setFont(font1);
        label_timer->setStyleSheet(QLatin1String("color: rgb(255, 0, 0);\n"
"border-image: url(:/new/prefix2/marron.jpg);\n"
"border-color: rgb(255, 85, 127);\n"
"border-image: url(:/new/prefix3/beige.jpg);"));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(610, 10, 131, 21));
        pushButton_3->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/beige.jpg);\n"
"color: rgb(255, 0, 0);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(460, 10, 131, 21));
        pushButton_4->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/beige.jpg);\n"
"color: rgb(255, 0, 0);\n"
"font: 75 12pt \"MS Shell Dlg 2\";\n"
""));
        pushButton_gest_ticket = new QPushButton(groupBox);
        pushButton_gest_ticket->setObjectName(QStringLiteral("pushButton_gest_ticket"));
        pushButton_gest_ticket->setGeometry(QRect(440, 130, 151, 111));
        pushButton_gest_ticket->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix6/tickett.png);"));
        pushButton_gest_cinema = new QPushButton(groupBox);
        pushButton_gest_cinema->setObjectName(QStringLiteral("pushButton_gest_cinema"));
        pushButton_gest_cinema->setGeometry(QRect(610, 130, 131, 111));
        pushButton_gest_cinema->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix6/cine.png);"));
        pushButton_gest_film = new QPushButton(groupBox);
        pushButton_gest_film->setObjectName(QStringLiteral("pushButton_gest_film"));
        pushButton_gest_film->setGeometry(QRect(760, 130, 131, 111));
        pushButton_gest_film->setStyleSheet(QLatin1String("/*image: url(:/new/prefix5/film.jpg);*/\n"
"border-image: url(:/new/prefix6/filmconso.jpg.png);"));
        pushButton_gest_salle = new QPushButton(groupBox);
        pushButton_gest_salle->setObjectName(QStringLiteral("pushButton_gest_salle"));
        pushButton_gest_salle->setGeometry(QRect(400, 260, 211, 141));
        pushButton_gest_salle->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix7/salleee.jpg.png);"));
        pushButton_gest_chaise_producteur = new QPushButton(groupBox);
        pushButton_gest_chaise_producteur->setObjectName(QStringLiteral("pushButton_gest_chaise_producteur"));
        pushButton_gest_chaise_producteur->setGeometry(QRect(610, 270, 141, 121));
        pushButton_gest_chaise_producteur->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix7/producteur_chaise.png);"));
        pushButton_gest_producteur = new QPushButton(groupBox);
        pushButton_gest_producteur->setObjectName(QStringLiteral("pushButton_gest_producteur"));
        pushButton_gest_producteur->setGeometry(QRect(760, 260, 141, 131));
        pushButton_gest_producteur->setStyleSheet(QStringLiteral("image: url(:/new/prefix5/client.png);"));
        label_26 = new QLabel(groupBox);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(20, 40, 391, 451));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(550, 50, 291, 71));
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setWeight(75);
        textEdit->setFont(font2);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(360, 10, 47, 13));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/beige.jpg);"));
        pushButton_gest_client = new QPushButton(groupBox);
        pushButton_gest_client->setObjectName(QStringLiteral("pushButton_gest_client"));
        pushButton_gest_client->setGeometry(QRect(510, 400, 151, 101));
        pushButton_gest_client->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix7/cliente.png);"));
        pushButton_projection = new QPushButton(groupBox);
        pushButton_projection->setObjectName(QStringLiteral("pushButton_projection"));
        pushButton_projection->setGeometry(QRect(700, 400, 151, 101));
        pushButton_projection->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix7/proj.png);"));
        label_gaz = new QLabel(groupBox);
        label_gaz->setObjectName(QStringLiteral("label_gaz"));
        label_gaz->setGeometry(QRect(280, 10, 47, 13));
        label_gaz->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/beige.jpg);"));

        retranslateUi(Smartcinema);

        QMetaObject::connectSlotsByName(Smartcinema);
    } // setupUi

    void retranslateUi(QDialog *Smartcinema)
    {
        Smartcinema->setWindowTitle(QApplication::translate("Smartcinema", "Smart cinema", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Smartcinema", "Smart cinema", Q_NULLPTR));
        label_timer->setText(QApplication::translate("Smartcinema", "TextLabel", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Smartcinema", "Lien vers Internet", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Smartcinema", "Ouvrir fichier", Q_NULLPTR));
        pushButton_gest_ticket->setText(QString());
        pushButton_gest_cinema->setText(QString());
        pushButton_gest_film->setText(QString());
        pushButton_gest_salle->setText(QString());
        pushButton_gest_chaise_producteur->setText(QString());
        pushButton_gest_producteur->setText(QString());
        label_26->setText(QApplication::translate("Smartcinema", "TextLabel", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("Smartcinema", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt; text-decoration: underline; color:#ff0000;\">Bienvenue</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("Smartcinema", "TextLabel", Q_NULLPTR));
        pushButton_gest_client->setText(QString());
        pushButton_projection->setText(QString());
        label_gaz->setText(QApplication::translate("Smartcinema", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Smartcinema: public Ui_Smartcinema {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTCINEMA_H
