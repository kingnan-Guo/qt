#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    // argc 是命令行参数个数， argv 是命令行参数
    // QApplication 管理QT程序运行和设置QT应用程序没针对 QWdget
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    // 事件循环 QEventloop::exec(),阻塞在这里等待其他键盘和鼠标的操作
    return a.exec();
}
