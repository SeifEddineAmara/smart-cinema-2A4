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

QT_BEGIN_NAMESPACE

class Ui_Smartcinema
{
public:
    QGroupBox *groupBox;
    QLabel *label_timer;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_gest_client;
    QPushButton *pushButton_gest_ticket;
    QPushButton *pushButton_gest_cinema;
    QPushButton *pushButton_gest_film;
    QPushButton *pushButton_gest_salle;
    QPushButton *pushButton_gest_chaise;
    QPushButton *pushButton_gest_consom;
    QPushButton *pushButton_gest_producteur;

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
        pushButton_gest_client = new QPushButton(groupBox);
        pushButton_gest_client->setObjectName(QStringLiteral("pushButton_gest_client"));
        pushButton_gest_client->setGeometry(QRect(70, 100, 131, 101));
        pushButton_gest_client->setStyleSheet(QStringLiteral("image: url(:/new/prefix5/client.png);"));
        pushButton_gest_ticket = new QPushButton(groupBox);
        pushButton_gest_ticket->setObjectName(QStringLiteral("pushButton_gest_ticket"));
        pushButton_gest_ticket->setGeometry(QRect(250, 100, 130, 101));
        pushButton_gest_ticket->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix5/tick.png);"));
        pushButton_gest_cinema = new QPushButton(groupBox);
        pushButton_gest_cinema->setObjectName(QStringLiteral("pushButton_gest_cinema"));
        pushButton_gest_cinema->setGeometry(QRect(480, 100, 131, 101));
        pushButton_gest_cinema->setStyleSheet(QStringLiteral("image: url(:/new/prefix5/cine.png);"));
        pushButton_gest_film = new QPushButton(groupBox);
        pushButton_gest_film->setObjectName(QStringLiteral("pushButton_gest_film"));
        pushButton_gest_film->setGeometry(QRect(640, 100, 130, 101));
        pushButton_gest_film->setStyleSheet(QStringLiteral("image: url(:/new/prefix5/film.jpg);"));
        pushButton_gest_salle = new QPushButton(groupBox);
        pushButton_gest_salle->setObjectName(QStringLiteral("pushButton_gest_salle"));
        pushButton_gest_salle->setGeometry(QRect(70, 280, 130, 100));
        pushButton_gest_salle->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix5/salle.png);"));
        pushButton_gest_chaise = new QPushButton(groupBox);
        pushButton_gest_chaise->setObjectName(QStringLiteral("pushButton_gest_chaise"));
        pushButton_gest_chaise->setGeometry(QRect(250, 290, 131, 101));
        pushButton_gest_chaise->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix5/chair.png);"));
        pushButton_gest_consom = new QPushButton(groupBox);
        pushButton_gest_consom->setObjectName(QStringLiteral("pushButton_gest_consom"));
        pushButton_gest_consom->setGeometry(QRect(460, 270, 130, 101));
        pushButton_gest_consom->setStyleSheet(QStringLiteral("image: url(:/new/prefix5/consomm.png);"));
        pushButton_gest_producteur = new QPushButton(groupBox);
        pushButton_gest_producteur->setObjectName(QStringLiteral("pushButton_gest_producteur"));
        pushButton_gest_producteur->setGeometry(QRect(680, 280, 130, 101));
        pushButton_gest_producteur->setStyleSheet(QStringLiteral("image: url(:/new/prefix5/producteur.png);"));

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
        pushButton_gest_client->setText(QString());
        pushButton_gest_ticket->setText(QString());
        pushButton_gest_cinema->setText(QString());
        pushButton_gest_film->setText(QString());
        pushButton_gest_salle->setText(QString());
        pushButton_gest_chaise->setText(QString());
        pushButton_gest_consom->setText(QString());
        pushButton_gest_producteur->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Smartcinema: public Ui_Smartcinema {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTCINEMA_H
