QT -= gui
QT += core gui sql
QT += widgets

CONFIG += c++17 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        associationinteractiontodo.cpp \
        contact.cpp \
        date.cpp \
        gestioncontacts.cpp \
        gestioninteraction.cpp \
        interaction.cpp \
        main.cpp \
        mainwindow.cpp \
        personne.cpp \
        qsqldata.cpp \
        todo.cpp \
        widgetcontact.cpp \
        widgetinteraction.cpp \
        widgetretirer.cpp \
        widgetupdate.cpp \
        widgetvoirinteraction.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    associationinteractiontodo.h \
    contact.h \
    date.h \
    gestioncontacts.h \
    gestioninteraction.h \
    interaction.h \
    mainwindow.h \
    personne.h \
    qsqldata.h \
    todo.h \
    widgetcontact.h \
    widgetinteraction.h \
    widgetretirer.h \
    widgetupdate.h \
    widgetvoirinteraction.h

FORMS += \
    mainwindow.ui \
    widgetcontact.ui \
    widgetinteraction.ui \
    widgetretirer.ui \
    widgetupdate.ui \
    widgetvoirinteraction.ui
