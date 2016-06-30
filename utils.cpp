#include "utils.h"
#include "QString"
#include "QDebug"

namespace TophersNameSpace
{
    static QString DESTUCTOR_MSG = QStringLiteral("Running the %1 detuctor.");

    void Utils::DestructorMsg(const QString &value)
    {
        qDebug() << DESTUCTOR_MSG.arg(value);
    }

    void Utils::DestructorMsg(const QObject* const object)
    {
        DestructorMsg(object->metaObject()->className());
    }
}
