/********************************************************************************
** Form generated from reading UI file 'cinema_page.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CINEMA_PAGE_H
#define UI_CINEMA_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
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

class Ui_cinema_page
{
public:
    QGroupBox *groupBox;
    QTabWidget *tabWidget_2;
    QWidget *tab_7;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_nom_ajout;
    QLineEdit *lineEdit_reference_ajout;
    QDateEdit *dateEdit;
    QLineEdit *lineEdit_destination_ajout;
    QSpinBox *spinBox;
    QPushButton *pushButton_ajouter;
    QWidget *tab_6;
    QPushButton *pushButton;
    QTableView *tableView;
    QPushButton *pushButton_imprimer;
    QWidget *tab_8;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_nom_modifcation;
    QLineEdit *lineEdit_date_modifcation;
    QLineEdit *lineEdit_destination_modifcation;
    QLineEdit *lineEdit_nombre_salle_modication;
    QPushButton *pushButton_modifier;
    QPushButton *pushButton_charger;
    QLabel *label_7;
    QLineEdit *lineEdit_reference_modification;
    QTableView *tableView_2;
    QWidget *tab_9;
    QLabel *label_11;
    QLineEdit *lineEdit_reference_suppression;
    QPushButton *pushButton_supprimer;
    QWidget *tab_10;
    QComboBox *comboBox_tri;
    QPushButton *pushButton_trier;
    QTableView *tableView_tri;
    QWidget *tab_11;
    QLabel *label_12;
    QLineEdit *lineEdit_reference_rechercher;
    QLabel *label_13;
    QLineEdit *lineEdit_nom_rechercher_2;
    QLabel *label_14;
    QLineEdit *lineEdit_destination_rechercher;
    QPushButton *pushButton_rechercher_cinema;
    QTableView *tableView_rechercher_cinema;
    QPushButton *pushButton_refresh;

    void setupUi(QDialog *cinema_page)
    {
        if (cinema_page->objectName().isEmpty())
            cinema_page->setObjectName(QStringLiteral("cinema_page"));
        cinema_page->resize(929, 471);
        cinema_page->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/beige.jpg);"));
        groupBox = new QGroupBox(cinema_page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 891, 441));
        QFont font;
        font.setPointSize(14);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        tabWidget_2 = new QTabWidget(groupBox);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(20, 40, 851, 391));
        QFont font1;
        font1.setPointSize(10);
        tabWidget_2->setFont(font1);
        tabWidget_2->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix2/marron.jpg);"));
        tabWidget_2->setTabShape(QTabWidget::Triangular);
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        label_2 = new QLabel(tab_7);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 30, 71, 31));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral(""));
        label = new QLabel(tab_7);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 80, 131, 31));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(tab_7);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 130, 201, 31));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral(""));
        label_4 = new QLabel(tab_7);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 180, 131, 31));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral(""));
        label_5 = new QLabel(tab_7);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 230, 191, 31));
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral(""));
        lineEdit_nom_ajout = new QLineEdit(tab_7);
        lineEdit_nom_ajout->setObjectName(QStringLiteral("lineEdit_nom_ajout"));
        lineEdit_nom_ajout->setGeometry(QRect(190, 30, 501, 31));
        lineEdit_nom_ajout->setStyleSheet(QStringLiteral("border-image: white"));
        lineEdit_nom_ajout->setMaxLength(20);
        lineEdit_nom_ajout->setFrame(true);
        lineEdit_nom_ajout->setEchoMode(QLineEdit::Normal);
        lineEdit_reference_ajout = new QLineEdit(tab_7);
        lineEdit_reference_ajout->setObjectName(QStringLiteral("lineEdit_reference_ajout"));
        lineEdit_reference_ajout->setGeometry(QRect(190, 80, 501, 31));
        lineEdit_reference_ajout->setStyleSheet(QStringLiteral("border-image: white"));
        lineEdit_reference_ajout->setMaxLength(8);
        dateEdit = new QDateEdit(tab_7);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(190, 130, 501, 31));
        dateEdit->setStyleSheet(QStringLiteral("border-image: white"));
        lineEdit_destination_ajout = new QLineEdit(tab_7);
        lineEdit_destination_ajout->setObjectName(QStringLiteral("lineEdit_destination_ajout"));
        lineEdit_destination_ajout->setGeometry(QRect(190, 180, 501, 31));
        lineEdit_destination_ajout->setStyleSheet(QStringLiteral("border-image: white"));
        lineEdit_destination_ajout->setMaxLength(20);
        spinBox = new QSpinBox(tab_7);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(190, 230, 501, 31));
        spinBox->setStyleSheet(QStringLiteral("border-image: white"));
        spinBox->setMaximum(200);
        pushButton_ajouter = new QPushButton(tab_7);
        pushButton_ajouter->setObjectName(QStringLiteral("pushButton_ajouter"));
        pushButton_ajouter->setGeometry(QRect(310, 300, 201, 51));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_ajouter->setFont(font2);
        pushButton_ajouter->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/orange.png);\n"
"border-radius:25px;\n"
""));
        tabWidget_2->addTab(tab_7, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        pushButton = new QPushButton(tab_6);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 40, 391, 311));
        QFont font3;
        font3.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font3.setPointSize(20);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/camera.png);\n"
"border-radius:18px;\n"
"color: rgb(255, 0, 0);\n"
"font: 20pt \"MS Shell Dlg 2\";\n"
""));
        tableView = new QTableView(tab_6);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(410, 40, 411, 311));
        tableView->setStyleSheet(QStringLiteral("border-image: white"));
        pushButton_imprimer = new QPushButton(tab_6);
        pushButton_imprimer->setObjectName(QStringLiteral("pushButton_imprimer"));
        pushButton_imprimer->setGeometry(QRect(670, 12, 151, 31));
        pushButton_imprimer->setFont(font);
        pushButton_imprimer->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        tabWidget_2->addTab(tab_6, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        label_6 = new QLabel(tab_8);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 30, 71, 31));
        label_6->setFont(font);
        label_8 = new QLabel(tab_8);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 80, 201, 31));
        label_8->setFont(font);
        label_9 = new QLabel(tab_8);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 140, 141, 31));
        label_9->setFont(font);
        label_10 = new QLabel(tab_8);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 200, 191, 31));
        label_10->setFont(font);
        lineEdit_nom_modifcation = new QLineEdit(tab_8);
        lineEdit_nom_modifcation->setObjectName(QStringLiteral("lineEdit_nom_modifcation"));
        lineEdit_nom_modifcation->setGeometry(QRect(100, 30, 141, 31));
        lineEdit_nom_modifcation->setStyleSheet(QStringLiteral("border-image: white"));
        lineEdit_nom_modifcation->setMaxLength(20);
        lineEdit_date_modifcation = new QLineEdit(tab_8);
        lineEdit_date_modifcation->setObjectName(QStringLiteral("lineEdit_date_modifcation"));
        lineEdit_date_modifcation->setGeometry(QRect(190, 80, 151, 31));
        lineEdit_date_modifcation->setStyleSheet(QStringLiteral("border-image: white"));
        lineEdit_destination_modifcation = new QLineEdit(tab_8);
        lineEdit_destination_modifcation->setObjectName(QStringLiteral("lineEdit_destination_modifcation"));
        lineEdit_destination_modifcation->setGeometry(QRect(160, 140, 131, 31));
        lineEdit_destination_modifcation->setStyleSheet(QStringLiteral("border-image: white"));
        lineEdit_destination_modifcation->setMaxLength(20);
        lineEdit_nombre_salle_modication = new QLineEdit(tab_8);
        lineEdit_nombre_salle_modication->setObjectName(QStringLiteral("lineEdit_nombre_salle_modication"));
        lineEdit_nombre_salle_modication->setGeometry(QRect(210, 200, 121, 31));
        lineEdit_nombre_salle_modication->setStyleSheet(QStringLiteral("border-image: white"));
        lineEdit_nombre_salle_modication->setMaxLength(8);
        pushButton_modifier = new QPushButton(tab_8);
        pushButton_modifier->setObjectName(QStringLiteral("pushButton_modifier"));
        pushButton_modifier->setGeometry(QRect(20, 280, 151, 51));
        pushButton_modifier->setFont(font2);
        pushButton_modifier->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/orange.png);\n"
"border-radius:25px;\n"
""));
        pushButton_charger = new QPushButton(tab_8);
        pushButton_charger->setObjectName(QStringLiteral("pushButton_charger"));
        pushButton_charger->setGeometry(QRect(210, 280, 151, 51));
        pushButton_charger->setFont(font2);
        pushButton_charger->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/orange.png);\n"
"border-radius:25px;\n"
""));
        label_7 = new QLabel(tab_8);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(430, 30, 131, 31));
        QFont font4;
        font4.setPointSize(14);
        font4.setUnderline(true);
        label_7->setFont(font4);
        label_7->setStyleSheet(QLatin1String("text-decoration: underline;\n"
"color: rgb(255, 85, 0);"));
        lineEdit_reference_modification = new QLineEdit(tab_8);
        lineEdit_reference_modification->setObjectName(QStringLiteral("lineEdit_reference_modification"));
        lineEdit_reference_modification->setGeometry(QRect(570, 30, 141, 31));
        lineEdit_reference_modification->setStyleSheet(QStringLiteral("border-image: white"));
        lineEdit_reference_modification->setMaxLength(8);
        lineEdit_reference_modification->setReadOnly(true);
        tableView_2 = new QTableView(tab_8);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(410, 70, 411, 311));
        tableView_2->setStyleSheet(QStringLiteral("border-image: white"));
        tabWidget_2->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        label_11 = new QLabel(tab_9);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(110, 60, 131, 31));
        label_11->setFont(font);
        lineEdit_reference_suppression = new QLineEdit(tab_9);
        lineEdit_reference_suppression->setObjectName(QStringLiteral("lineEdit_reference_suppression"));
        lineEdit_reference_suppression->setGeometry(QRect(240, 60, 361, 31));
        lineEdit_reference_suppression->setStyleSheet(QStringLiteral("border-image: white"));
        lineEdit_reference_suppression->setMaxLength(8);
        pushButton_supprimer = new QPushButton(tab_9);
        pushButton_supprimer->setObjectName(QStringLiteral("pushButton_supprimer"));
        pushButton_supprimer->setGeometry(QRect(330, 130, 151, 51));
        pushButton_supprimer->setFont(font2);
        pushButton_supprimer->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/orange.png);\n"
"border-radius:25px;\n"
""));
        tabWidget_2->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        comboBox_tri = new QComboBox(tab_10);
        comboBox_tri->setObjectName(QStringLiteral("comboBox_tri"));
        comboBox_tri->setGeometry(QRect(80, 100, 211, 51));
        comboBox_tri->setStyleSheet(QStringLiteral("border-image: white"));
        pushButton_trier = new QPushButton(tab_10);
        pushButton_trier->setObjectName(QStringLiteral("pushButton_trier"));
        pushButton_trier->setGeometry(QRect(30, 200, 151, 51));
        pushButton_trier->setFont(font2);
        pushButton_trier->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/orange.png);\n"
"border-radius:25px;\n"
""));
        tableView_tri = new QTableView(tab_10);
        tableView_tri->setObjectName(QStringLiteral("tableView_tri"));
        tableView_tri->setGeometry(QRect(380, 20, 441, 351));
        tableView_tri->setStyleSheet(QStringLiteral("border-image: white"));
        tabWidget_2->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        label_12 = new QLabel(tab_11);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 20, 131, 31));
        label_12->setFont(font);
        lineEdit_reference_rechercher = new QLineEdit(tab_11);
        lineEdit_reference_rechercher->setObjectName(QStringLiteral("lineEdit_reference_rechercher"));
        lineEdit_reference_rechercher->setGeometry(QRect(20, 60, 181, 31));
        QFont font5;
        font5.setPointSize(12);
        lineEdit_reference_rechercher->setFont(font5);
        lineEdit_reference_rechercher->setStyleSheet(QStringLiteral("border-image: white"));
        lineEdit_reference_rechercher->setMaxLength(8);
        label_13 = new QLabel(tab_11);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 110, 71, 31));
        label_13->setFont(font);
        lineEdit_nom_rechercher_2 = new QLineEdit(tab_11);
        lineEdit_nom_rechercher_2->setObjectName(QStringLiteral("lineEdit_nom_rechercher_2"));
        lineEdit_nom_rechercher_2->setGeometry(QRect(20, 150, 181, 31));
        lineEdit_nom_rechercher_2->setFont(font5);
        lineEdit_nom_rechercher_2->setStyleSheet(QStringLiteral("border-image: white"));
        lineEdit_nom_rechercher_2->setMaxLength(20);
        label_14 = new QLabel(tab_11);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 200, 141, 31));
        label_14->setFont(font);
        lineEdit_destination_rechercher = new QLineEdit(tab_11);
        lineEdit_destination_rechercher->setObjectName(QStringLiteral("lineEdit_destination_rechercher"));
        lineEdit_destination_rechercher->setGeometry(QRect(20, 240, 191, 31));
        lineEdit_destination_rechercher->setFont(font5);
        lineEdit_destination_rechercher->setStyleSheet(QStringLiteral("border-image: white"));
        lineEdit_destination_rechercher->setMaxLength(20);
        pushButton_rechercher_cinema = new QPushButton(tab_11);
        pushButton_rechercher_cinema->setObjectName(QStringLiteral("pushButton_rechercher_cinema"));
        pushButton_rechercher_cinema->setGeometry(QRect(60, 310, 151, 51));
        pushButton_rechercher_cinema->setFont(font2);
        pushButton_rechercher_cinema->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/orange.png);\n"
"border-radius:25px;\n"
""));
        tableView_rechercher_cinema = new QTableView(tab_11);
        tableView_rechercher_cinema->setObjectName(QStringLiteral("tableView_rechercher_cinema"));
        tableView_rechercher_cinema->setGeometry(QRect(400, 20, 421, 351));
        tableView_rechercher_cinema->setStyleSheet(QStringLiteral("border-image: white"));
        pushButton_refresh = new QPushButton(tab_11);
        pushButton_refresh->setObjectName(QStringLiteral("pushButton_refresh"));
        pushButton_refresh->setGeometry(QRect(240, 310, 151, 51));
        pushButton_refresh->setFont(font2);
        pushButton_refresh->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/orange.png);\n"
"border-radius:25px;\n"
""));
        tabWidget_2->addTab(tab_11, QString());

        retranslateUi(cinema_page);

        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(cinema_page);
    } // setupUi

    void retranslateUi(QDialog *cinema_page)
    {
        cinema_page->setWindowTitle(QApplication::translate("cinema_page", "Smart cinema", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("cinema_page", "Gestion cinema", Q_NULLPTR));
        label_2->setText(QApplication::translate("cinema_page", "Nom :", Q_NULLPTR));
        label->setText(QApplication::translate("cinema_page", "Reference :", Q_NULLPTR));
        label_3->setText(QApplication::translate("cinema_page", "Date de cr\303\251ation :", Q_NULLPTR));
        label_4->setText(QApplication::translate("cinema_page", "Destination :", Q_NULLPTR));
        label_5->setText(QApplication::translate("cinema_page", "Nombre de salle :", Q_NULLPTR));
        pushButton_ajouter->setText(QApplication::translate("cinema_page", "Ajouter", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("cinema_page", "Ajout", Q_NULLPTR));
        pushButton->setText(QApplication::translate("cinema_page", "Affichage", Q_NULLPTR));
        pushButton_imprimer->setText(QApplication::translate("cinema_page", "Imprimer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("cinema_page", "Affichage liste", Q_NULLPTR));
        label_6->setText(QApplication::translate("cinema_page", "Nom :", Q_NULLPTR));
        label_8->setText(QApplication::translate("cinema_page", "Date de cr\303\251ation :", Q_NULLPTR));
        label_9->setText(QApplication::translate("cinema_page", "Destination :", Q_NULLPTR));
        label_10->setText(QApplication::translate("cinema_page", "Nombre de salle :", Q_NULLPTR));
        pushButton_modifier->setText(QApplication::translate("cinema_page", "Modifier", Q_NULLPTR));
        pushButton_charger->setText(QApplication::translate("cinema_page", "Charger", Q_NULLPTR));
        label_7->setText(QApplication::translate("cinema_page", "Reference :", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QApplication::translate("cinema_page", "Modifcation", Q_NULLPTR));
        label_11->setText(QApplication::translate("cinema_page", "Reference :", Q_NULLPTR));
        pushButton_supprimer->setText(QApplication::translate("cinema_page", "Supprimer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QApplication::translate("cinema_page", "Suppression", Q_NULLPTR));
        pushButton_trier->setText(QApplication::translate("cinema_page", "Trier", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_10), QApplication::translate("cinema_page", "Tri", Q_NULLPTR));
        label_12->setText(QApplication::translate("cinema_page", "Reference :", Q_NULLPTR));
        lineEdit_reference_rechercher->setPlaceholderText(QApplication::translate("cinema_page", "Chercher", Q_NULLPTR));
        label_13->setText(QApplication::translate("cinema_page", "Nom :", Q_NULLPTR));
        lineEdit_nom_rechercher_2->setPlaceholderText(QApplication::translate("cinema_page", "Chercher", Q_NULLPTR));
        label_14->setText(QApplication::translate("cinema_page", "Destination :", Q_NULLPTR));
        lineEdit_destination_rechercher->setPlaceholderText(QApplication::translate("cinema_page", "Chercher", Q_NULLPTR));
        pushButton_rechercher_cinema->setText(QApplication::translate("cinema_page", "Rechercher", Q_NULLPTR));
        pushButton_refresh->setText(QApplication::translate("cinema_page", "Refrech", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_11), QApplication::translate("cinema_page", "Rechercher", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class cinema_page: public Ui_cinema_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CINEMA_PAGE_H
