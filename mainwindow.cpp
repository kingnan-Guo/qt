#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    button = new QPushButton(this);
    button->setText("button");
    button->setGeometry(10,20,200,200);
    // button->show();
    this->resize(1024, 768);
}

MainWindow::~MainWindow() {}
