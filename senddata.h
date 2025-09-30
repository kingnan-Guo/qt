#ifndef SENDDATA_H
#define SENDDATA_H

#include <QObject>

class SendData: public QObject
{
    Q_OBJECT
public:
    // SendData();
    explicit SendData(QObject *parent = nullptr);

signals:// QT信号关键字
    void SendMessage();
};

#endif // SENDDATA_H
