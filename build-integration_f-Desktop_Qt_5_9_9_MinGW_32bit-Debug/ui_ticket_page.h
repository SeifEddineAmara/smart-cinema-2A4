/********************************************************************************
** Form generated from reading UI file 'ticket_page.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKET_PAGE_H
#define UI_TICKET_PAGE_H

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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ticket_page
{
public:
    QGroupBox *groupBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_id;
    QComboBox *comboBox_type;
    QComboBox *comboBox_consommation;
    QComboBox *comboBox_film;
    QLabel *label_6;
    QComboBox *comboBox_cine;
    QLabel *label_7;
    QComboBox *comboBox_salle;
    QLabel *label_8;
    QComboBox *comboBox_horaire;
    QPushButton *pushButton_update_film_cine;
    QPushButton *pushButton_update_cine_salle;
    QPushButton *pushButton_update_salle_horaire;
    QPushButton *pushButton_update_horaire;
    QPushButton *pushButton_confirm_type;
    QLineEdit *lineEdit_price;
    QPushButton *pushButton_confirm_ajout;
    QWidget *tab_2;
    QPushButton *pushButton_confirm_aff_ticket;
    QTableView *tableView_aff_ticket;
    QWidget *tab_3;
    QLineEdit *lineEdit_id_delete;
    QPushButton *pushButton_confirm;
    QWidget *tab_4;
    QLineEdit *lineEdit_id_update;
    QPushButton *pushButton_verif_id_update;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox_update_type;
    QComboBox *comboBox_update_cons;
    QLineEdit *lineEdit_price_update;
    QPushButton *pushButton_update_confi_type;
    QPushButton *pushButton_confi_update;

    void setupUi(QDialog *ticket_page)
    {
        if (ticket_page->objectName().isEmpty())
            ticket_page->setObjectName(QStringLiteral("ticket_page"));
        ticket_page->resize(932, 474);
        ticket_page->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/beige.jpg);"));
        groupBox = new QGroupBox(ticket_page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 891, 451));
        QFont font;
        font.setPointSize(14);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        tabWidget = new QTabWidget(groupBox);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(40, 30, 771, 401));
        tabWidget->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix2/marron.jpg);"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 111, 31));
        label->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 160, 111, 41));
        label_2->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 90, 111, 21));
        label_3->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 240, 151, 51));
        label_4->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(400, 10, 91, 51));
        label_5->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        lineEdit_id = new QLineEdit(tab);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(160, 20, 121, 31));
        lineEdit_id->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: whit"));
        comboBox_type = new QComboBox(tab);
        comboBox_type->setObjectName(QStringLiteral("comboBox_type"));
        comboBox_type->setGeometry(QRect(140, 90, 91, 31));
        comboBox_type->setStyleSheet(QStringLiteral("border-image: whit"));
        comboBox_consommation = new QComboBox(tab);
        comboBox_consommation->setObjectName(QStringLiteral("comboBox_consommation"));
        comboBox_consommation->setGeometry(QRect(170, 240, 191, 41));
        comboBox_consommation->setStyleSheet(QStringLiteral("border-image: whit"));
        comboBox_film = new QComboBox(tab);
        comboBox_film->setObjectName(QStringLiteral("comboBox_film"));
        comboBox_film->setGeometry(QRect(520, 10, 101, 31));
        comboBox_film->setStyleSheet(QStringLiteral("border-image: whit"));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(400, 90, 91, 41));
        label_6->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        comboBox_cine = new QComboBox(tab);
        comboBox_cine->setObjectName(QStringLiteral("comboBox_cine"));
        comboBox_cine->setGeometry(QRect(520, 90, 101, 41));
        comboBox_cine->setStyleSheet(QStringLiteral("border-image: whit"));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(400, 170, 91, 51));
        label_7->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        comboBox_salle = new QComboBox(tab);
        comboBox_salle->setObjectName(QStringLiteral("comboBox_salle"));
        comboBox_salle->setGeometry(QRect(520, 170, 101, 41));
        comboBox_salle->setStyleSheet(QStringLiteral("border-image: whit"));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(400, 250, 91, 51));
        label_8->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        comboBox_horaire = new QComboBox(tab);
        comboBox_horaire->setObjectName(QStringLiteral("comboBox_horaire"));
        comboBox_horaire->setGeometry(QRect(520, 250, 101, 41));
        comboBox_horaire->setStyleSheet(QStringLiteral("border-image: whit"));
        pushButton_update_film_cine = new QPushButton(tab);
        pushButton_update_film_cine->setObjectName(QStringLiteral("pushButton_update_film_cine"));
        pushButton_update_film_cine->setGeometry(QRect(640, 10, 80, 51));
        pushButton_update_film_cine->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: url(:/new/prefix3/orange.png);"));
        pushButton_update_cine_salle = new QPushButton(tab);
        pushButton_update_cine_salle->setObjectName(QStringLiteral("pushButton_update_cine_salle"));
        pushButton_update_cine_salle->setGeometry(QRect(640, 90, 81, 51));
        pushButton_update_cine_salle->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: url(:/new/prefix3/orange.png);"));
        pushButton_update_salle_horaire = new QPushButton(tab);
        pushButton_update_salle_horaire->setObjectName(QStringLiteral("pushButton_update_salle_horaire"));
        pushButton_update_salle_horaire->setGeometry(QRect(640, 170, 81, 51));
        pushButton_update_salle_horaire->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: url(:/new/prefix3/orange.png);"));
        pushButton_update_horaire = new QPushButton(tab);
        pushButton_update_horaire->setObjectName(QStringLiteral("pushButton_update_horaire"));
        pushButton_update_horaire->setGeometry(QRect(640, 240, 81, 51));
        pushButton_update_horaire->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: url(:/new/prefix3/orange.png);"));
        pushButton_confirm_type = new QPushButton(tab);
        pushButton_confirm_type->setObjectName(QStringLiteral("pushButton_confirm_type"));
        pushButton_confirm_type->setGeometry(QRect(250, 80, 101, 51));
        pushButton_confirm_type->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: url(:/new/prefix3/orange.png);"));
        lineEdit_price = new QLineEdit(tab);
        lineEdit_price->setObjectName(QStringLiteral("lineEdit_price"));
        lineEdit_price->setGeometry(QRect(160, 170, 111, 31));
        lineEdit_price->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: whit"));
        lineEdit_price->setReadOnly(true);
        pushButton_confirm_ajout = new QPushButton(tab);
        pushButton_confirm_ajout->setObjectName(QStringLiteral("pushButton_confirm_ajout"));
        pushButton_confirm_ajout->setGeometry(QRect(280, 310, 171, 51));
        pushButton_confirm_ajout->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: url(:/new/prefix3/orange.png);"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        pushButton_confirm_aff_ticket = new QPushButton(tab_2);
        pushButton_confirm_aff_ticket->setObjectName(QStringLiteral("pushButton_confirm_aff_ticket"));
        pushButton_confirm_aff_ticket->setGeometry(QRect(310, 320, 121, 41));
        pushButton_confirm_aff_ticket->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: url(:/new/prefix3/orange.png);"));
        tableView_aff_ticket = new QTableView(tab_2);
        tableView_aff_ticket->setObjectName(QStringLiteral("tableView_aff_ticket"));
        tableView_aff_ticket->setGeometry(QRect(50, 40, 651, 251));
        tableView_aff_ticket->setStyleSheet(QStringLiteral("border-image: whit"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        lineEdit_id_delete = new QLineEdit(tab_3);
        lineEdit_id_delete->setObjectName(QStringLiteral("lineEdit_id_delete"));
        lineEdit_id_delete->setGeometry(QRect(200, 60, 371, 41));
        lineEdit_id_delete->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: whit"));
        pushButton_confirm = new QPushButton(tab_3);
        pushButton_confirm->setObjectName(QStringLiteral("pushButton_confirm"));
        pushButton_confirm->setGeometry(QRect(300, 160, 121, 41));
        pushButton_confirm->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: url(:/new/prefix3/orange.png);"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        lineEdit_id_update = new QLineEdit(tab_4);
        lineEdit_id_update->setObjectName(QStringLiteral("lineEdit_id_update"));
        lineEdit_id_update->setGeometry(QRect(70, 50, 291, 41));
        lineEdit_id_update->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: whit"));
        pushButton_verif_id_update = new QPushButton(tab_4);
        pushButton_verif_id_update->setObjectName(QStringLiteral("pushButton_verif_id_update"));
        pushButton_verif_id_update->setGeometry(QRect(460, 50, 91, 41));
        pushButton_verif_id_update->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: url(:/new/prefix3/orange.png);"));
        lineEdit = new QLineEdit(tab_4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 150, 191, 41));
        lineEdit->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        lineEdit_2 = new QLineEdit(tab_4);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(70, 230, 191, 41));
        lineEdit_2->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        lineEdit_3 = new QLineEdit(tab_4);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(70, 310, 191, 41));
        lineEdit_3->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        comboBox_update_type = new QComboBox(tab_4);
        comboBox_update_type->setObjectName(QStringLiteral("comboBox_update_type"));
        comboBox_update_type->setGeometry(QRect(300, 153, 131, 41));
        comboBox_update_type->setStyleSheet(QStringLiteral("border-image: whit"));
        comboBox_update_cons = new QComboBox(tab_4);
        comboBox_update_cons->setObjectName(QStringLiteral("comboBox_update_cons"));
        comboBox_update_cons->setGeometry(QRect(300, 310, 131, 41));
        comboBox_update_cons->setStyleSheet(QStringLiteral("border-image: whit"));
        lineEdit_price_update = new QLineEdit(tab_4);
        lineEdit_price_update->setObjectName(QStringLiteral("lineEdit_price_update"));
        lineEdit_price_update->setGeometry(QRect(300, 230, 131, 41));
        lineEdit_price_update->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: whit"));
        lineEdit_price_update->setReadOnly(true);
        pushButton_update_confi_type = new QPushButton(tab_4);
        pushButton_update_confi_type->setObjectName(QStringLiteral("pushButton_update_confi_type"));
        pushButton_update_confi_type->setGeometry(QRect(460, 150, 91, 41));
        pushButton_update_confi_type->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: url(:/new/prefix3/orange.png);"));
        pushButton_confi_update = new QPushButton(tab_4);
        pushButton_confi_update->setObjectName(QStringLiteral("pushButton_confi_update"));
        pushButton_confi_update->setGeometry(QRect(480, 310, 161, 41));
        pushButton_confi_update->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: url(:/new/prefix3/orange.png);"));
        tabWidget->addTab(tab_4, QString());

        retranslateUi(ticket_page);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ticket_page);
    } // setupUi

    void retranslateUi(QDialog *ticket_page)
    {
        ticket_page->setWindowTitle(QApplication::translate("ticket_page", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ticket_page", "Gestion ticket", Q_NULLPTR));
        label->setText(QApplication::translate("ticket_page", "ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("ticket_page", "Price", Q_NULLPTR));
        label_3->setText(QApplication::translate("ticket_page", "Type", Q_NULLPTR));
        label_4->setText(QApplication::translate("ticket_page", "Consommation", Q_NULLPTR));
        label_5->setText(QApplication::translate("ticket_page", "Film", Q_NULLPTR));
        label_6->setText(QApplication::translate("ticket_page", "Cine", Q_NULLPTR));
        label_7->setText(QApplication::translate("ticket_page", "Salle", Q_NULLPTR));
        label_8->setText(QApplication::translate("ticket_page", "Horaire", Q_NULLPTR));
        pushButton_update_film_cine->setText(QApplication::translate("ticket_page", "Search", Q_NULLPTR));
        pushButton_update_cine_salle->setText(QApplication::translate("ticket_page", "Search", Q_NULLPTR));
        pushButton_update_salle_horaire->setText(QApplication::translate("ticket_page", "Search", Q_NULLPTR));
        pushButton_update_horaire->setText(QApplication::translate("ticket_page", "Search", Q_NULLPTR));
        pushButton_confirm_type->setText(QApplication::translate("ticket_page", "Confirm", Q_NULLPTR));
        pushButton_confirm_ajout->setText(QApplication::translate("ticket_page", "Confirm", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ticket_page", "Ajout", Q_NULLPTR));
        pushButton_confirm_aff_ticket->setText(QApplication::translate("ticket_page", "Afficher", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ticket_page", "Affichage", Q_NULLPTR));
        lineEdit_id_delete->setText(QApplication::translate("ticket_page", "Enter ID", Q_NULLPTR));
        pushButton_confirm->setText(QApplication::translate("ticket_page", "Confirm", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ticket_page", "Suppression", Q_NULLPTR));
        lineEdit_id_update->setText(QApplication::translate("ticket_page", "Insert ID", Q_NULLPTR));
        pushButton_verif_id_update->setText(QApplication::translate("ticket_page", "Search", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("ticket_page", "Type", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("ticket_page", "Price", Q_NULLPTR));
        lineEdit_3->setText(QApplication::translate("ticket_page", "Consommation", Q_NULLPTR));
        pushButton_update_confi_type->setText(QApplication::translate("ticket_page", "Confirm", Q_NULLPTR));
        pushButton_confi_update->setText(QApplication::translate("ticket_page", "Confirm update", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("ticket_page", "Modificaton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ticket_page: public Ui_ticket_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKET_PAGE_H
