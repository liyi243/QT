#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <page_login.h>

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>

#include <QDebug>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void createDB();
    void createTable();
    void queryTable();

private slots:
    void on_btn_exit_clicked();

    void on_soushuoButton_clicked();

    void on_addButton_clicked();

    void on_gaiButton_clicked();

    void on_delButton_clicked();

private:
    Ui::MainWindow *ui;
    Page_login m_dlglogin;

    QSqlDatabase db;
    QSqlQueryModel model;
};
#endif // MAINWINDOW_H
