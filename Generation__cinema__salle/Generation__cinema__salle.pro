QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cinema.cpp \
    connection.cpp \
    main.cpp \
    cinema_page.cpp \
    salle_page.cpp

HEADERS += \
    cinema.h \
    cinema_page.h \
    connection.h \
    salle_page.h

FORMS += \
    cinema_page.ui \
    salle_page.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resource_omar.qrc
