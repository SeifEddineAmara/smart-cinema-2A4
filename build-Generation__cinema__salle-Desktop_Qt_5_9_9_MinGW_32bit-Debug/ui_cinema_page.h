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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cinema_page
{
public:
    QWidget *centralwidget;
    QScrollBar *verticalScrollBar;
    QGroupBox *groupBox;
    QTabWidget *tabWidget;
    QWidget *Cinema;
    QLabel *label_15;
    QPushButton *COLISEE;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *tab_3;
    QTableView *tableView;
    QPushButton *Button_afficher_liste;
    QWidget *tab_6;
    QLabel *label_14;
    QLineEdit *lineEdit_reference_rechercher;
    QPushButton *Button_rechercher;
    QTableView *tableView_2;
    QLabel *label_16;
    QLineEdit *lineEdit_nom_rechercher;
    QLabel *label_17;
    QLineEdit *lineEdit_destination_rechercher;
    QWidget *widget;
    QLabel *label;
    QLineEdit *lineEdit_nom;
    QPushButton *Button_rechercher_ajout_cinema;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_destination;
    QLineEdit *lineEdit_reference;
    QDateEdit *dateEdit;
    QSpinBox *spinBox;
    QWidget *tab_5;
    QLabel *label_9;
    QLineEdit *lineEdit_nom_1;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *lineEdit_reference_1;
    QLineEdit *lineEdit_destination_1;
    QPushButton *Button_modifier;
    QTableView *tableView_3;
    QLineEdit *lineEdit_date_1;
    QLineEdit *lineEdit_nb_1;
    QPushButton *Button_afficher_liste_2;
    QWidget *tab_4;
    QLabel *label_8;
    QLineEdit *lineEdit_suppression_reference;
    QPushButton *Button_supprimer_cinema;
    QWidget *tab_2;
    QTextEdit *textEdit;
    QLabel *label_2;
    QWidget *tab;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *Button_entrer_salle;
    QLabel *label_time;
    QScrollBar *horizontalScrollBar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Cinema_page)
    {
        if (Cinema_page->objectName().isEmpty())
            Cinema_page->setObjectName(QStringLiteral("Cinema_page"));
        Cinema_page->resize(1062, 720);
        Cinema_page->setStyleSheet(QLatin1String("\n"
"border-image: url(:/photo/imageload/cinema.jpg);"));
        centralwidget = new QWidget(Cinema_page);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalScrollBar = new QScrollBar(centralwidget);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(1040, 0, 20, 681));
        verticalScrollBar->setOrientation(Qt::Vertical);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 991, 631));
        QFont font;
        font.setPointSize(18);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QLatin1String("border-image: url(:/photo/imageload/cinema.jpg);\n"
"\n"
"color:red\n"
""));
        tabWidget = new QTabWidget(groupBox);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 80, 971, 531));
        tabWidget->setStyleSheet(QStringLiteral("border-image: url(:/photo1/imageload/7.jpg);"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setMovable(true);
        Cinema = new QWidget();
        Cinema->setObjectName(QStringLiteral("Cinema"));
        label_15 = new QLabel(Cinema);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(30, 50, 831, 401));
        COLISEE = new QPushButton(Cinema);
        COLISEE->setObjectName(QStringLiteral("COLISEE"));
        COLISEE->setGeometry(QRect(820, 0, 151, 521));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        COLISEE->setFont(font1);
        COLISEE->setStyleSheet(QStringLiteral("border-image: url(:/nameofcinema/imageload/colisse.jpg);"));
        pushButton_2 = new QPushButton(Cinema);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(670, 0, 151, 521));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/nameofcinema/imageload/magestic.jpg);"));
        pushButton_3 = new QPushButton(Cinema);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(520, 0, 151, 511));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QStringLiteral("border-image: url(:/nameofcinema/imageload/pathe-130219-v.jpg);"));
        tabWidget->addTab(Cinema, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tableView = new QTableView(tab_3);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(360, 20, 591, 461));
        tableView->setStyleSheet(QStringLiteral("border-image:white"));
        Button_afficher_liste = new QPushButton(tab_3);
        Button_afficher_liste->setObjectName(QStringLiteral("Button_afficher_liste"));
        Button_afficher_liste->setGeometry(QRect(10, 20, 351, 461));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setWeight(75);
        Button_afficher_liste->setFont(font2);
        Button_afficher_liste->setStyleSheet(QStringLiteral("border-image: url(:/photo1/imageload/6.jpg);"));
        tabWidget->addTab(tab_3, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        label_14 = new QLabel(tab_6);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 20, 141, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font3.setPointSize(18);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        label_14->setFont(font3);
        label_14->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"font: 18pt \"MS Shell Dlg 2\";"));
        lineEdit_reference_rechercher = new QLineEdit(tab_6);
        lineEdit_reference_rechercher->setObjectName(QStringLiteral("lineEdit_reference_rechercher"));
        lineEdit_reference_rechercher->setGeometry(QRect(10, 70, 141, 31));
        QFont font4;
        font4.setPointSize(14);
        lineEdit_reference_rechercher->setFont(font4);
        lineEdit_reference_rechercher->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"color:rgb(255, 0, 0) \n"
""));
        lineEdit_reference_rechercher->setMaxLength(4);
        Button_rechercher = new QPushButton(tab_6);
        Button_rechercher->setObjectName(QStringLiteral("Button_rechercher"));
        Button_rechercher->setGeometry(QRect(460, 380, 201, 61));
        Button_rechercher->setFont(font2);
        Button_rechercher->setStyleSheet(QStringLiteral("border-image: url(:/photo2/imageload/marron.jpg);"));
        tableView_2 = new QTableView(tab_6);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(190, 20, 691, 331));
        tableView_2->setStyleSheet(QStringLiteral("border-image:white"));
        label_16 = new QLabel(tab_6);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 140, 141, 31));
        label_16->setFont(font3);
        label_16->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"font: 18pt \"MS Shell Dlg 2\";"));
        lineEdit_nom_rechercher = new QLineEdit(tab_6);
        lineEdit_nom_rechercher->setObjectName(QStringLiteral("lineEdit_nom_rechercher"));
        lineEdit_nom_rechercher->setGeometry(QRect(10, 190, 141, 31));
        lineEdit_nom_rechercher->setFont(font4);
        lineEdit_nom_rechercher->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"color:rgb(255, 0, 0) \n"
""));
        lineEdit_nom_rechercher->setMaxLength(4);
        label_17 = new QLabel(tab_6);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 260, 141, 31));
        label_17->setFont(font3);
        label_17->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"font: 18pt \"MS Shell Dlg 2\";"));
        lineEdit_destination_rechercher = new QLineEdit(tab_6);
        lineEdit_destination_rechercher->setObjectName(QStringLiteral("lineEdit_destination_rechercher"));
        lineEdit_destination_rechercher->setGeometry(QRect(10, 320, 141, 31));
        lineEdit_destination_rechercher->setFont(font4);
        lineEdit_destination_rechercher->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"color:rgb(255, 0, 0) \n"
""));
        lineEdit_destination_rechercher->setMaxLength(4);
        tabWidget->addTab(tab_6, QString());
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 100, 141, 31));
        label->setFont(font3);
        label->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"font: 18pt \"MS Shell Dlg 2\";"));
        lineEdit_nom = new QLineEdit(widget);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(280, 30, 421, 31));
        lineEdit_nom->setFont(font4);
        lineEdit_nom->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"color:rgb(255, 0, 0) \n"
""));
        Button_rechercher_ajout_cinema = new QPushButton(widget);
        Button_rechercher_ajout_cinema->setObjectName(QStringLiteral("Button_rechercher_ajout_cinema"));
        Button_rechercher_ajout_cinema->setGeometry(QRect(340, 380, 201, 51));
        Button_rechercher_ajout_cinema->setFont(font2);
        Button_rechercher_ajout_cinema->setStyleSheet(QStringLiteral("border-image: url(:/photo2/imageload/marron.jpg);"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 170, 201, 31));
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"color:red"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 240, 141, 31));
        label_5->setFont(font);
        label_5->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"color:red"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 300, 221, 31));
        label_6->setFont(font);
        label_6->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"color:red"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(170, 30, 81, 31));
        label_7->setFont(font3);
        label_7->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"font: 18pt \"MS Shell Dlg 2\";"));
        lineEdit_destination = new QLineEdit(widget);
        lineEdit_destination->setObjectName(QStringLiteral("lineEdit_destination"));
        lineEdit_destination->setGeometry(QRect(280, 240, 421, 31));
        lineEdit_destination->setFont(font4);
        lineEdit_destination->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"color:rgb(255, 0, 0) \n"
""));
        lineEdit_reference = new QLineEdit(widget);
        lineEdit_reference->setObjectName(QStringLiteral("lineEdit_reference"));
        lineEdit_reference->setGeometry(QRect(280, 100, 421, 31));
        lineEdit_reference->setFont(font4);
        lineEdit_reference->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"color:rgb(255, 0, 0) \n"
""));
        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(280, 170, 431, 31));
        dateEdit->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(280, 300, 421, 31));
        spinBox->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        tabWidget->addTab(widget, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        label_9 = new QLabel(tab_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 110, 81, 31));
        label_9->setFont(font3);
        label_9->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"font: 18pt \"MS Shell Dlg 2\";"));
        lineEdit_nom_1 = new QLineEdit(tab_5);
        lineEdit_nom_1->setObjectName(QStringLiteral("lineEdit_nom_1"));
        lineEdit_nom_1->setGeometry(QRect(110, 110, 111, 31));
        lineEdit_nom_1->setFont(font4);
        lineEdit_nom_1->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"color:rgb(255, 0, 0) \n"
""));
        label_10 = new QLabel(tab_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 30, 131, 31));
        label_10->setFont(font3);
        label_10->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"font: 18pt \"MS Shell Dlg 2\";"));
        label_11 = new QLabel(tab_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 190, 201, 31));
        label_11->setFont(font);
        label_11->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"color:red"));
        label_12 = new QLabel(tab_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 270, 141, 31));
        label_12->setFont(font);
        label_12->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"color:red"));
        label_13 = new QLabel(tab_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 350, 221, 31));
        label_13->setFont(font);
        label_13->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"color:red"));
        lineEdit_reference_1 = new QLineEdit(tab_5);
        lineEdit_reference_1->setObjectName(QStringLiteral("lineEdit_reference_1"));
        lineEdit_reference_1->setGeometry(QRect(160, 30, 121, 31));
        lineEdit_reference_1->setFont(font4);
        lineEdit_reference_1->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"color:rgb(255, 0, 0) \n"
""));
        lineEdit_destination_1 = new QLineEdit(tab_5);
        lineEdit_destination_1->setObjectName(QStringLiteral("lineEdit_destination_1"));
        lineEdit_destination_1->setGeometry(QRect(170, 270, 141, 31));
        lineEdit_destination_1->setFont(font4);
        lineEdit_destination_1->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"color:rgb(255, 0, 0) \n"
""));
        Button_modifier = new QPushButton(tab_5);
        Button_modifier->setObjectName(QStringLiteral("Button_modifier"));
        Button_modifier->setGeometry(QRect(10, 420, 141, 71));
        Button_modifier->setFont(font2);
        Button_modifier->setStyleSheet(QStringLiteral("border-image: url(:/photo2/imageload/marron.jpg);"));
        tableView_3 = new QTableView(tab_5);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(400, 10, 561, 461));
        tableView_3->setStyleSheet(QStringLiteral("border-image: white"));
        lineEdit_date_1 = new QLineEdit(tab_5);
        lineEdit_date_1->setObjectName(QStringLiteral("lineEdit_date_1"));
        lineEdit_date_1->setGeometry(QRect(230, 190, 141, 31));
        lineEdit_date_1->setFont(font4);
        lineEdit_date_1->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"color:rgb(255, 0, 0) \n"
""));
        lineEdit_nb_1 = new QLineEdit(tab_5);
        lineEdit_nb_1->setObjectName(QStringLiteral("lineEdit_nb_1"));
        lineEdit_nb_1->setGeometry(QRect(250, 350, 131, 31));
        lineEdit_nb_1->setFont(font4);
        lineEdit_nb_1->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"color:rgb(255, 0, 0) \n"
""));
        Button_afficher_liste_2 = new QPushButton(tab_5);
        Button_afficher_liste_2->setObjectName(QStringLiteral("Button_afficher_liste_2"));
        Button_afficher_liste_2->setGeometry(QRect(210, 420, 161, 71));
        Button_afficher_liste_2->setFont(font2);
        Button_afficher_liste_2->setStyleSheet(QStringLiteral("border-image: url(:/photo2/imageload/marron.jpg);"));
        tabWidget->addTab(tab_5, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(120, 50, 141, 31));
        label_8->setFont(font3);
        label_8->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"font: 18pt \"MS Shell Dlg 2\";"));
        lineEdit_suppression_reference = new QLineEdit(tab_4);
        lineEdit_suppression_reference->setObjectName(QStringLiteral("lineEdit_suppression_reference"));
        lineEdit_suppression_reference->setGeometry(QRect(300, 50, 421, 31));
        lineEdit_suppression_reference->setFont(font4);
        lineEdit_suppression_reference->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"color:rgb(255, 0, 0) \n"
""));
        Button_supprimer_cinema = new QPushButton(tab_4);
        Button_supprimer_cinema->setObjectName(QStringLiteral("Button_supprimer_cinema"));
        Button_supprimer_cinema->setGeometry(QRect(340, 170, 201, 51));
        Button_supprimer_cinema->setFont(font2);
        Button_supprimer_cinema->setStyleSheet(QStringLiteral("border-image: url(:/photo2/imageload/marron.jpg);"));
        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(30, 90, 911, 371));
        textEdit->setFont(font4);
        textEdit->setStyleSheet(QStringLiteral("border-image:white"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 30, 251, 31));
        QFont font5;
        font5.setPointSize(14);
        font5.setBold(true);
        font5.setUnderline(true);
        font5.setWeight(75);
        label_2->setFont(font5);
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/photo2/imageload/marron.jpg);"));
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 50, 191, 31));
        label_3->setFont(font2);
        label_3->setStyleSheet(QStringLiteral("border-image: url(:/photo2/imageload/marron.jpg);"));
        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(320, 50, 421, 31));
        lineEdit_2->setFont(font4);
        lineEdit_2->setStyleSheet(QLatin1String("border-image: url(:/photo2/imageload/marron.jpg);\n"
"color:rgb(255, 0, 0) \n"
""));
        Button_entrer_salle = new QPushButton(tab);
        Button_entrer_salle->setObjectName(QStringLiteral("Button_entrer_salle"));
        Button_entrer_salle->setGeometry(QRect(380, 190, 221, 41));
        QFont font6;
        font6.setFamily(QStringLiteral("Segoe UI"));
        font6.setPointSize(18);
        font6.setBold(true);
        font6.setWeight(75);
        Button_entrer_salle->setFont(font6);
        Button_entrer_salle->setStyleSheet(QStringLiteral("border-image: url(:/photo2/imageload/marron.jpg);"));
        tabWidget->addTab(tab, QString());
        label_time = new QLabel(groupBox);
        label_time->setObjectName(QStringLiteral("label_time"));
        label_time->setGeometry(QRect(830, 0, 161, 21));
        QFont font7;
        font7.setPointSize(14);
        font7.setBold(true);
        font7.setWeight(75);
        label_time->setFont(font7);
        label_time->setStyleSheet(QStringLiteral("border-image: url(:/photo2/imageload/marron.jpg);"));
        horizontalScrollBar = new QScrollBar(centralwidget);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(0, 660, 1041, 16));
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        Cinema_page->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Cinema_page);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1062, 21));
        Cinema_page->setMenuBar(menubar);
        statusbar = new QStatusBar(Cinema_page);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Cinema_page->setStatusBar(statusbar);

        retranslateUi(Cinema_page);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Cinema_page);
    } // setupUi

    void retranslateUi(QMainWindow *Cinema_page)
    {
        Cinema_page->setWindowTitle(QApplication::translate("Cinema_page", "Watch & Roll", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Cinema_page", "Gestion du cinema", Q_NULLPTR));
        label_15->setText(QApplication::translate("Cinema_page", "TextLabel", Q_NULLPTR));
        COLISEE->setText(QApplication::translate("Cinema_page", "LE COLISEE", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Cinema_page", "Magestic", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Cinema_page", "Pathe", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Cinema), QApplication::translate("Cinema_page", "Bienvenue", Q_NULLPTR));
        Button_afficher_liste->setText(QApplication::translate("Cinema_page", "Afficher", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Cinema_page", "Afficher les cinemas", Q_NULLPTR));
        label_14->setText(QApplication::translate("Cinema_page", " R\303\251ference :", Q_NULLPTR));
        lineEdit_reference_rechercher->setText(QString());
        lineEdit_reference_rechercher->setPlaceholderText(QApplication::translate("Cinema_page", "Chercher", Q_NULLPTR));
        Button_rechercher->setText(QApplication::translate("Cinema_page", "Rechercher", Q_NULLPTR));
        label_16->setText(QApplication::translate("Cinema_page", " Nom :", Q_NULLPTR));
        lineEdit_nom_rechercher->setText(QString());
        lineEdit_nom_rechercher->setPlaceholderText(QApplication::translate("Cinema_page", "Chercher", Q_NULLPTR));
        label_17->setText(QApplication::translate("Cinema_page", " Destination  :", Q_NULLPTR));
        lineEdit_destination_rechercher->setText(QString());
        lineEdit_destination_rechercher->setPlaceholderText(QApplication::translate("Cinema_page", "Chercher", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("Cinema_page", "Rechercher cinema", Q_NULLPTR));
        label->setText(QApplication::translate("Cinema_page", "R\303\251ference :", Q_NULLPTR));
        lineEdit_nom->setText(QString());
        Button_rechercher_ajout_cinema->setText(QApplication::translate("Cinema_page", "Ajouter", Q_NULLPTR));
        label_4->setText(QApplication::translate("Cinema_page", "Date de cr\303\251ation :", Q_NULLPTR));
        label_5->setText(QApplication::translate("Cinema_page", "Destination :", Q_NULLPTR));
        label_6->setText(QApplication::translate("Cinema_page", "Nombre des salles :", Q_NULLPTR));
        label_7->setText(QApplication::translate("Cinema_page", "Nom :", Q_NULLPTR));
        lineEdit_destination->setText(QString());
        lineEdit_reference->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("Cinema_page", "Ajouter un cinema", Q_NULLPTR));
        label_9->setText(QApplication::translate("Cinema_page", "Nom :", Q_NULLPTR));
        lineEdit_nom_1->setText(QString());
        label_10->setText(QApplication::translate("Cinema_page", "R\303\251ference :", Q_NULLPTR));
        label_11->setText(QApplication::translate("Cinema_page", "Date de cr\303\251ation :", Q_NULLPTR));
        label_12->setText(QApplication::translate("Cinema_page", "Destination :", Q_NULLPTR));
        label_13->setText(QApplication::translate("Cinema_page", "Nombre des salles :", Q_NULLPTR));
        lineEdit_reference_1->setText(QString());
        lineEdit_destination_1->setText(QString());
        Button_modifier->setText(QApplication::translate("Cinema_page", "Modifier", Q_NULLPTR));
        lineEdit_date_1->setText(QString());
        lineEdit_nb_1->setText(QString());
        Button_afficher_liste_2->setText(QApplication::translate("Cinema_page", "Charger", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("Cinema_page", "Modifier cinema", Q_NULLPTR));
        label_8->setText(QApplication::translate("Cinema_page", "R\303\251ference :", Q_NULLPTR));
        lineEdit_suppression_reference->setText(QString());
        Button_supprimer_cinema->setText(QApplication::translate("Cinema_page", "Supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Cinema_page", "Supprimer cinema", Q_NULLPTR));
        label_2->setText(QApplication::translate("Cinema_page", "Les ordres des cinemas :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Cinema_page", " Trier les cinemas", Q_NULLPTR));
        label_3->setText(QApplication::translate("Cinema_page", "Nom du cinema :", Q_NULLPTR));
        lineEdit_2->setText(QString());
        Button_entrer_salle->setText(QApplication::translate("Cinema_page", "Entrer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Cinema_page", "Salle du cinema", Q_NULLPTR));
        tabWidget->setTabToolTip(tabWidget->indexOf(tab), QApplication::translate("Cinema_page", "Tapez ici !", Q_NULLPTR));
        label_time->setText(QApplication::translate("Cinema_page", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Cinema_page: public Ui_Cinema_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CINEMA_PAGE_H
