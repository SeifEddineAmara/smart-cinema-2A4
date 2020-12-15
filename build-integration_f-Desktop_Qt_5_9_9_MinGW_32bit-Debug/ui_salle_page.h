/********************************************************************************
** Form generated from reading UI file 'salle_page.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALLE_PAGE_H
#define UI_SALLE_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_salle_page
{
public:
    QGroupBox *groupBox_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_13;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QSpinBox *spinBox_nb_place_salle_ajout;
    QSpinBox *spinBox_nb_place_dispo_salle_ajout;
    QLineEdit *lineEdit_numero_salle_ajout;
    QComboBox *comboBox_ref_cinema;
    QPushButton *pushButton_load_reference;
    QLabel *label_28;
    QPushButton *pushButton_ajouter_salle;
    QWidget *tab_14;
    QPushButton *pushButton_affichage_salle;
    QTableView *tableView_affichage_list_salle;
    QWidget *tab_15;
    QLabel *label_20;
    QLabel *label_21;
    QTableView *tableView_affichage_list_salle_2;
    QPushButton *pushButton_modifier_salle;
    QPushButton *pushButton_charger_salle;
    QLineEdit *lineEdit_nombre_salle_modification;
    QLineEdit *lineEdit_nombre_salle_disponible_modifcation;
    QLabel *label_19;
    QLineEdit *lineEdit_numero_salle_modifcation;
    QWidget *tab_16;
    QLabel *label_22;
    QLineEdit *lineEdit_numero_salle_supprimer;
    QPushButton *pushButton_supprimer_salle;
    QWidget *tab_17;
    QLabel *label_23;
    QTableView *tableView_salle_rechercher;
    QLabel *label_24;
    QLabel *label_25;
    QLineEdit *lineEdit_numero_rechercher;
    QLineEdit *lineEdit_ref_cinema_salle_rechercher;
    QLineEdit *lineEdit_nombre_place_rechercher;
    QPushButton *pushButton_rechercher_salle;

    void setupUi(QDialog *salle_page)
    {
        if (salle_page->objectName().isEmpty())
            salle_page->setObjectName(QStringLiteral("salle_page"));
        salle_page->resize(898, 459);
        salle_page->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/beige.jpg);"));
        groupBox_2 = new QGroupBox(salle_page);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 10, 851, 431));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        groupBox_2->setFont(font);
        groupBox_2->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(false);
        tabWidget_3 = new QTabWidget(groupBox_2);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(10, 30, 831, 391));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        tabWidget_3->setFont(font1);
        tabWidget_3->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix2/marron.jpg);"));
        tabWidget_3->setTabShape(QTabWidget::Triangular);
        tab_13 = new QWidget();
        tab_13->setObjectName(QStringLiteral("tab_13"));
        label_15 = new QLabel(tab_13);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 20, 111, 31));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setWeight(50);
        label_15->setFont(font2);
        label_16 = new QLabel(tab_13);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 70, 211, 31));
        label_16->setFont(font2);
        label_17 = new QLabel(tab_13);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 120, 321, 31));
        label_17->setFont(font2);
        spinBox_nb_place_salle_ajout = new QSpinBox(tab_13);
        spinBox_nb_place_salle_ajout->setObjectName(QStringLiteral("spinBox_nb_place_salle_ajout"));
        spinBox_nb_place_salle_ajout->setGeometry(QRect(190, 70, 471, 31));
        spinBox_nb_place_salle_ajout->setStyleSheet(QStringLiteral("border-image: white"));
        spinBox_nb_place_salle_ajout->setMaximum(200);
        spinBox_nb_place_dispo_salle_ajout = new QSpinBox(tab_13);
        spinBox_nb_place_dispo_salle_ajout->setObjectName(QStringLiteral("spinBox_nb_place_dispo_salle_ajout"));
        spinBox_nb_place_dispo_salle_ajout->setGeometry(QRect(270, 120, 471, 31));
        spinBox_nb_place_dispo_salle_ajout->setStyleSheet(QStringLiteral("border-image: white"));
        spinBox_nb_place_dispo_salle_ajout->setMaximum(200);
        lineEdit_numero_salle_ajout = new QLineEdit(tab_13);
        lineEdit_numero_salle_ajout->setObjectName(QStringLiteral("lineEdit_numero_salle_ajout"));
        lineEdit_numero_salle_ajout->setGeometry(QRect(140, 20, 501, 31));
        lineEdit_numero_salle_ajout->setStyleSheet(QStringLiteral("border-image: white"));
        lineEdit_numero_salle_ajout->setMaxLength(2);
        comboBox_ref_cinema = new QComboBox(tab_13);
        comboBox_ref_cinema->setObjectName(QStringLiteral("comboBox_ref_cinema"));
        comboBox_ref_cinema->setGeometry(QRect(230, 180, 381, 31));
        comboBox_ref_cinema->setStyleSheet(QStringLiteral("border-image: white"));
        pushButton_load_reference = new QPushButton(tab_13);
        pushButton_load_reference->setObjectName(QStringLiteral("pushButton_load_reference"));
        pushButton_load_reference->setGeometry(QRect(610, 180, 75, 31));
        pushButton_load_reference->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        label_28 = new QLabel(tab_13);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(10, 180, 211, 31));
        label_28->setFont(font2);
        pushButton_ajouter_salle = new QPushButton(tab_13);
        pushButton_ajouter_salle->setObjectName(QStringLiteral("pushButton_ajouter_salle"));
        pushButton_ajouter_salle->setGeometry(QRect(270, 250, 211, 51));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton_ajouter_salle->setFont(font3);
        pushButton_ajouter_salle->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/orange.png);\n"
"/*border-radius :60px;*/\n"
"border-radius:25px;\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        tabWidget_3->addTab(tab_13, QString());
        tab_14 = new QWidget();
        tab_14->setObjectName(QStringLiteral("tab_14"));
        pushButton_affichage_salle = new QPushButton(tab_14);
        pushButton_affichage_salle->setObjectName(QStringLiteral("pushButton_affichage_salle"));
        pushButton_affichage_salle->setGeometry(QRect(10, 40, 381, 271));
        QFont font4;
        font4.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font4.setPointSize(18);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        pushButton_affichage_salle->setFont(font4);
        pushButton_affichage_salle->setStyleSheet(QLatin1String("font: 18pt \"MS Shell Dlg 2\";\n"
"border-image: url(:/new/prefix3/orange.png);\n"
"border-radius:25px;\n"
""));
        tableView_affichage_list_salle = new QTableView(tab_14);
        tableView_affichage_list_salle->setObjectName(QStringLiteral("tableView_affichage_list_salle"));
        tableView_affichage_list_salle->setGeometry(QRect(390, 40, 401, 271));
        tableView_affichage_list_salle->setStyleSheet(QStringLiteral("border-image: white"));
        tabWidget_3->addTab(tab_14, QString());
        tab_15 = new QWidget();
        tab_15->setObjectName(QStringLiteral("tab_15"));
        label_20 = new QLabel(tab_15);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(10, 50, 171, 31));
        label_20->setFont(font2);
        label_21 = new QLabel(tab_15);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(10, 130, 261, 31));
        label_21->setFont(font2);
        tableView_affichage_list_salle_2 = new QTableView(tab_15);
        tableView_affichage_list_salle_2->setObjectName(QStringLiteral("tableView_affichage_list_salle_2"));
        tableView_affichage_list_salle_2->setGeometry(QRect(450, 70, 361, 241));
        tableView_affichage_list_salle_2->setStyleSheet(QStringLiteral("border-image: white"));
        pushButton_modifier_salle = new QPushButton(tab_15);
        pushButton_modifier_salle->setObjectName(QStringLiteral("pushButton_modifier_salle"));
        pushButton_modifier_salle->setGeometry(QRect(10, 240, 151, 51));
        pushButton_modifier_salle->setFont(font3);
        pushButton_modifier_salle->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/orange.png);\n"
"border-radius:25px;\n"
""));
        pushButton_charger_salle = new QPushButton(tab_15);
        pushButton_charger_salle->setObjectName(QStringLiteral("pushButton_charger_salle"));
        pushButton_charger_salle->setGeometry(QRect(200, 240, 151, 51));
        pushButton_charger_salle->setFont(font3);
        pushButton_charger_salle->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/orange.png);\n"
"border-radius:25px;\n"
""));
        lineEdit_nombre_salle_modification = new QLineEdit(tab_15);
        lineEdit_nombre_salle_modification->setObjectName(QStringLiteral("lineEdit_nombre_salle_modification"));
        lineEdit_nombre_salle_modification->setGeometry(QRect(180, 50, 111, 31));
        lineEdit_nombre_salle_modification->setStyleSheet(QStringLiteral("border-image: white"));
        lineEdit_nombre_salle_modification->setMaxLength(3);
        lineEdit_nombre_salle_disponible_modifcation = new QLineEdit(tab_15);
        lineEdit_nombre_salle_disponible_modifcation->setObjectName(QStringLiteral("lineEdit_nombre_salle_disponible_modifcation"));
        lineEdit_nombre_salle_disponible_modifcation->setGeometry(QRect(270, 130, 141, 31));
        lineEdit_nombre_salle_disponible_modifcation->setStyleSheet(QStringLiteral("border-image: white"));
        lineEdit_nombre_salle_disponible_modifcation->setMaxLength(3);
        label_19 = new QLabel(tab_15);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(460, 20, 111, 31));
        QFont font5;
        font5.setPointSize(14);
        font5.setBold(false);
        font5.setUnderline(true);
        font5.setWeight(50);
        label_19->setFont(font5);
        label_19->setStyleSheet(QLatin1String("text-decoration: underline;\n"
"color: rgb(255, 85, 0);"));
        lineEdit_numero_salle_modifcation = new QLineEdit(tab_15);
        lineEdit_numero_salle_modifcation->setObjectName(QStringLiteral("lineEdit_numero_salle_modifcation"));
        lineEdit_numero_salle_modifcation->setGeometry(QRect(580, 20, 131, 31));
        lineEdit_numero_salle_modifcation->setStyleSheet(QStringLiteral("border-image: white"));
        lineEdit_numero_salle_modifcation->setReadOnly(true);
        tabWidget_3->addTab(tab_15, QString());
        tab_16 = new QWidget();
        tab_16->setObjectName(QStringLiteral("tab_16"));
        label_22 = new QLabel(tab_16);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(130, 50, 111, 31));
        label_22->setFont(font2);
        lineEdit_numero_salle_supprimer = new QLineEdit(tab_16);
        lineEdit_numero_salle_supprimer->setObjectName(QStringLiteral("lineEdit_numero_salle_supprimer"));
        lineEdit_numero_salle_supprimer->setGeometry(QRect(250, 50, 271, 31));
        lineEdit_numero_salle_supprimer->setStyleSheet(QStringLiteral("border-image: white"));
        lineEdit_numero_salle_supprimer->setMaxLength(2);
        pushButton_supprimer_salle = new QPushButton(tab_16);
        pushButton_supprimer_salle->setObjectName(QStringLiteral("pushButton_supprimer_salle"));
        pushButton_supprimer_salle->setGeometry(QRect(290, 110, 181, 51));
        pushButton_supprimer_salle->setFont(font3);
        pushButton_supprimer_salle->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/orange.png);\n"
"border-radius:25px;\n"
""));
        tabWidget_3->addTab(tab_16, QString());
        tab_17 = new QWidget();
        tab_17->setObjectName(QStringLiteral("tab_17"));
        label_23 = new QLabel(tab_17);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(10, 10, 111, 31));
        label_23->setFont(font2);
        tableView_salle_rechercher = new QTableView(tab_17);
        tableView_salle_rechercher->setObjectName(QStringLiteral("tableView_salle_rechercher"));
        tableView_salle_rechercher->setGeometry(QRect(400, 20, 411, 341));
        tableView_salle_rechercher->setStyleSheet(QStringLiteral("border-image: white"));
        label_24 = new QLabel(tab_17);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(10, 90, 261, 31));
        label_24->setFont(font2);
        label_25 = new QLabel(tab_17);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(20, 170, 211, 31));
        label_25->setFont(font2);
        lineEdit_numero_rechercher = new QLineEdit(tab_17);
        lineEdit_numero_rechercher->setObjectName(QStringLiteral("lineEdit_numero_rechercher"));
        lineEdit_numero_rechercher->setGeometry(QRect(10, 50, 181, 31));
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(false);
        font6.setWeight(50);
        lineEdit_numero_rechercher->setFont(font6);
        lineEdit_numero_rechercher->setStyleSheet(QStringLiteral("border-image: white"));
        lineEdit_numero_rechercher->setMaxLength(2);
        lineEdit_ref_cinema_salle_rechercher = new QLineEdit(tab_17);
        lineEdit_ref_cinema_salle_rechercher->setObjectName(QStringLiteral("lineEdit_ref_cinema_salle_rechercher"));
        lineEdit_ref_cinema_salle_rechercher->setGeometry(QRect(10, 130, 181, 31));
        lineEdit_ref_cinema_salle_rechercher->setFont(font6);
        lineEdit_ref_cinema_salle_rechercher->setStyleSheet(QStringLiteral("border-image: white"));
        lineEdit_ref_cinema_salle_rechercher->setMaxLength(8);
        lineEdit_nombre_place_rechercher = new QLineEdit(tab_17);
        lineEdit_nombre_place_rechercher->setObjectName(QStringLiteral("lineEdit_nombre_place_rechercher"));
        lineEdit_nombre_place_rechercher->setGeometry(QRect(10, 210, 181, 31));
        lineEdit_nombre_place_rechercher->setFont(font6);
        lineEdit_nombre_place_rechercher->setStyleSheet(QStringLiteral("border-image: white"));
        lineEdit_nombre_place_rechercher->setMaxLength(2);
        pushButton_rechercher_salle = new QPushButton(tab_17);
        pushButton_rechercher_salle->setObjectName(QStringLiteral("pushButton_rechercher_salle"));
        pushButton_rechercher_salle->setGeometry(QRect(50, 280, 151, 51));
        QFont font7;
        font7.setPointSize(12);
        font7.setBold(true);
        font7.setWeight(75);
        pushButton_rechercher_salle->setFont(font7);
        pushButton_rechercher_salle->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/orange.png);\n"
"border-radius:25px;\n"
""));
        tabWidget_3->addTab(tab_17, QString());

        retranslateUi(salle_page);

        tabWidget_3->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(salle_page);
    } // setupUi

    void retranslateUi(QDialog *salle_page)
    {
        salle_page->setWindowTitle(QApplication::translate("salle_page", "Dialog", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("salle_page", "Gestion salle", Q_NULLPTR));
        label_15->setText(QApplication::translate("salle_page", "Numero :", Q_NULLPTR));
        label_16->setText(QApplication::translate("salle_page", "Nombre de place :", Q_NULLPTR));
        label_17->setText(QApplication::translate("salle_page", "Nombre de place disponible :", Q_NULLPTR));
        pushButton_load_reference->setText(QApplication::translate("salle_page", "Charger", Q_NULLPTR));
        label_28->setText(QApplication::translate("salle_page", "R\303\251f\303\251rence du cinema :", Q_NULLPTR));
        pushButton_ajouter_salle->setText(QApplication::translate("salle_page", "Ajouter", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_13), QApplication::translate("salle_page", "Ajout", Q_NULLPTR));
        pushButton_affichage_salle->setText(QApplication::translate("salle_page", "Affichage", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_14), QApplication::translate("salle_page", "Affichage liste", Q_NULLPTR));
        label_20->setText(QApplication::translate("salle_page", "Nombre de place :", Q_NULLPTR));
        label_21->setText(QApplication::translate("salle_page", "Nombre de place disponible :", Q_NULLPTR));
        pushButton_modifier_salle->setText(QApplication::translate("salle_page", "Modifier", Q_NULLPTR));
        pushButton_charger_salle->setText(QApplication::translate("salle_page", "Charger", Q_NULLPTR));
        label_19->setText(QApplication::translate("salle_page", "Numero :", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_15), QApplication::translate("salle_page", "Modification", Q_NULLPTR));
        label_22->setText(QApplication::translate("salle_page", "Numero :", Q_NULLPTR));
        pushButton_supprimer_salle->setText(QApplication::translate("salle_page", "Supprimer", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_16), QApplication::translate("salle_page", "Suppression", Q_NULLPTR));
        label_23->setText(QApplication::translate("salle_page", "Numero :", Q_NULLPTR));
        label_24->setText(QApplication::translate("salle_page", "R\303\251f\303\251rence du cinema :", Q_NULLPTR));
        label_25->setText(QApplication::translate("salle_page", "Nombre de place :", Q_NULLPTR));
        lineEdit_numero_rechercher->setPlaceholderText(QApplication::translate("salle_page", "Chercher", Q_NULLPTR));
        lineEdit_ref_cinema_salle_rechercher->setPlaceholderText(QApplication::translate("salle_page", "Chercher", Q_NULLPTR));
        lineEdit_nombre_place_rechercher->setPlaceholderText(QApplication::translate("salle_page", "Chercher", Q_NULLPTR));
        pushButton_rechercher_salle->setText(QApplication::translate("salle_page", "Rechercher", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_17), QApplication::translate("salle_page", "Rechercher", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class salle_page: public Ui_salle_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALLE_PAGE_H
