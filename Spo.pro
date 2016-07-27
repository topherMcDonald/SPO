#-------------------------------------------------
#
# Project created by QtCreator 2016-06-16T10:51:42
#
#-------------------------------------------------

QT       += core gui xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Spo
TEMPLATE = app

QMAKE_CXXFLAGS += -std=c++11

SOURCES += main.cpp\
        View/mainview.cpp \
    View/setuptab.cpp \
    View/addlineitem.cpp \
    utils.cpp \
    Model/settings.cpp \
    Model/dealeridxmlreader.cpp \
    startup.cpp \
    View/addlineitem_search.cpp

HEADERS  += View/mainview.h \
    View/setuptab.h \
    View/addlineitem.h \
    utils.h \
    Model/settings.h \
    Model/dealeridxmlreader.h \
    startup.h \
    View/addlineitem_search.h

FORMS    += View/mainview.ui \
    View/setuptab.ui \
    View/addlineitem.ui \
    View/addlineitem_search.ui

RESOURCES += \
    sporesource.qrc
