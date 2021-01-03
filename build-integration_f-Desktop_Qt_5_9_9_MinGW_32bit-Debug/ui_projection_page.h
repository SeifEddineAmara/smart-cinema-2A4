/********************************************************************************
** Form generated from reading UI file 'projection_page.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTION_PAGE_H
#define UI_PROJECTION_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_projection_page
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLineEdit *lineEdit_id;
    QLabel *label_2;
    QComboBox *comboBox_film;
    QPushButton *pushButton_search_film;
    QLabel *label_3;
    QComboBox *comboBox_cine;
    QPushButton *pushButton_search_cine;
    QLabel *label_4;
    QComboBox *comboBox_salle;
    QPushButton *pushButton_search_salle;
    QLabel *label_5;
    QLineEdit *lineEdit__time;
    QPushButton *pushButton_conf;
    QTimeEdit *timeEdit_ajout;
    QWidget *tab_2;
    QTableView *tableView_affi_projec;
    QPushButton *pushButton;
    QWidget *tab_3;
    QLineEdit *lineEdit_delete;
    QPushButton *pushButton_2;
    QWidget *tab_4;
    QLineEdit *lineEdit_edit_id;
    QPushButton *pushButton_confirm_edit;
    QLineEdit *lineEdit_edit_horaire;
    QLabel *label_6;
    QLabel *label_7;
    QTimeEdit *timeEdit_update;

    void setupUi(QDialog *projection_page)
    {
        if (projection_page->objectName().isEmpty())
            projection_page->setObjectName(QStringLiteral("projection_page"));
        projection_page->resize(936, 499);
        projection_page->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/beige.jpg);"));
        tabWidget = new QTabWidget(projection_page);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 911, 451));
        QFont font;
        font.setPointSize(10);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix2/marron.jpg);"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 50, 61, 41));
        label->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        lineEdit_id = new QLineEdit(tab);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(190, 50, 161, 41));
        lineEdit_id->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: whit"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 110, 91, 41));
        label_2->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        comboBox_film = new QComboBox(tab);
        comboBox_film->setObjectName(QStringLiteral("comboBox_film"));
        comboBox_film->setGeometry(QRect(190, 110, 161, 41));
        comboBox_film->setStyleSheet(QStringLiteral("border-image: whit"));
        pushButton_search_film = new QPushButton(tab);
        pushButton_search_film->setObjectName(QStringLiteral("pushButton_search_film"));
        pushButton_search_film->setGeometry(QRect(390, 110, 121, 41));
        pushButton_search_film->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/orange.png);\n"
"border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 170, 91, 41));
        label_3->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        comboBox_cine = new QComboBox(tab);
        comboBox_cine->setObjectName(QStringLiteral("comboBox_cine"));
        comboBox_cine->setGeometry(QRect(190, 170, 161, 41));
        comboBox_cine->setStyleSheet(QStringLiteral("border-image: whit"));
        pushButton_search_cine = new QPushButton(tab);
        pushButton_search_cine->setObjectName(QStringLiteral("pushButton_search_cine"));
        pushButton_search_cine->setGeometry(QRect(390, 170, 121, 41));
        pushButton_search_cine->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/orange.png);\n"
"border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 230, 91, 41));
        label_4->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        comboBox_salle = new QComboBox(tab);
        comboBox_salle->setObjectName(QStringLiteral("comboBox_salle"));
        comboBox_salle->setGeometry(QRect(190, 230, 161, 41));
        comboBox_salle->setStyleSheet(QStringLiteral("border-image: whit"));
        pushButton_search_salle = new QPushButton(tab);
        pushButton_search_salle->setObjectName(QStringLiteral("pushButton_search_salle"));
        pushButton_search_salle->setGeometry(QRect(390, 230, 121, 41));
        pushButton_search_salle->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/orange.png);\n"
"border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 290, 91, 41));
        label_5->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        lineEdit__time = new QLineEdit(tab);
        lineEdit__time->setObjectName(QStringLiteral("lineEdit__time"));
        lineEdit__time->setGeometry(QRect(190, 290, 161, 41));
        lineEdit__time->setStyleSheet(QLatin1String("border-radius : 10px ;\n"
"color: rgb(0, 0, 127);\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"border-image: whit"));
        pushButton_conf = new QPushButton(tab);
        pushButton_conf->setObjectName(QStringLiteral("pushButton_conf"));
        pushButton_conf->setGeometry(QRect(380, 360, 191, 51));
        pushButton_conf->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/orange.png);\n"
"border-radius : 10px ;\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        timeEdit_ajout = new QTimeEdit(tab);
        timeEdit_ajout->setObjectName(QStringLiteral("timeEdit_ajout"));
        timeEdit_ajout->setGeometry(QRect(400, 310, 118, 22));
        timeEdit_ajout->setStyleSheet(QStringLiteral("border-image: whit"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableView_affi_projec = new QTableView(tab_2);
        tableView_affi_projec->setObjectName(QStringLiteral("tableView_affi_projec"));
        tableView_affi_projec->setGeometry(QRect(20, 20, 861, 331));
        tableView_affi_projec->setStyleSheet(QStringLiteral("border-image: whit"));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(360, 370, 181, 41));
        QFont font1;
        font1.setPointSize(14);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/orange.png);\n"
""));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        lineEdit_delete = new QLineEdit(tab_3);
        lineEdit_delete->setObjectName(QStringLiteral("lineEdit_delete"));
        lineEdit_delete->setGeometry(QRect(100, 100, 311, 41));
        lineEdit_delete->setStyleSheet(QStringLiteral("border-image: whit"));
        pushButton_2 = new QPushButton(tab_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(470, 90, 151, 61));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/orange.png);\n"
""));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        lineEdit_edit_id = new QLineEdit(tab_4);
        lineEdit_edit_id->setObjectName(QStringLiteral("lineEdit_edit_id"));
        lineEdit_edit_id->setGeometry(QRect(300, 90, 291, 41));
        lineEdit_edit_id->setStyleSheet(QStringLiteral("border-image: whit"));
        pushButton_confirm_edit = new QPushButton(tab_4);
        pushButton_confirm_edit->setObjectName(QStringLiteral("pushButton_confirm_edit"));
        pushButton_confirm_edit->setGeometry(QRect(290, 280, 151, 41));
        pushButton_confirm_edit->setFont(font1);
        pushButton_confirm_edit->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/orange.png);\n"
""));
        lineEdit_edit_horaire = new QLineEdit(tab_4);
        lineEdit_edit_horaire->setObjectName(QStringLiteral("lineEdit_edit_horaire"));
        lineEdit_edit_horaire->setGeometry(QRect(300, 190, 291, 41));
        lineEdit_edit_horaire->setStyleSheet(QStringLiteral("border-image: whit"));
        label_6 = new QLabel(tab_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(190, 90, 61, 41));
        label_6->setFont(font1);
        label_7 = new QLabel(tab_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(120, 190, 171, 41));
        label_7->setFont(font1);
        timeEdit_update = new QTimeEdit(tab_4);
        timeEdit_update->setObjectName(QStringLiteral("timeEdit_update"));
        timeEdit_update->setGeometry(QRect(600, 200, 118, 22));
        timeEdit_update->setStyleSheet(QStringLiteral("border-image: whit"));
        tabWidget->addTab(tab_4, QString());

        retranslateUi(projection_page);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(projection_page);
    } // setupUi

    void retranslateUi(QDialog *projection_page)
    {
        projection_page->setWindowTitle(QApplication::translate("projection_page", "Smart cinema", Q_NULLPTR));
        label->setText(QApplication::translate("projection_page", "ID :", Q_NULLPTR));
        label_2->setText(QApplication::translate("projection_page", "Films :", Q_NULLPTR));
        pushButton_search_film->setText(QApplication::translate("projection_page", "Rechercher", Q_NULLPTR));
        label_3->setText(QApplication::translate("projection_page", "Cinema :", Q_NULLPTR));
        pushButton_search_cine->setText(QApplication::translate("projection_page", "Rechercher", Q_NULLPTR));
        label_4->setText(QApplication::translate("projection_page", "Salle :", Q_NULLPTR));
        pushButton_search_salle->setText(QApplication::translate("projection_page", "Rechercher", Q_NULLPTR));
        label_5->setText(QApplication::translate("projection_page", "Temps :", Q_NULLPTR));
        pushButton_conf->setText(QApplication::translate("projection_page", "Confimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("projection_page", "Ajout", Q_NULLPTR));
        pushButton->setText(QApplication::translate("projection_page", "Confirmer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("projection_page", "Affichage", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("projection_page", "Supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("projection_page", "Suppression", Q_NULLPTR));
        pushButton_confirm_edit->setText(QApplication::translate("projection_page", "Modifier", Q_NULLPTR));
        label_6->setText(QApplication::translate("projection_page", "ID :", Q_NULLPTR));
        label_7->setText(QApplication::translate("projection_page", "Nouveau  horaire :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("projection_page", "Modification", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class projection_page: public Ui_projection_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTION_PAGE_H
