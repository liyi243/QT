#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "mylabel.h"
#include <QLineEdit>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
};
#endif // WIDGET_H
