QT       += core printsupport  gui sql network serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets multimedia

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_consomation.cpp \
    addfilm.cpp \
    administrateur.cpp \
    administrateur_assistant_page.cpp \
    arduino1.cpp \
    assistant.cpp \
    chaise.cpp \
    chaise_producteur_page.cpp \
    cinema_page.cpp \
    client.cpp \
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
    producteur.cpp \
    projection.cpp \
    projection_page.cpp \
    salle_page.cpp \
    smartcinema.cpp \
    smtp.cpp \
    tableprinter.cpp \
    ticket.cpp \
    ticket_page.cpp \
    verification_administrateur.cpp

HEADERS += \
    add_consomation.h \
    addfilm.h \
    administrateur.h \
    administrateur_assistant_page.h \
    arduino1.h \
    assistant.h \
    chaise.h \
    chaise_producteur_page.h \
    cinema_page.h \
    client.h \
    client_page.h \
    connection.h \
    consomation.h \
    exportexcelobject.h \
    film.h \
    gcinema.h \
    gsalle.h \
    integration.h \
    mainwindow_film_consommation.h \
    producteur.h \
    projection.h \
    projection_page.h \
    salle_page.h \
    smartcinema.h \
    smtp.h \
    tableprinter.h \
    ticket.h \
    ticket_page.h \
    verification_administrateur.h

FORMS += \
    add_consomation.ui \
    addfilm.ui \
    administrateur_assistant_page.ui \
    chaise_producteur_page.ui \
    cinema_page.ui \
    client_page.ui \
    integration.ui \
    mainwindow_film_consommation.ui \
    projection_page.ui \
    salle_page.ui \
    smartcinema.ui \
    ticket_page.ui \
    verification_administrateur.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resourceee.qrc
