 #pragma once
#include <QObject>

class QString;
class QStringListModel;
class QJsonParseError;
class QJsonObject;
class QFile;
class QDir;


namespace TophersNameSpace{
    class Settings : public QObject
    {
        Q_OBJECT
    public:
        explicit Settings(QObject *parent=0);

    private:
        explicit Settings(const Settings& rhs) = delete;
        Settings& operator= (const Settings& rhs) = delete;
    };
}


