/********************************************************************************
** Form generated from reading UI file 'addfilm.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFILM_H
#define UI_ADDFILM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_addfilm
{
public:
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *id_film;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *duree_film;
    QLabel *label_7;
    QDialogButtonBox *buttonBox;
    QLineEdit *nom_film;
    QComboBox *type_film;

    void setupUi(QDialog *addfilm)
    {
        if (addfilm->objectName().isEmpty())
            addfilm->setObjectName(QStringLiteral("addfilm"));
        addfilm->resize(505, 330);
        addfilm->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/beige.jpg);"));
        label_6 = new QLabel(addfilm);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(70, 220, 61, 16));
        label_5 = new QLabel(addfilm);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 140, 47, 13));
        id_film = new QLineEdit(addfilm);
        id_film->setObjectName(QStringLiteral("id_film"));
        id_film->setGeometry(QRect(140, 100, 113, 20));
        id_film->setStyleSheet(QStringLiteral("border-image: whit"));
        id_film->setMaxLength(8);
        label_3 = new QLabel(addfilm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 180, 71, 16));
        label_4 = new QLabel(addfilm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 40, 271, 31));
        duree_film = new QSpinBox(addfilm);
        duree_film->setObjectName(QStringLiteral("duree_film"));
        duree_film->setGeometry(QRect(140, 220, 111, 22));
        duree_film->setStyleSheet(QStringLiteral("border-image: whit"));
        label_7 = new QLabel(addfilm);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(70, 100, 47, 13));
        buttonBox = new QDialogButtonBox(addfilm);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(280, 260, 111, 41));
        buttonBox->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        nom_film = new QLineEdit(addfilm);
        nom_film->setObjectName(QStringLiteral("nom_film"));
        nom_film->setGeometry(QRect(140, 140, 113, 20));
        nom_film->setStyleSheet(QStringLiteral("border-image: whit"));
        nom_film->setMaxLength(20);
        type_film = new QComboBox(addfilm);
        type_film->setObjectName(QStringLiteral("type_film"));
        type_film->setGeometry(QRect(140, 180, 111, 22));
        type_film->setStyleSheet(QStringLiteral("border-image: whit"));

        retranslateUi(addfilm);

        QMetaObject::connectSlotsByName(addfilm);
    } // setupUi

    void retranslateUi(QDialog *addfilm)
    {
        addfilm->setWindowTitle(QApplication::translate("addfilm", "Smart cinema", Q_NULLPTR));
        label_6->setText(QApplication::translate("addfilm", "Duree(min) :", Q_NULLPTR));
        label_5->setText(QApplication::translate("addfilm", "Nom :", Q_NULLPTR));
        label_3->setText(QApplication::translate("addfilm", "Type :", Q_NULLPTR));
        label_4->setText(QApplication::translate("addfilm", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; font-weight:600; color:#00007f;\">Film</span></p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("addfilm", "ID :", Q_NULLPTR));
        type_film->clear();
        type_film->insertItems(0, QStringList()
         << QApplication::translate("addfilm", "Horror", Q_NULLPTR)
         << QApplication::translate("addfilm", "Action", Q_NULLPTR)
         << QApplication::translate("addfilm", "Drama ", Q_NULLPTR)
         << QApplication::translate("addfilm", "Comedy", Q_NULLPTR)
         << QApplication::translate("addfilm", "History", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class addfilm: public Ui_addfilm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFILM_H
