#include "widget.h"

#include <QApplication>
#include <QFile>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile file(":/style.qss");
    // 判断文件是否存在
    if(file.exists()){
        // 以只读形式打开
        file.open(QFile::ReadOnly);
        // 以字符串的方式 保存读出结果
        QString styleSheet = QLatin1String(file.readAll());
        // 设置全局样式
        qApp->setStyleSheet(styleSheet);
        // 关闭文件
        file.close();
    }

    Widget w;
    w.show();
    return a.exec();
}
