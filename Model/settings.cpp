#include "settings.h"
#include <QString>
#include <QDir>
#include <QFile>
#include <QDebug>


Settings::Settings(QObject *parent, QString basefilename, QString orderlinefile) :
    QObject(parent),
    m_basefilename (basefilename),
    m_orderlinefile(orderlinefile)
{
    ReadXmlFile();
}

QString Settings::ReadXmlFile()
{
    static QString ERROR_MSG = QStringLiteral("Cannot open file %1 ..");

    //Hard code file load for now
    QFile file( "C:/Users/spoXml.xml" );

    if( !file.open( QFile::ReadOnly | QFile::Text ) ) {
        // print error cannot open
        qDebug() << ERROR_MSG;
    }

    QString xmlParse = file.readAll();
    return xmlParse;
}
