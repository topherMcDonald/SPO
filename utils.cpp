#include "utils.h"
#include <QString>
#include <QDebug>
#include <QDate>

static QString DESTRUCTOR_MSG = QStringLiteral("Running the %1 destructor.");

void Utils::DestuctorMsg(const QString &value)
{
    qDebug() << DESTRUCTOR_MSG.arg(value);
}

void Utils::DestuctorMsg(const QObject* const object)
{
    DestuctorMsg(object->metaObject()->className());
}

void Utils::createPO(QString &value) {
    QDate date = QDate::currentDate();
    QTime time = QTime::currentTime();
    value = "SPO" + date.toString("yyMMdd") + time.toString("hhmmss");
}
