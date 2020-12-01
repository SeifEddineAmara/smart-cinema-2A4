QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_client.cpp \
    affi_client.cpp \
    client.cpp \
    connection.cpp \
    delete_client.cpp \
    edit_client.cpp \
    film.cpp \
    gest_client.cpp \
    gest_ticket.cpp \
    main.cpp \
    mainwindow.cpp \
    salle.cpp \
    ticket.cpp \
    welcome_window.cpp

HEADERS += \
    add_client.h \
    affi_client.h \
    client.h \
    connection.h \
    delete_client.h \
    edit_client.h \
    film.h \
    gest_client.h \
    gest_ticket.h \
    mainwindow.h \
    salle.h \
    ticket.h \
    welcome_window.h

FORMS += \
    add_client.ui \
    affi_client.ui \
    delete_client.ui \
    edit_client.ui \
    gest_client.ui \
    gest_ticket.ui \
    mainwindow.ui \
    welcome_window.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ress.qrc

DISTFILES += \
    show_user.png
