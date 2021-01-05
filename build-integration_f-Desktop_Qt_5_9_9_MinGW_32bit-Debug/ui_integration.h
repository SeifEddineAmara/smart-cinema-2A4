/********************************************************************************
** Form generated from reading UI file 'integration.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTEGRATION_H
#define UI_INTEGRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Integration
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label_3;
    QLineEdit *lineEdit_username;
    QLabel *label;
    QLineEdit *lineEdit_password;
    QLabel *label_2;
    QLabel *label_login;
    QPushButton *pushButton_login;
    QComboBox *comboBox_typeagent;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Integration)
    {
        if (Integration->objectName().isEmpty())
            Integration->setObjectName(QStringLiteral("Integration"));
        Integration->resize(936, 550);
        Integration->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix3/beige.jpg);"));
        centralwidget = new QWidget(Integration);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(110, 60, 701, 451));
        frame->setMouseTracking(false);
        frame->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix2/marron.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(290, 80, 111, 31));
        QFont font;
        font.setPointSize(12);
        label_3->setFont(font);
        lineEdit_username = new QLineEdit(frame);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(240, 200, 211, 31));
        QFont font1;
        font1.setPointSize(14);
        lineEdit_username->setFont(font1);
        lineEdit_username->setStyleSheet(QStringLiteral("border-image: whit"));
        lineEdit_username->setInputMethodHints(Qt::ImhNone);
        lineEdit_username->setFrame(true);
        lineEdit_username->setEchoMode(QLineEdit::Normal);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 200, 161, 25));
        label->setFont(font1);
        lineEdit_password = new QLineEdit(frame);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(240, 260, 211, 31));
        lineEdit_password->setFont(font1);
        lineEdit_password->setStyleSheet(QStringLiteral("border-image: whit"));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        lineEdit_password->setDragEnabled(false);
        lineEdit_password->setReadOnly(false);
        lineEdit_password->setCursorMoveStyle(Qt::LogicalMoveStyle);
        lineEdit_password->setClearButtonEnabled(false);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 260, 141, 25));
        label_2->setFont(font1);
        label_login = new QLabel(frame);
        label_login->setObjectName(QStringLiteral("label_login"));
        label_login->setGeometry(QRect(40, 320, 601, 41));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        label_login->setFont(font2);
        label_login->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix2/marron.jpg);"));
        pushButton_login = new QPushButton(frame);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setGeometry(QRect(260, 380, 171, 51));
        pushButton_login->setFont(font1);
        pushButton_login->setStyleSheet(QLatin1String("border-image: url(:/new/prefix3/orange.png);\n"
"border-radius:25px;\n"
"\n"
""));
        pushButton_login->setCheckable(false);
        pushButton_login->setAutoRepeat(false);
        pushButton_login->setAutoExclusive(false);
        pushButton_login->setAutoDefault(false);
        comboBox_typeagent = new QComboBox(frame);
        comboBox_typeagent->setObjectName(QStringLiteral("comboBox_typeagent"));
        comboBox_typeagent->setGeometry(QRect(240, 130, 211, 31));
        comboBox_typeagent->setStyleSheet(QStringLiteral("border-image: whit"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(370, 0, 151, 141));
        graphicsView->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix4/users-18-512.png);"));
        Integration->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Integration);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 936, 21));
        Integration->setMenuBar(menubar);
        statusbar = new QStatusBar(Integration);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Integration->setStatusBar(statusbar);

        retranslateUi(Integration);

        QMetaObject::connectSlotsByName(Integration);
    } // setupUi

    void retranslateUi(QMainWindow *Integration)
    {
        Integration->setWindowTitle(QApplication::translate("Integration", "Smart cinema", Q_NULLPTR));
        label_3->setText(QApplication::translate("Integration", "Se connecter", Q_NULLPTR));
        lineEdit_username->setText(QString());
        lineEdit_username->setPlaceholderText(QApplication::translate("Integration", "Nom d'utilisateur", Q_NULLPTR));
        label->setText(QApplication::translate("Integration", "Nom d'utilisateur :", Q_NULLPTR));
        lineEdit_password->setPlaceholderText(QApplication::translate("Integration", "Mot de passe", Q_NULLPTR));
        label_2->setText(QApplication::translate("Integration", "Mot de passe :", Q_NULLPTR));
        label_login->setText(QApplication::translate("Integration", "TextLabel", Q_NULLPTR));
        pushButton_login->setText(QApplication::translate("Integration", "Login", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Integration: public Ui_Integration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTEGRATION_H
