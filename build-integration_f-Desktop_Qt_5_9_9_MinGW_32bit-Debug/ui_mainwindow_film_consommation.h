/********************************************************************************
** Form generated from reading UI file 'mainwindow_film_consommation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_FILM_CONSOMMATION_H
#define UI_MAINWINDOW_FILM_CONSOMMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow_film_consommation
{
public:
    QAction *actionadd_film;
    QAction *actionremove_film;
    QAction *actionadd_consomation;
    QAction *actionremove_consomation;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *recherche_film;
    QTableView *tab_film;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *tab_2;
    QTableView *tab_cons;
    QLabel *label_4;
    QLineEdit *recherche_cons;
    QWidget *tab_3;
    QLineEdit *subject;
    QLineEdit *rcpt;
    QPushButton *browseBtn;
    QTextEdit *msg;
    QLineEdit *mail_pass;
    QPushButton *sendBtn;
    QLineEdit *file;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow_film_consommation)
    {
        if (MainWindow_film_consommation->objectName().isEmpty())
            MainWindow_film_consommation->setObjectName(QStringLiteral("MainWindow_film_consommation"));
        MainWindow_film_consommation->resize(800, 600);
        MainWindow_film_consommation->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/beige.jpg);"));
        actionadd_film = new QAction(MainWindow_film_consommation);
        actionadd_film->setObjectName(QStringLiteral("actionadd_film"));
        actionremove_film = new QAction(MainWindow_film_consommation);
        actionremove_film->setObjectName(QStringLiteral("actionremove_film"));
        actionadd_consomation = new QAction(MainWindow_film_consommation);
        actionadd_consomation->setObjectName(QStringLiteral("actionadd_consomation"));
        actionremove_consomation = new QAction(MainWindow_film_consommation);
        actionremove_consomation->setObjectName(QStringLiteral("actionremove_consomation"));
        centralwidget = new QWidget(MainWindow_film_consommation);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 30, 711, 461));
        tabWidget->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix2/marron.jpg);"));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        recherche_film = new QLineEdit(tab);
        recherche_film->setObjectName(QStringLiteral("recherche_film"));
        recherche_film->setGeometry(QRect(480, 40, 191, 24));
        recherche_film->setStyleSheet(QStringLiteral("border-image: white"));
        recherche_film->setClearButtonEnabled(true);
        tab_film = new QTableView(tab);
        tab_film->setObjectName(QStringLiteral("tab_film"));
        tab_film->setGeometry(QRect(20, 90, 651, 331));
        tab_film->setStyleSheet(QStringLiteral("border-image: white"));
        tab_film->setSortingEnabled(true);
        tab_film->horizontalHeader()->setCascadingSectionResizes(true);
        tab_film->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tab_film->horizontalHeader()->setStretchLastSection(false);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 201, 31));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(400, 40, 75, 23));
        pushButton->setStyleSheet(QLatin1String("\n"
"border-image: url(:/new/prefix3/orange.png);"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_cons = new QTableView(tab_2);
        tab_cons->setObjectName(QStringLiteral("tab_cons"));
        tab_cons->setGeometry(QRect(20, 90, 651, 341));
        tab_cons->setStyleSheet(QStringLiteral("border-image: white"));
        tab_cons->setSortingEnabled(true);
        tab_cons->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 30, 321, 31));
        recherche_cons = new QLineEdit(tab_2);
        recherche_cons->setObjectName(QStringLiteral("recherche_cons"));
        recherche_cons->setGeometry(QRect(480, 40, 191, 24));
        recherche_cons->setStyleSheet(QStringLiteral("border-image: white"));
        recherche_cons->setClearButtonEnabled(true);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        subject = new QLineEdit(tab_3);
        subject->setObjectName(QStringLiteral("subject"));
        subject->setGeometry(QRect(20, 44, 651, 16));
        subject->setStyleSheet(QStringLiteral("border-image: white"));
        rcpt = new QLineEdit(tab_3);
        rcpt->setObjectName(QStringLiteral("rcpt"));
        rcpt->setGeometry(QRect(20, 10, 491, 21));
        rcpt->setStyleSheet(QStringLiteral("border-image: white"));
        browseBtn = new QPushButton(tab_3);
        browseBtn->setObjectName(QStringLiteral("browseBtn"));
        browseBtn->setGeometry(QRect(597, 79, 75, 24));
        browseBtn->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        msg = new QTextEdit(tab_3);
        msg->setObjectName(QStringLiteral("msg"));
        msg->setGeometry(QRect(20, 116, 651, 291));
        msg->setStyleSheet(QStringLiteral("border-image: white"));
        mail_pass = new QLineEdit(tab_3);
        mail_pass->setObjectName(QStringLiteral("mail_pass"));
        mail_pass->setGeometry(QRect(532, 10, 141, 20));
        mail_pass->setStyleSheet(QStringLiteral("border-image: white"));
        mail_pass->setEchoMode(QLineEdit::Password);
        sendBtn = new QPushButton(tab_3);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sendBtn->setGeometry(QRect(20, 410, 651, 23));
        sendBtn->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        file = new QLineEdit(tab_3);
        file->setObjectName(QStringLiteral("file"));
        file->setGeometry(QRect(20, 80, 571, 23));
        file->setStyleSheet(QStringLiteral("border-image: white"));
        tabWidget->addTab(tab_3, QString());
        MainWindow_film_consommation->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow_film_consommation);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow_film_consommation->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow_film_consommation);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow_film_consommation->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow_film_consommation);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow_film_consommation->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionadd_film);
        toolBar->addAction(actionremove_film);
        toolBar->addAction(actionadd_consomation);
        toolBar->addAction(actionremove_consomation);

        retranslateUi(MainWindow_film_consommation);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow_film_consommation);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow_film_consommation)
    {
        MainWindow_film_consommation->setWindowTitle(QApplication::translate("MainWindow_film_consommation", "Smart cinema", Q_NULLPTR));
        actionadd_film->setText(QApplication::translate("MainWindow_film_consommation", "Ajouter Un Film", Q_NULLPTR));
        actionremove_film->setText(QApplication::translate("MainWindow_film_consommation", "Supprimer Un Film", Q_NULLPTR));
        actionadd_consomation->setText(QApplication::translate("MainWindow_film_consommation", "Ajouter Une Consommation", Q_NULLPTR));
        actionremove_consomation->setText(QApplication::translate("MainWindow_film_consommation", "Supprimer Une Consommation", Q_NULLPTR));
        recherche_film->setPlaceholderText(QApplication::translate("MainWindow_film_consommation", "Recherche", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow_film_consommation", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#5500ff;\">Liste Des Films :</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow_film_consommation", "export excel", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow_film_consommation", "Films", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow_film_consommation", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#5500ff;\">Liste Des Consommation :</span></p></body></html>", Q_NULLPTR));
        recherche_cons->setPlaceholderText(QApplication::translate("MainWindow_film_consommation", "Recherche", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow_film_consommation", "Consommations", Q_NULLPTR));
        subject->setPlaceholderText(QApplication::translate("MainWindow_film_consommation", "subject", Q_NULLPTR));
        rcpt->setPlaceholderText(QApplication::translate("MainWindow_film_consommation", "recipient", Q_NULLPTR));
        browseBtn->setText(QApplication::translate("MainWindow_film_consommation", "Browse ...", Q_NULLPTR));
        msg->setPlaceholderText(QApplication::translate("MainWindow_film_consommation", "type your message here ...", Q_NULLPTR));
        mail_pass->setPlaceholderText(QApplication::translate("MainWindow_film_consommation", "your mail password", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("MainWindow_film_consommation", "Send", Q_NULLPTR));
        file->setPlaceholderText(QApplication::translate("MainWindow_film_consommation", "attachement here", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow_film_consommation", "mailing", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow_film_consommation", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow_film_consommation: public Ui_MainWindow_film_consommation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_FILM_CONSOMMATION_H
