#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT


public:
    Widget(QWidget *parent = nullptr);
    ~Widget();


signals:
    void sendnum(QString num);

private slots:
    void on_pushButton_0_clicked();

    void setlineedit(QString num);
private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
