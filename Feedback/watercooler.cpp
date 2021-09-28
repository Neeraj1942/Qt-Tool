#include "watercooler.h"
#include "person.h"


WaterCooler::WaterCooler(QObject *parent) : QObject(parent)
{
        Person Cathy;
        Person Bob;
        Person Sally;

        Cathy.Name= "CHATTY CATHY";
        Bob.Name= "POOR BOB";
        Sally.Name = "SILLY SALLY";





        connect(&Cathy,SIGNAL(Speak(QString)),&Bob,SLOT(Listen(QString)));
        connect(&Cathy,SIGNAL(Speak(QString)),&Sally,SLOT(Listen(QString)));
        Cathy.Gossip("I heard Mark is bald");



}
