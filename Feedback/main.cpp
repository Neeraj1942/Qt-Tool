#include <QCoreApplication>
#include <QtCore>

#include "watercooler.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    WaterCooler Cooler;

    return a.exec();
}
