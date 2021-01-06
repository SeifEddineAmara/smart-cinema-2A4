/********************************************************************************
** Form generated from reading UI file 'verification_administrateur.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERIFICATION_ADMINISTRATEUR_H
#define UI_VERIFICATION_ADMINISTRATEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_verification_administrateur
{
public:
    QLabel *label;
    QLineEdit *lineEdit_id;
    QPushButton *pushButton;
    QLabel *label_login;

    void setupUi(QDialog *verification_administrateur)
    {
        if (verification_administrateur->objectName().isEmpty())
            verification_administrateur->setObjectName(QStringLiteral("verification_administrateur"));
        verification_administrateur->resize(863, 408);
        verification_administrateur->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/beige.jpg);"));
        label = new QLabel(verification_administrateur);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 70, 241, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        lineEdit_id = new QLineEdit(verification_administrateur);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(270, 70, 371, 31));
        lineEdit_id->setStyleSheet(QStringLiteral("border-image: whit"));
        lineEdit_id->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(verification_administrateur);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, 150, 171, 41));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/orange.png);\n"
"border-radius:15px;\n"
""));
        label_login = new QLabel(verification_administrateur);
        label_login->setObjectName(QStringLiteral("label_login"));
        label_login->setGeometry(QRect(20, 260, 331, 41));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_login->setFont(font1);
        label_login->setStyleSheet(QStringLiteral(""));

        retranslateUi(verification_administrateur);

        QMetaObject::connectSlotsByName(verification_administrateur);
    } // setupUi

    void retranslateUi(QDialog *verification_administrateur)
    {
        verification_administrateur->setWindowTitle(QApplication::translate("verification_administrateur", "Smart cinema", Q_NULLPTR));
        label->setText(QApplication::translate("verification_administrateur", "ID de l'administrateur :", Q_NULLPTR));
        pushButton->setText(QApplication::translate("verification_administrateur", "V\303\251rifier", Q_NULLPTR));
        label_login->setText(QApplication::translate("verification_administrateur", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class verification_administrateur: public Ui_verification_administrateur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERIFICATION_ADMINISTRATEUR_H
