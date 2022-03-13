#include "widget.h"
#include "ui_widget.h"
#include "QPainter"
#include "QPixmap"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}
//重写绘图事件
void Widget::paintEvent(QPaintEvent *){
    //实例化画家对象,this指定绘图设备
    //drawLine划线
//    QPainter painter(this);
//    //设置画笔
//    QPen pen(QColor(255,0,0));
//    pen.setWidth(3);
//    painter.setPen(pen);

//    painter.drawLine(QPoint(0,0),QPoint(100,100));
//    //画圆
//    painter.drawEllipse(QPoint(100,100),50,50);

//    painter.drawPixmap(100,100,QPixmap(":/img/01.png"));

    QPixmap pix(300,300);
    pix.fill(Qt::white);
    QPainter painter(&pix);
    painter.drawPixmap(0,0,QPixmap(":/img/01.png"));
    pix.save("/Users/laoli/Desktop/code/QT/pix.png");


}


Widget::~Widget()
{
    delete ui;
}

