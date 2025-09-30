#ifndef RECEIVEDATA_H
#define RECEIVEDATA_H

#include <QObject>

class ReceiveData : public QObject
{
    Q_OBJECT
public:
    explicit ReceiveData(QObject *parent = nullptr);

signals:// QT信号关键字
public slots:
    void receiveMessage();


};

#endif // RECEIVEDATA_H




