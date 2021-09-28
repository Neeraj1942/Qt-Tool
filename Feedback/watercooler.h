#ifndef WATERCOOLER_H
#define WATERCOOLER_H

#include <QObject>

class WaterCooler : public QObject
{
    Q_OBJECT
public:
    explicit WaterCooler(QObject *parent = nullptr);

signals:

};

#endif // WATERCOOLER_H
