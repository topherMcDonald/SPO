
#pragma once
#include <QObject>
#include <QtXml>
#include <QFile>


class dealerIdXmlReader : public QObject
{
    Q_OBJECT
public:
    explicit dealerIdXmlReader(QObject *parent=0);

private:
    explicit dealerIdXmlReader(const dealerIdXmlReader& rhs) = delete;
    dealerIdXmlReader& operator= (const dealerIdXmlReader& rhs) = delete;
};



