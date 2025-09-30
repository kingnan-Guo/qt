#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "senddata.h"
#include "receivedata.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class SendData;
class ReceiveData;
class MainWindow : public QMainWindow
{
    // 宏定义 QT的信号槽需要这个
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int i;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_pressed();

private:
    Ui::MainWindow *ui;
    SendData *sendData;
    ReceiveData *receiveData;

};
#endif // MAINWINDOW_H
