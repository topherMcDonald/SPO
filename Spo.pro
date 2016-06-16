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
        View/mainview.cpp

HEADERS  += View/mainview.h

FORMS    += View/mainview.ui

RESOURCES += \
    sporesource.qrc
