#include "mytcpserver.h"

MyTcpServer::MyTcpServer(QObject *parent) : QObject(parent)


{
    server = new QTcpServer(this);


    connect(server, SIGNAL(newConnection()),
            this, SLOT(newConnection()));

    if(!server->listen(QHostAddress::Any, 3333))
    {
        qDebug() << "Server could not start";
    }
    else
    {
        qDebug() << "Server started!";
    }
}

void MyTcpServer::newConnection()
{


    QTcpSocket *socket = server->nextPendingConnection();

    socket->write("This is client\r\n");
    socket->flush();

    socket->waitForBytesWritten(2500);

    socket->close();
}

