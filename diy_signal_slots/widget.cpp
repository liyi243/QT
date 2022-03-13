#include "widget.h"
#include "ui_widget.h"
#include "QPushButton"
#include "QLineEdit"
#include "QGridLayout"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->resize(300,350);
    this->setFixedSize(300,350);
    QPushButton *btn0 = new QPushButton("0",this);
    QPushButton *btn1 = new QPushButton("1",this);
    QPushButton *btn2 = new QPushButton("2",this);
    QPushButton *btn3 = new QPushButton("3",this);
    QPushButton *btn4 = new QPushButton("4",this);
    QPushButton *btn5 = new QPushButton("5",this);
    QPushButton *btn6 = new QPushButton("6",this);
    QPushButton *btn7 = new QPushButton("7",this);
    QPushButton *btn8 = new QPushButton("8",this);
    QPushButton *btn9 = new QPushButton("9",this);
    QPushButton *btn_dot = new QPushButton(".",this);
    QPushButton *btn_add = new QPushButton("+",this);
    QPushButton *btn_sub = new QPushButton("-",this);
    QPushButton *btn_cheng = new QPushButton("x",this);
    QPushButton *btn_chu = new QPushButton("/",this);
    QPushButton *btn_equal = new QPushButton("=",this);
    QPushButton *btn_C = new QPushButton("C",this);
    QPushButton *btn_Del = new QPushButton("del",this);

    QLineEdit *tEdit = new QLineEdit("0",this);
   // tEdit->setPlaceholderText("1");
    //创建栅格布局
    QGridLayout *glayout = new QGridLayout(this);
    glayout->addWidget(tEdit,0,0,1,4);

    glayout->addWidget(btn_C,1,0,1,1);
    glayout->addWidget(btn_Del,1,1,1,1);
    glayout->addWidget(btn_add,1,2,1,1);
    glayout->addWidget(btn_sub,1,3,1,1);

    glayout->addWidget(btn7,2,0,1,1);
    glayout->addWidget(btn8,2,1,1,1);
    glayout->addWidget(btn9,2,2,1,1);
    glayout->addWidget(btn_cheng,2,3,1,1);

    glayout->addWidget(btn4,3,0,1,1);
    glayout->addWidget(btn5,3,1,1,1);
    glayout->addWidget(btn6,3,2,1,1);
    glayout->addWidget(btn_chu,3,3,1,1);

    glayout->addWidget(btn1,4,0,1,1);
    glayout->addWidget(btn2,4,1,1,1);
    glayout->addWidget(btn3,4,2,1,1);

    glayout->addWidget(btn_equal,4,3,2,1);

    glayout->addWidget(btn0,5,0,1,2);
    glayout->addWidget(btn_dot,5,2,1,1);

//    connect(btn1,&QPushButton::clicked,tEdit,[=](){
//        tEdit->setText("1");
//    }
//    );

//    void Widget:: renum(int num){
//        QString input_num0 =  tEdit->text();
//    }
}

Widget::~Widget()
{
    delete ui;
}


