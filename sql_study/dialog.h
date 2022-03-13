#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

//数据库连接
#include <QSqlDatabase>
//sql语句
#include <QSqlQuery>
//查询结果集
#include <QSqlQueryModel>
//获取执行sql失败的原因
#include <QSqlError>

#include <QMessageBox>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
private:
    void createDB();//完成数据库的创建
    void createTable();//完成数据表的创建
    void qurryTable();//完成数据的查询操作

private slots:
    //插入操作对应的槽函数
    void on_insertButton_clicked();
    //删除操作对应的槽函数
    void on_deleteButton_clicked();
    //修改操作对应的槽函数
    void on_updateButton_clicked();
    //排序操作对应的槽函数
    void on_sortButton_clicked();

private:
    Ui::Dialog *ui;
    QSqlDatabase db;//用于建立数据库连接
    QSqlQueryModel model;//保存结果集

};
#endif // DIALOG_H
