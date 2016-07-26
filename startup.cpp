#include "startup.h"
#include "View/setuptab.h"
#include "View/mainview.h"
#include "View/addlineitem.h"
#include "utils.h"
#include "Model/settings.h"
#include <QString>
#include <QDir>
#include <QFile>
#include <QDebug>
#include <QtXml>
#include<QFileDialog>
#include<iostream>
#include<QMessageBox>

#include <QXmlStreamWriter>
#include <QDataStream>
#include <QTextStream>
#include <QPushButton>
#include <QIcon>

#include<QComboBox>




Startup::Startup() :
    QObject(nullptr),
    m_setupTab(*new SetupTab(nullptr, m_basefilename)),
    m_addlineitem(*new AddLineItem(nullptr)),
    m_mainView(*new MainView(nullptr, m_setupTab, m_addlineitem))
{
    //ParseXmlData();
    //SaveXMLFile();
}

Startup::~Startup()
{
    Utils::DestuctorMsg(this);
    delete &m_mainView;         //mainview is being "newed up" so we need to take care of deleting it
}

void Startup::show() const
{
    m_mainView.show();
}

//QString Startup::ReadXmlFile()
//{
//    static QString ERROR_MSG = QStringLiteral("Cannot open file %1 ..");

//    //Hard code file load for now
//    QFile file( "C:/Users/spoXml.xml" );

//    if( !file.open( QFile::ReadOnly | QFile::Text ) ) {
//        // print error cannot open
//        qDebug() << ERROR_MSG;
//    }

//    QString xmlParse = file.readAll();
//    return xmlParse;
//}

//void Startup::ParseXmlData()
//{
//    QString raw_xml = ReadXmlFile();
//    if (raw_xml.size() == 0 ) return;

//    QXmlStreamReader xml;
//}

















