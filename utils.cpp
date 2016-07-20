#include "utils.h"
#include <QString>
#include <QDebug>


static QString DESTRUCTOR_MSG = QStringLiteral("Running the %1 destructor.");

void Utils::DestuctorMsg(const QString &value)
{
    qDebug() << DESTRUCTOR_MSG.arg(value);
}

void Utils::DestuctorMsg(const QObject* const object)
{
    DestuctorMsg(object->metaObject()->className());
}
