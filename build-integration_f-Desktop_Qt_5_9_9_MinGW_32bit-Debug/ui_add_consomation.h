/********************************************************************************
** Form generated from reading UI file 'add_consomation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_CONSOMATION_H
#define UI_ADD_CONSOMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_add_consomation
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_6;
    QLabel *label_3;
    QSpinBox *quant_cons;
    QLineEdit *id_cons;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *nom_cons;
    QLabel *label_7;
    QDoubleSpinBox *prix_cons;

    void setupUi(QDialog *add_consomation)
    {
        if (add_consomation->objectName().isEmpty())
            add_consomation->setObjectName(QStringLiteral("add_consomation"));
        add_consomation->resize(400, 300);
        add_consomation->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/beige.jpg);"));
        buttonBox = new QDialogButtonBox(add_consomation);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(260, 230, 81, 61));
        buttonBox->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/orange.png);\n"
""));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_6 = new QLabel(add_consomation);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 210, 61, 16));
        label_3 = new QLabel(add_consomation);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 170, 41, 16));
        quant_cons = new QSpinBox(add_consomation);
        quant_cons->setObjectName(QStringLiteral("quant_cons"));
        quant_cons->setGeometry(QRect(100, 210, 111, 22));
        quant_cons->setStyleSheet(QStringLiteral("border-image: whit"));
        id_cons = new QLineEdit(add_consomation);
        id_cons->setObjectName(QStringLiteral("id_cons"));
        id_cons->setGeometry(QRect(100, 90, 113, 20));
        id_cons->setStyleSheet(QStringLiteral("border-image: whit"));
        id_cons->setMaxLength(4);
        label_5 = new QLabel(add_consomation);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 130, 47, 13));
        label_4 = new QLabel(add_consomation);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 20, 271, 31));
        nom_cons = new QLineEdit(add_consomation);
        nom_cons->setObjectName(QStringLiteral("nom_cons"));
        nom_cons->setGeometry(QRect(100, 130, 113, 20));
        nom_cons->setStyleSheet(QStringLiteral("border-image: whit"));
        label_7 = new QLabel(add_consomation);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 90, 47, 13));
        prix_cons = new QDoubleSpinBox(add_consomation);
        prix_cons->setObjectName(QStringLiteral("prix_cons"));
        prix_cons->setGeometry(QRect(100, 170, 111, 22));
        prix_cons->setStyleSheet(QStringLiteral("border-image: whit"));

        retranslateUi(add_consomation);

        QMetaObject::connectSlotsByName(add_consomation);
    } // setupUi

    void retranslateUi(QDialog *add_consomation)
    {
        add_consomation->setWindowTitle(QApplication::translate("add_consomation", "Smart cinema", Q_NULLPTR));
        label_6->setText(QApplication::translate("add_consomation", "Quantite :", Q_NULLPTR));
        label_3->setText(QApplication::translate("add_consomation", "Prix :", Q_NULLPTR));
        id_cons->setPlaceholderText(QApplication::translate("add_consomation", "DONNER ID", Q_NULLPTR));
        label_5->setText(QApplication::translate("add_consomation", "Nom :", Q_NULLPTR));
        label_4->setText(QApplication::translate("add_consomation", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; font-weight:600; color:#00007f;\">Consomation</span></p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("add_consomation", "ID :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class add_consomation: public Ui_add_consomation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_CONSOMATION_H
