#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QPushButton>


class mypushbutton : public QPushButton
{
    Q_OBJECT
public:
    explicit mypushbutton(QWidget *parent = nullptr);
   // mypushbutton *btn0 = new mypushbutton;

    void on_clicked_btn0();
};

#endif // MYPUSHBUTTON_H
