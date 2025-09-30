#include "mywidgey.h"
#include <QDebug>

MyWidgey::MyWidgey(QWidget *parent)
    : QWidget{parent}
{

}

MyWidgey::~MyWidgey()
{
    qDebug() << "MyWidgey close";
}
