#include "widget.h"
#include "ui_widget.h"
#include "QPushButton"



Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //connect();
    //connect(this,&Widget::sendnum,ui->lineEdit,&Widget::setlineedit);
    //connect(ui->pushButton_0,&Widget::on_pushButton_0_clicked,ui->lineEdit,&Widget::setlineedit);

}



Widget::~Widget()
{
    delete ui;
}

void Widget:: setlineedit(QString num){
   ui->lineEdit->setText(num);
}

void Widget::on_pushButton_0_clicked()
{
   emit sendnum("0");
}

