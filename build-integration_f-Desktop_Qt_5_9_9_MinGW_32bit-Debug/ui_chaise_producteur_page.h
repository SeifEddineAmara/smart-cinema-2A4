/********************************************************************************
** Form generated from reading UI file 'chaise_producteur_page.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAISE_PRODUCTEUR_PAGE_H
#define UI_CHAISE_PRODUCTEUR_PAGE_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chaise_producteur_page
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_6;
    QLabel *label_6;
    QPushButton *pushButton;
    QWidget *tab_5;
    QTableView *tableView;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QWidget *tab_4;
    QTableView *tableView_2;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_14;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_14;
    QPushButton *pushButton_2;
    QWidget *tab_6;
    QTableView *tableView_3;
    QLabel *label_15;
    QLineEdit *lineEdit_15;
    QPushButton *pushButton_3;
    QWidget *tab_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_7;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *lineEdit_16;
    QPushButton *pushButton_4;
    QComboBox *comboBox_2;
    QWidget *tab_8;
    QTableView *tableView_4;
    QWidget *tab_9;
    QLineEdit *lineEdit_18;
    QLabel *label_18;
    QLabel *label_19;
    QTableView *tableView_5;
    QPushButton *pushButton_5;
    QComboBox *comboBox;
    QWidget *tab_10;
    QLabel *label_20;
    QLineEdit *lineEdit_20;
    QPushButton *pushButton_6;
    QTableView *tableView_6;

    void setupUi(QDialog *chaise_producteur_page)
    {
        if (chaise_producteur_page->objectName().isEmpty())
            chaise_producteur_page->setObjectName(QStringLiteral("chaise_producteur_page"));
        chaise_producteur_page->resize(906, 511);
        chaise_producteur_page->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/beige.jpg);"));
        tabWidget = new QTabWidget(chaise_producteur_page);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 10, 871, 491));
        QFont font;
        font.setPointSize(10);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(20, 10, 831, 451));
        tabWidget_2->setFont(font);
        tabWidget_2->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix2/marron.jpg);"));
        tabWidget_2->setTabShape(QTabWidget::Triangular);
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        lineEdit = new QLineEdit(tab_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(290, 50, 113, 22));
        lineEdit->setStyleSheet(QLatin1String("border-image: whit\n"
""));
        lineEdit_2 = new QLineEdit(tab_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(290, 90, 113, 22));
        lineEdit_2->setStyleSheet(QLatin1String("border-image: whit\n"
""));
        lineEdit_3 = new QLineEdit(tab_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(290, 130, 113, 22));
        lineEdit_3->setStyleSheet(QLatin1String("border-image: whit\n"
""));
        lineEdit_4 = new QLineEdit(tab_3);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(290, 170, 113, 22));
        lineEdit_4->setStyleSheet(QLatin1String("border-image: whit\n"
""));
        lineEdit_5 = new QLineEdit(tab_3);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(290, 210, 113, 22));
        lineEdit_5->setStyleSheet(QLatin1String("border-image: whit\n"
""));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 50, 61, 20));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(200, 90, 81, 21));
        label_2->setFont(font1);
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(240, 130, 41, 20));
        label_3->setFont(font1);
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(210, 170, 55, 21));
        label_4->setFont(font1);
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(180, 210, 91, 20));
        label_5->setFont(font1);
        lineEdit_6 = new QLineEdit(tab_3);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(290, 250, 113, 22));
        lineEdit_6->setStyleSheet(QLatin1String("border-image: whit\n"
""));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(190, 250, 71, 16));
        label_6->setFont(font1);
        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 340, 151, 28));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        tabWidget_2->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tableView = new QTableView(tab_5);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(60, 50, 411, 241));
        tableView->setStyleSheet(QLatin1String("\n"
"border-image: whit\n"
""));
        pushButton_7 = new QPushButton(tab_5);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(550, 100, 93, 28));
        pushButton_7->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        pushButton_8 = new QPushButton(tab_5);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(550, 150, 93, 28));
        pushButton_8->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        tabWidget_2->addTab(tab_5, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tableView_2 = new QTableView(tab_4);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(20, 120, 311, 121));
        tableView_2->setStyleSheet(QLatin1String("border-image: whit\n"
""));
        lineEdit_8 = new QLineEdit(tab_4);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(460, 20, 113, 22));
        lineEdit_8->setStyleSheet(QLatin1String("border-image: whit\n"
""));
        lineEdit_9 = new QLineEdit(tab_4);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(460, 70, 113, 22));
        lineEdit_9->setStyleSheet(QLatin1String("border-image: whit\n"
""));
        lineEdit_10 = new QLineEdit(tab_4);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(120, 80, 113, 22));
        lineEdit_10->setStyleSheet(QLatin1String("border-image: whit\n"
""));
        lineEdit_11 = new QLineEdit(tab_4);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(460, 110, 113, 22));
        lineEdit_11->setStyleSheet(QLatin1String("border-image: whit\n"
""));
        lineEdit_12 = new QLineEdit(tab_4);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(460, 190, 113, 22));
        lineEdit_12->setStyleSheet(QLatin1String("border-image: whit\n"
""));
        lineEdit_14 = new QLineEdit(tab_4);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(460, 150, 113, 22));
        lineEdit_14->setStyleSheet(QLatin1String("border-image: whit\n"
""));
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(380, 20, 55, 16));
        label_8->setFont(font1);
        label_9 = new QLabel(tab_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(360, 70, 71, 16));
        label_9->setFont(font1);
        label_10 = new QLabel(tab_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(60, 80, 55, 16));
        label_10->setFont(font1);
        label_11 = new QLabel(tab_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(390, 110, 55, 16));
        label_11->setFont(font1);
        label_12 = new QLabel(tab_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(360, 190, 71, 16));
        label_12->setFont(font1);
        label_14 = new QLabel(tab_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(350, 150, 81, 16));
        label_14->setFont(font1);
        pushButton_2 = new QPushButton(tab_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 280, 141, 28));
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        tabWidget_2->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tableView_3 = new QTableView(tab_6);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(40, 110, 661, 201));
        tableView_3->setStyleSheet(QLatin1String("border-image: whit\n"
""));
        label_15 = new QLabel(tab_6);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(150, 60, 31, 20));
        label_15->setFont(font1);
        lineEdit_15 = new QLineEdit(tab_6);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(190, 60, 113, 22));
        lineEdit_15->setStyleSheet(QLatin1String("border-image: whit\n"
""));
        pushButton_3 = new QPushButton(tab_6);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(320, 60, 93, 28));
        pushButton_3->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        tabWidget_2->addTab(tab_6, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_3 = new QTabWidget(tab_2);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(20, 10, 831, 451));
        tabWidget_3->setFont(font);
        tabWidget_3->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix2/marron.jpg);"));
        tabWidget_3->setTabShape(QTabWidget::Triangular);
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        label_16 = new QLabel(tab_7);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(120, 85, 81, 31));
        label_16->setFont(font1);
        label_17 = new QLabel(tab_7);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(120, 150, 81, 21));
        label_17->setFont(font1);
        lineEdit_16 = new QLineEdit(tab_7);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(210, 90, 113, 22));
        lineEdit_16->setStyleSheet(QLatin1String("border-image: whit\n"
""));
        pushButton_4 = new QPushButton(tab_7);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(440, 120, 93, 28));
        pushButton_4->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        comboBox_2 = new QComboBox(tab_7);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(210, 150, 111, 22));
        comboBox_2->setStyleSheet(QLatin1String("border-image: whit\n"
""));
        tabWidget_3->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        tableView_4 = new QTableView(tab_8);
        tableView_4->setObjectName(QStringLiteral("tableView_4"));
        tableView_4->setGeometry(QRect(90, 30, 561, 371));
        tableView_4->setStyleSheet(QLatin1String("border-image: whit\n"
""));
        tabWidget_3->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        lineEdit_18 = new QLineEdit(tab_9);
        lineEdit_18->setObjectName(QStringLiteral("lineEdit_18"));
        lineEdit_18->setGeometry(QRect(110, 71, 121, 31));
        lineEdit_18->setStyleSheet(QLatin1String("border-image: whit\n"
""));
        label_18 = new QLabel(tab_9);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(20, 75, 71, 21));
        label_18->setFont(font1);
        label_19 = new QLabel(tab_9);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(420, 60, 55, 21));
        label_19->setFont(font1);
        tableView_5 = new QTableView(tab_9);
        tableView_5->setObjectName(QStringLiteral("tableView_5"));
        tableView_5->setGeometry(QRect(20, 120, 281, 121));
        tableView_5->setStyleSheet(QLatin1String("border-image: whit\n"
""));
        pushButton_5 = new QPushButton(tab_9);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(460, 120, 161, 51));
        pushButton_5->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        comboBox = new QComboBox(tab_9);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(480, 60, 141, 31));
        comboBox->setStyleSheet(QLatin1String("border-image: whit\n"
""));
        tabWidget_3->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        label_20 = new QLabel(tab_10);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(170, 80, 91, 16));
        label_20->setFont(font1);
        lineEdit_20 = new QLineEdit(tab_10);
        lineEdit_20->setObjectName(QStringLiteral("lineEdit_20"));
        lineEdit_20->setGeometry(QRect(250, 80, 113, 22));
        lineEdit_20->setStyleSheet(QLatin1String("border-image: whit\n"
""));
        pushButton_6 = new QPushButton(tab_10);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(380, 80, 151, 28));
        pushButton_6->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/orange.png);"));
        tableView_6 = new QTableView(tab_10);
        tableView_6->setObjectName(QStringLiteral("tableView_6"));
        tableView_6->setGeometry(QRect(120, 130, 311, 221));
        tableView_6->setStyleSheet(QLatin1String("border-image: whit\n"
""));
        tabWidget_3->addTab(tab_10, QString());
        tabWidget->addTab(tab_2, QString());

        retranslateUi(chaise_producteur_page);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(3);
        tabWidget_3->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(chaise_producteur_page);
    } // setupUi

    void retranslateUi(QDialog *chaise_producteur_page)
    {
        chaise_producteur_page->setWindowTitle(QApplication::translate("chaise_producteur_page", "Smart cinema", Q_NULLPTR));
        label->setText(QApplication::translate("chaise_producteur_page", "nom :", Q_NULLPTR));
        label_2->setText(QApplication::translate("chaise_producteur_page", "prenom :", Q_NULLPTR));
        label_3->setText(QApplication::translate("chaise_producteur_page", "id :", Q_NULLPTR));
        label_4->setText(QApplication::translate("chaise_producteur_page", "email : ", Q_NULLPTR));
        label_5->setText(QApplication::translate("chaise_producteur_page", "t\303\251lephone :", Q_NULLPTR));
        label_6->setText(QApplication::translate("chaise_producteur_page", "adresse :", Q_NULLPTR));
        pushButton->setText(QApplication::translate("chaise_producteur_page", "ajouter", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("chaise_producteur_page", "ajouter", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("chaise_producteur_page", "pdf", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("chaise_producteur_page", "imprimer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("chaise_producteur_page", "afficher", Q_NULLPTR));
        label_8->setText(QApplication::translate("chaise_producteur_page", "nom :", Q_NULLPTR));
        label_9->setText(QApplication::translate("chaise_producteur_page", "prenom :", Q_NULLPTR));
        label_10->setText(QApplication::translate("chaise_producteur_page", "id :", Q_NULLPTR));
        label_11->setText(QApplication::translate("chaise_producteur_page", "mail :", Q_NULLPTR));
        label_12->setText(QApplication::translate("chaise_producteur_page", "adresse :", Q_NULLPTR));
        label_14->setText(QApplication::translate("chaise_producteur_page", "telephone :", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("chaise_producteur_page", "modifier", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("chaise_producteur_page", "modifier", Q_NULLPTR));
        label_15->setText(QApplication::translate("chaise_producteur_page", "id :", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("chaise_producteur_page", "supprimer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("chaise_producteur_page", "supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("chaise_producteur_page", "producteur", Q_NULLPTR));
        label_16->setText(QApplication::translate("chaise_producteur_page", "numero :", Q_NULLPTR));
        label_17->setText(QApplication::translate("chaise_producteur_page", "type :", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("chaise_producteur_page", "ajouter", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("chaise_producteur_page", "NORMAL", Q_NULLPTR)
         << QApplication::translate("chaise_producteur_page", "VIP", Q_NULLPTR)
        );
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QApplication::translate("chaise_producteur_page", "ajouter", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_8), QApplication::translate("chaise_producteur_page", "afficher", Q_NULLPTR));
        label_18->setText(QApplication::translate("chaise_producteur_page", "numero :", Q_NULLPTR));
        label_19->setText(QApplication::translate("chaise_producteur_page", "type :", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("chaise_producteur_page", "modifier", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("chaise_producteur_page", "NORMAL", Q_NULLPTR)
         << QApplication::translate("chaise_producteur_page", "VIP", Q_NULLPTR)
        );
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_9), QApplication::translate("chaise_producteur_page", "modifier ", Q_NULLPTR));
        label_20->setText(QApplication::translate("chaise_producteur_page", "numero :", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("chaise_producteur_page", "supprimer", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_10), QApplication::translate("chaise_producteur_page", "supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("chaise_producteur_page", "chaise", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class chaise_producteur_page: public Ui_chaise_producteur_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAISE_PRODUCTEUR_PAGE_H
