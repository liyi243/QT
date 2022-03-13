#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <mypushbutton.h>
#include <mylabel.h>
#include <QMouseEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void  on_btn0();
    void  on_btn1();
    void  on_btn2();

    void sendnum(int num);

    //鼠标事件
    void mousePressEvent(QMouseEvent *e);
      void  keyPressEvent(QKeyEvent *event);
private:
    Ui::Widget *ui;
    mypushbutton  *btn0;
    mypushbutton  *btn1;
    mypushbutton  *btn2;
    mylabel *lab0;
};
#endif // WIDGET_H
