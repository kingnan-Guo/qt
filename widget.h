#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include "mywidgey.h"
#include <QLabel>
#include <QDialog>
#include <QLineEdit>
#include <QVBoxLayout>



class MyWidgey;
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QPushButton *button;
    QLabel *label;
    QLabel *label2;
    MyWidgey *myWidgey;
    QDialog * qDialog;


    void setupUI();                                 // 初始化UI
    void setupConnections();                        // 设置信号槽连接


    // 新增输入框相关
    QLineEdit *inputEdit;
    QLineEdit *inputEdit2;
    QLabel *statusLabel;

    void onTextChanged(const QString &text);        // 监听文本变化
    void onButtonClicked();                         // 按钮点击槽函数
};
#endif // WIDGET_H
