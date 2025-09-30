#include "receivedata.h"
#include <QDebug>

ReceiveData::ReceiveData(QObject *parent)
    : QObject{parent}
{}

void ReceiveData::receiveMessage()
{
    qDebug() << "receiveMessage function" ;
}


