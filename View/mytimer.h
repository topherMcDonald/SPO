#ifndef MYTIMER_H
#define MYTIMER_H

#include <QObject>

class MyTimer : public QObject
{
    Q_OBJECT
public:
    explicit MyTimer(QObject *parent = 0);

signals:

public slots:
};

#endif // MYTIMER_H