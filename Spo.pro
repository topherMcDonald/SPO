#-------------------------------------------------
#
# Project created by QtCreator 2016-06-16T10:51:42
#
#-------------------------------------------------

QT       += core gui xml network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

INCLUDEPATH += $$PWD

TARGET = Spo
TEMPLATE = app

QMAKE_CXXFLAGS += -std=c++11

SOURCES += main.cpp\
        View/mainview.cpp \
    View/setuptab.cpp \
    utils.cpp \
    Model/settings.cpp \
    startup.cpp \
    View/searchdialog.cpp \
    View/missingdatadialog.cpp \
    View/overcostlimitdialog.cpp \
    View/outofstock.cpp

HEADERS  += View/mainview.h \
    View/setuptab.h \
    utils.h \
    Model/settings.h \
    startup.h \
    View/searchdialog.h \
    View/missingdatadialog.h \
    View/overcostlimitdialog.h \
    View/outofstock.h

FORMS    += View/mainview.ui \
    View/setuptab.ui \
    View/searchdialog.ui \
    View/missingdatadialog.ui \
    View/overcostlimitdialog.ui \
    View/ordersubmitteddialog.ui \
    View/outofstock.ui

RESOURCES += \
    sporesource.qrc
