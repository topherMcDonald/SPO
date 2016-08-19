#pragma once
#include <QObject>

class QString;
class QStringListModel;
class QXmlStreamReader;
class QFile;
class QDir;

class Settings : public QObject
{
    Q_OBJECT
public:
    explicit Settings(QObject *parent, QString basefilename, QString orderlinefile);

private:
    QString m_basefilename;
    QString m_orderlinefile;
    QString ReadXmlFile();
    explicit Settings(const Settings& rhs) = delete;
    Settings& operator= (const Settings& rhs) = delete;
};



