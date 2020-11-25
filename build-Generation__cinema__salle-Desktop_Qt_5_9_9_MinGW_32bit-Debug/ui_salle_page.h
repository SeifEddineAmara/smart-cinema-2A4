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
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_salle_page
{
public:
    QScrollBar *verticalScrollBar;
    QScrollBar *horizontalScrollBar;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *Button_rechercher_ajout_cinema;
    QWidget *tab_2;
    QPushButton *Button_afficher_liste;
    QTableView *tableView;
    QWidget *tab_3;
    QWidget *tab_4;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit_4;
    QPushButton *Button_supprimer_cinema;

    void setupUi(QDialog *salle_page)
    {
        if (salle_page->objectName().isEmpty())
            salle_page->setObjectName(QStringLiteral("salle_page"));
        salle_page->resize(967, 581);
        salle_page->setStyleSheet(QStringLiteral("border-image: url(:/photo/imageload/cinema.jpg);"));
        verticalScrollBar = new QScrollBar(salle_page);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(950, -1, 20, 581));
        verticalScrollBar->setOrientation(Qt::Vertical);
        horizontalScrollBar = new QScrollBar(salle_page);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(0, 560, 951, 16));
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(salle_page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 911, 511));
        QFont font;
        font.setPointSize(18);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QLatin1String("border-image: url(:/photo/imageload/cinema.jpg);\n"
"color:red"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(710, 0, 172, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"font: 75 14pt \"MS Shell Dlg 2\";"));
        tabWidget = new QTabWidget(groupBox);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 50, 831, 421));
        tabWidget->setStyleSheet(QStringLiteral("border-image: url(:/photo1/imageload/6.jpg);"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 40, 151, 31));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"color:red\n"
""));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 120, 211, 31));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"color:red\n"
""));
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 200, 211, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(9);
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"font: 75 12pt \"MS Shell Dlg 2\";\n"
"color:red\n"
""));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(240, 40, 491, 31));
        QFont font3;
        font3.setPointSize(14);
        lineEdit->setFont(font3);
        lineEdit->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"color:rgb(255, 0, 0)"));
        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(240, 120, 491, 31));
        lineEdit_2->setFont(font3);
        lineEdit_2->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"color:rgb(255, 0, 0)"));
        lineEdit_3 = new QLineEdit(tab);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(240, 200, 491, 31));
        lineEdit_3->setFont(font3);
        lineEdit_3->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"color:rgb(255, 0, 0)"));
        Button_rechercher_ajout_cinema = new QPushButton(tab);
        Button_rechercher_ajout_cinema->setObjectName(QStringLiteral("Button_rechercher_ajout_cinema"));
        Button_rechercher_ajout_cinema->setGeometry(QRect(290, 290, 201, 41));
        QFont font4;
        font4.setPointSize(18);
        font4.setBold(true);
        font4.setWeight(75);
        Button_rechercher_ajout_cinema->setFont(font4);
        Button_rechercher_ajout_cinema->setStyleSheet(QStringLiteral("border-image: url(:/photo2/imageload/marron.jpg);"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        Button_afficher_liste = new QPushButton(tab_2);
        Button_afficher_liste->setObjectName(QStringLiteral("Button_afficher_liste"));
        Button_afficher_liste->setGeometry(QRect(270, 20, 201, 31));
        Button_afficher_liste->setFont(font4);
        Button_afficher_liste->setStyleSheet(QStringLiteral("border-image: url(:/photo2/imageload/marron.jpg);"));
        tableView = new QTableView(tab_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(40, 90, 731, 251));
        tableView->setStyleSheet(QStringLiteral("border-image:white"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        pushButton_5 = new QPushButton(tab_4);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(90, 40, 121, 31));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"color:red\n"
""));
        lineEdit_4 = new QLineEdit(tab_4);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(230, 40, 491, 31));
        lineEdit_4->setFont(font3);
        lineEdit_4->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"color:rgb(255, 0, 0)"));
        Button_supprimer_cinema = new QPushButton(tab_4);
        Button_supprimer_cinema->setObjectName(QStringLiteral("Button_supprimer_cinema"));
        Button_supprimer_cinema->setGeometry(QRect(280, 160, 201, 41));
        Button_supprimer_cinema->setFont(font4);
        Button_supprimer_cinema->setStyleSheet(QStringLiteral("border-image: url(:/photo2/imageload/marron.jpg);"));
        tabWidget->addTab(tab_4, QString());
        groupBox->raise();
        verticalScrollBar->raise();
        horizontalScrollBar->raise();

        retranslateUi(salle_page);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(salle_page);
    } // setupUi

    void retranslateUi(QDialog *salle_page)
    {
        salle_page->setWindowTitle(QApplication::translate("salle_page", "Watch & Roll", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("salle_page", "Gestion de salle", Q_NULLPTR));
        pushButton->setText(QApplication::translate("salle_page", "\342\206\222 Vers cinema", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("salle_page", "Num\303\251ro :", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("salle_page", "Nombre de place :", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("salle_page", "Nombre de place disponible :", Q_NULLPTR));
        lineEdit->setText(QString());
        lineEdit_2->setText(QString());
        lineEdit_3->setText(QString());
        Button_rechercher_ajout_cinema->setText(QApplication::translate("salle_page", "Ajouter", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("salle_page", "Ajouter salle", Q_NULLPTR));
        Button_afficher_liste->setText(QApplication::translate("salle_page", "Afficher", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("salle_page", "Afficher salle", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("salle_page", "Modifier salle", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("salle_page", "Num\303\251ro :", Q_NULLPTR));
        lineEdit_4->setText(QString());
        Button_supprimer_cinema->setText(QApplication::translate("salle_page", "Supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("salle_page", "Supprimer salle", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class salle_page: public Ui_salle_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALLE_PAGE_H
