#ifndef MYWIDGEY_H
#define MYWIDGEY_H

#include <QWidget>


class MyWidgey : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidgey(QWidget *parent = nullptr);
    ~MyWidgey();
signals:
};

#endif // MYWIDGEY_H
