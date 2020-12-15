QT       += core printsupport  gui sql network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets multimedia

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_consomation.cpp \
    addfilm.cpp \
    cinema_page.cpp \
    client_page.cpp \
    connection.cpp \
    consomation.cpp \
    exportexcelobject.cpp \
    film.cpp \
    gcinema.cpp \
    gsalle.cpp \
    main.cpp \
    integration.cpp \
    mainwindow_film_consommation.cpp \
    salle_page.cpp \
    smartcinema.cpp \
    smtp.cpp \
    tableprinter.cpp \
    ticket_page.cpp

HEADERS += \
    add_consomation.h \
    addfilm.h \
    cinema_page.h \
    client_page.h \
    connection.h \
    consomation.h \
    exportexcelobject.h \
    film.h \
    gcinema.h \
    gsalle.h \
    integration.h \
    mainwindow_film_consommation.h \
    salle_page.h \
    smartcinema.h \
    smtp.h \
    tableprinter.h \
    ticket_page.h

FORMS += \
    add_consomation.ui \
    addfilm.ui \
    cinema_page.ui \
    client_page.ui \
    integration.ui \
    mainwindow_film_consommation.ui \
    salle_page.ui \
    smartcinema.ui \
    ticket_page.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resourceee.qrc
