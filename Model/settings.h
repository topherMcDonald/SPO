 #pragma once
#include <QObject>

class QDebug;
class QString;
class QStringListModel;
class QXmlStreamReader;
class QFile;
class QDir;



class Settings : public QObject
{
    Q_OBJECT
public:
    explicit Settings(QObject *parent, QString filename);

private:
    QString m_filename;

    QString ReadXmlFile();

    explicit Settings(const Settings& rhs) = delete;
    Settings& operator= (const Settings& rhs) = delete;
};



