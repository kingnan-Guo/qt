#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)// ui = new ui:MainWindow
    ,i(4)// i = 4
{
    ui->setupUi(this);
    qDebug() << "构造函数 ";

    // 信号绑定
    // QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(close()));

    sendData = new SendData(this);
    receiveData = new ReceiveData(this);

    QObject::connect(sendData, SIGNAL(SendMessage()), receiveData , SLOT(receiveMessage()));
    QObject::connect(ui->pushButton, SIGNAL(clicked()), receiveData , SLOT(receiveMessage()));

    // 一个信号可以连接另一个信号
    QObject::connect(ui->pushButton, SIGNAL(SendMessage()), this , SIGNAL(iconSizeChanged()));
    // 发送信号
    emit sendData->SendMessage();

}

MainWindow::~MainWindow()
{
    qDebug() << "析构函数" ;
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    i++;
    qDebug() << i;
}


void MainWindow::on_pushButton_pressed()
{

}

