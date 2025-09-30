#include "widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    // this->setStyleSheet("QWidget {background-color: blue}");
    button = new QPushButton;
    button->setParent(this);
    button->setText("button");
    button->setGeometry(10,20,200,200);
    // button->show();
    this->resize(1024, 768);

    label = new QLabel(this);
    label->setGeometry(0,0,100,100);
    // label->setStyleSheet("QLabel {background-color: yellow  }");


    label2 = new QLabel(this);
    label2->setGeometry(300,300,310,310);
    label2->setObjectName("label2");


    qDialog = new QDialog(this);
    qDialog->setModal(true);
    qDialog->resize(200, 100);




    myWidgey = new MyWidgey(this);

    setupUI();
    setupConnections();

}

Widget::~Widget() {
    // delete myWidgey;
}



void Widget::setupUI()
{
    inputEdit = new QLineEdit(this);
    inputEdit->setGeometry(10, 120, 300, 35);
    inputEdit->setPlaceholderText("请输入文本...");

    // 创建第二个输入框
    inputEdit2 = new QLineEdit(this);
    inputEdit2->setGeometry(10, 170, 300, 35);
    inputEdit2->setPlaceholderText("第二个输入框...");


}

void Widget::setupConnections()
{
    connect(inputEdit, &QLineEdit::textChanged, this, &Widget::onTextChanged);


    // 连接按钮点击信号
    connect(button, &QPushButton::clicked, this, &Widget::onButtonClicked);

}

void Widget::onTextChanged(const QString &text)
{

     // qDebug() <<  "内容变化:" << text;
    QLineEdit *senderEdit = qobject_cast<QLineEdit*>(sender());

    QString editName = (senderEdit == inputEdit) ? "第一个输入框" : "第二个输入框";
    label2->setText(QString("%1: %2").arg(editName).arg(text));

    qDebug() << editName << "内容变化:" << text;

}

void Widget::onButtonClicked()
{
    qDebug() <<  "onButtonClicked  inputEdit " << inputEdit->text();

    qDialog->show();

    inputEdit2->setText(QString("当前时间: "));
}
