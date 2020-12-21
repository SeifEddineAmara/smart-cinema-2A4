/********************************************************************************
** Form generated from reading UI file 'client_page.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_PAGE_H
#define UI_CLIENT_PAGE_H

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

class Ui_client_page
{
public:
    QGroupBox *groupBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *name;
    QLabel *lastname;
    QLabel *id;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_last_name;
    QLineEdit *lineEdit_id;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_number;
    QLineEdit *lineEdit_email;
    QLineEdit *lineEdit_age;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QWidget *tab_2;
    QTableView *tableView;
    QPushButton *pushButton_2;
    QWidget *tab_3;
    QLineEdit *lineEdit_id_edit;
    QPushButton *pushButton_confi_edit;
    QLabel *id_2;
    QWidget *tab_4;
    QLineEdit *lineEdit_id_delete;
    QPushButton *pushButton_conif_delete;
    QLabel *id_3;
    QWidget *tab_5;
    QPushButton *pushButton_confirm_tri;
    QLineEdit *lineEdit_id_tri;
    QTableView *tableView_trie_client;
    QWidget *tab_6;
    QPushButton *pushButton_search;
    QLineEdit *lineEdit_search_id;
    QLineEdit *lineEdit_search_name;
    QTableView *tableView_search;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *client_page)
    {
        if (client_page->objectName().isEmpty())
            client_page->setObjectName(QStringLiteral("client_page"));
        client_page->resize(919, 495);
        QFont font;
        font.setPointSize(14);
        client_page->setFont(font);
        client_page->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/beige.jpg);"));
        groupBox = new QGroupBox(client_page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 881, 481));
        groupBox->setFont(font);
        groupBox->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        tabWidget = new QTabWidget(groupBox);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 40, 841, 431));
        QFont font1;
        font1.setPointSize(9);
        tabWidget->setFont(font1);
        tabWidget->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix2/marron.jpg);"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        name = new QLabel(tab);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(40, 20, 121, 51));
        name->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"\n"
""));
        lastname = new QLabel(tab);
        lastname->setObjectName(QStringLiteral("lastname"));
        lastname->setGeometry(QRect(40, 110, 121, 51));
        lastname->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
""));
        id = new QLabel(tab);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(40, 200, 121, 51));
        id->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
""));
        lineEdit_name = new QLineEdit(tab);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(200, 20, 113, 51));
        lineEdit_name->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: whit"));
        lineEdit_last_name = new QLineEdit(tab);
        lineEdit_last_name->setObjectName(QStringLiteral("lineEdit_last_name"));
        lineEdit_last_name->setGeometry(QRect(200, 110, 113, 51));
        lineEdit_last_name->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: whit"));
        lineEdit_id = new QLineEdit(tab);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(200, 200, 113, 51));
        lineEdit_id->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: whit"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(390, 20, 121, 51));
        label_4->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
""));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(390, 200, 121, 51));
        label_5->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
""));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(390, 110, 121, 51));
        label_6->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
""));
        lineEdit_number = new QLineEdit(tab);
        lineEdit_number->setObjectName(QStringLiteral("lineEdit_number"));
        lineEdit_number->setGeometry(QRect(560, 30, 113, 51));
        lineEdit_number->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: whit"));
        lineEdit_email = new QLineEdit(tab);
        lineEdit_email->setObjectName(QStringLiteral("lineEdit_email"));
        lineEdit_email->setGeometry(QRect(560, 110, 113, 51));
        lineEdit_email->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: whit"));
        lineEdit_age = new QLineEdit(tab);
        lineEdit_age->setObjectName(QStringLiteral("lineEdit_age"));
        lineEdit_age->setGeometry(QRect(560, 190, 113, 51));
        lineEdit_age->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: whit"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 280, 81, 51));
        label->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
""));
        comboBox = new QComboBox(tab);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(200, 280, 171, 51));
        comboBox->setStyleSheet(QStringLiteral("border-image: whit"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(400, 350, 161, 41));
        pushButton->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: url(:/new/prefix3/orange.png);"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableView = new QTableView(tab_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 20, 801, 281));
        tableView->setStyleSheet(QStringLiteral("border-image: whit"));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 330, 191, 41));
        pushButton_2->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: url(:/new/prefix3/orange.png);"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        lineEdit_id_edit = new QLineEdit(tab_3);
        lineEdit_id_edit->setObjectName(QStringLiteral("lineEdit_id_edit"));
        lineEdit_id_edit->setGeometry(QRect(200, 80, 381, 41));
        lineEdit_id_edit->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: whit"));
        pushButton_confi_edit = new QPushButton(tab_3);
        pushButton_confi_edit->setObjectName(QStringLiteral("pushButton_confi_edit"));
        pushButton_confi_edit->setGeometry(QRect(280, 180, 211, 41));
        pushButton_confi_edit->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: url(:/new/prefix3/orange.png);"));
        id_2 = new QLabel(tab_3);
        id_2->setObjectName(QStringLiteral("id_2"));
        id_2->setGeometry(QRect(140, 70, 51, 51));
        id_2->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
""));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        lineEdit_id_delete = new QLineEdit(tab_4);
        lineEdit_id_delete->setObjectName(QStringLiteral("lineEdit_id_delete"));
        lineEdit_id_delete->setGeometry(QRect(240, 40, 381, 51));
        lineEdit_id_delete->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: whit"));
        pushButton_conif_delete = new QPushButton(tab_4);
        pushButton_conif_delete->setObjectName(QStringLiteral("pushButton_conif_delete"));
        pushButton_conif_delete->setGeometry(QRect(320, 150, 201, 41));
        pushButton_conif_delete->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: url(:/new/prefix3/orange.png);"));
        id_3 = new QLabel(tab_4);
        id_3->setObjectName(QStringLiteral("id_3"));
        id_3->setGeometry(QRect(160, 40, 51, 51));
        id_3->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
""));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        pushButton_confirm_tri = new QPushButton(tab_5);
        pushButton_confirm_tri->setObjectName(QStringLiteral("pushButton_confirm_tri"));
        pushButton_confirm_tri->setGeometry(QRect(570, 40, 131, 51));
        pushButton_confirm_tri->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: url(:/new/prefix3/orange.png);"));
        lineEdit_id_tri = new QLineEdit(tab_5);
        lineEdit_id_tri->setObjectName(QStringLiteral("lineEdit_id_tri"));
        lineEdit_id_tri->setGeometry(QRect(100, 40, 401, 51));
        lineEdit_id_tri->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: whit"));
        tableView_trie_client = new QTableView(tab_5);
        tableView_trie_client->setObjectName(QStringLiteral("tableView_trie_client"));
        tableView_trie_client->setGeometry(QRect(30, 110, 781, 281));
        tableView_trie_client->setStyleSheet(QStringLiteral("border-image: whit"));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        pushButton_search = new QPushButton(tab_6);
        pushButton_search->setObjectName(QStringLiteral("pushButton_search"));
        pushButton_search->setGeometry(QRect(600, 60, 131, 51));
        pushButton_search->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: url(:/new/prefix3/orange.png);"));
        lineEdit_search_id = new QLineEdit(tab_6);
        lineEdit_search_id->setObjectName(QStringLiteral("lineEdit_search_id"));
        lineEdit_search_id->setGeometry(QRect(190, 30, 281, 41));
        lineEdit_search_id->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 127);\n"
"border-image: whit"));
        lineEdit_search_name = new QLineEdit(tab_6);
        lineEdit_search_name->setObjectName(QStringLiteral("lineEdit_search_name"));
        lineEdit_search_name->setGeometry(QRect(190, 110, 281, 41));
        lineEdit_search_name->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 127);\n"
"border-image: whit"));
        tableView_search = new QTableView(tab_6);
        tableView_search->setObjectName(QStringLiteral("tableView_search"));
        tableView_search->setGeometry(QRect(30, 190, 781, 201));
        tableView_search->setStyleSheet(QStringLiteral("border-image: whit"));
        label_2 = new QLabel(tab_6);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 30, 121, 31));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(tab_6);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 120, 161, 21));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral(""));
        tabWidget->addTab(tab_6, QString());

        retranslateUi(client_page);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(client_page);
    } // setupUi

    void retranslateUi(QDialog *client_page)
    {
        client_page->setWindowTitle(QApplication::translate("client_page", "Smart cinema", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("client_page", "Gestion client", Q_NULLPTR));
        name->setText(QApplication::translate("client_page", "Name :", Q_NULLPTR));
        lastname->setText(QApplication::translate("client_page", "Last name :", Q_NULLPTR));
        id->setText(QApplication::translate("client_page", "ID :", Q_NULLPTR));
        label_4->setText(QApplication::translate("client_page", "Nombre", Q_NULLPTR));
        label_5->setText(QApplication::translate("client_page", "Age", Q_NULLPTR));
        label_6->setText(QApplication::translate("client_page", "Email", Q_NULLPTR));
        label->setText(QApplication::translate("client_page", "Type :", Q_NULLPTR));
        pushButton->setText(QApplication::translate("client_page", "Confirmer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("client_page", "Ajout", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("client_page", "Afficher", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("client_page", "Affichage", Q_NULLPTR));
        pushButton_confi_edit->setText(QApplication::translate("client_page", "Rechercher", Q_NULLPTR));
        id_2->setText(QApplication::translate("client_page", "ID :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("client_page", "Modifcation", Q_NULLPTR));
        lineEdit_id_delete->setText(QString());
        pushButton_conif_delete->setText(QApplication::translate("client_page", "Supprimer", Q_NULLPTR));
        id_3->setText(QApplication::translate("client_page", "ID :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("client_page", "Suppression", Q_NULLPTR));
        pushButton_confirm_tri->setText(QApplication::translate("client_page", "Trier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("client_page", "Tri", Q_NULLPTR));
        pushButton_search->setText(QApplication::translate("client_page", "Rechercher", Q_NULLPTR));
        lineEdit_search_id->setText(QString());
        lineEdit_search_name->setText(QString());
        label_2->setText(QApplication::translate("client_page", "Cliquer ID ici :", Q_NULLPTR));
        label_3->setText(QApplication::translate("client_page", "Cliquer name ici :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("client_page", "Recherche", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class client_page: public Ui_client_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_PAGE_H
