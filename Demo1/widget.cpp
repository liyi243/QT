#include "widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //创建label对象
    QLabel* lab1= new QLabel("文本1",this);
    lab1->setAlignment(Qt::AlignCenter);
    lab1->setGeometry(150,150,300,50);
    //设置文本框的外观，包括字体的大小和颜色、按钮的背景色
    lab1->setStyleSheet("QLabel{font:15px;color:red;background-color:rgb(f9,f9,f9);}");
    lab1->setText("<a href=\"http://c.biancheng.net/view/9415.html\">QT教程");
    //点击提示
    lab1->setToolTip("点击超链接显示URL");
    //提示内容显示 1 秒
    lab1->setToolTipDuration(1000);
    //连接 信号和槽
    connect(lab1,&QLabel::linkActivated,lab1,&QLabel::setText);

    lab1->show();

    QLineEdit lineEdit(this);
    //指定输入框位于父窗口中的位置
    lineEdit.move(100,100);
    //设置提示信息
    lineEdit.setPlaceholderText("请输入账号...");
    //让输入框显示“一键清除”按钮
    lineEdit.setClearButtonEnabled(true);

    //创建密码输入框
    QLineEdit lineEditPass(this);
    lineEditPass.setPlaceholderText("请输入密码...");
    lineEditPass.move(100,150);
    //指定文本显示方式，保护用户账号安全
    lineEditPass.setEchoMode(QLineEdit::Password);

    //设置窗口大小
    resize(600,400);
    //固定窗口大小
    setFixedSize(600,400);

}

Widget::~Widget()
{
}

