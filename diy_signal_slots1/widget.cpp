#include "widget.h"
#include "ui_widget.h"
#include "QDebug"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->btn0 = new mypushbutton(this);
    this->btn1 = new mypushbutton(this);
    this->btn2 = new mypushbutton(this);
    this->btn0->setText("0");
    this->btn1->move(50,50);
    this->btn1->setText("1");
    this->btn2->move(100,50);
    this->btn2->setText("2");

    this->lab0 = new mylabel(this);
    this->lab0->move(100,100);
    this->lab0->resize(300,100);
    connect(btn0,&mypushbutton::clicked,this,&Widget::on_btn0);
    connect(btn1,&mypushbutton::clicked,this,&Widget::on_btn1);
    connect(btn2,&mypushbutton::clicked,this,&Widget::on_btn2);
}

Widget::~Widget()
{
    delete ui;
}
void Widget::on_btn0(){
    sendnum(0);
}
void Widget::on_btn1(){
    sendnum(1);
}
void Widget::on_btn2(){
    sendnum(2);
}
void Widget::sendnum(int num){
    QString num1;
    if(lab0->text()!=nullptr){
    num1 = lab0->text();
    num1 += QString::number(num);
    }
    else{
        num1 = QString::number(num);
    }

    emit lab0->setText(num1);
}
void Widget::mousePressEvent(QMouseEvent *e){
    if(e->button()==Qt::LeftButton){
        qDebug() <<"左键";
    }
}
void Widget::keyPressEvent(QKeyEvent *event)
{
    switch(event->key())
    {
        case Qt::Key_Up:
        {
            qDebug()<<"上建";
            break;
        }
        case Qt::Key_Left:
        {
            qDebug()<<"左键";
        }
    }
}
