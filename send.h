#ifndef SEND_H
#define SEND_H

#include <QObject>

class send : public QObject
{
    Q_OBJECT
public:
    explicit send(QObject *parent = nullptr);

signals:// QT信号关键字
    void sendMessage();

};

#endif // SEND_H
