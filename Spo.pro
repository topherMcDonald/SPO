#-------------------------------------------------
#
# Project created by QtCreator 2016-06-16T10:51:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Spo
TEMPLATE = app

QMAKE_CXXFLAGS += -std=c++11

SOURCES += main.cpp\
        View/mainview.cpp \
    View/setuptab.cpp

HEADERS  += View/mainview.h \
    View/setuptab.h

FORMS    += View/mainview.ui \
    View/setuptab.ui

RESOURCES += \
    sporesource.qrc
