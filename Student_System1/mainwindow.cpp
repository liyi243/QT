#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QTreeWidget"
#include "QTreeWidgetItem"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->m_dlglogin = new Page_login;

    m_dlglogin.show();

    //如果登陆成功，就打开新窗口
    connect(&m_dlglogin,&Page_login::sendloginSuccess,this, [&](){
        this->show();
    });
    ui->treeWidget->setColumnCount(1);
    QTreeWidgetItem *pf=new QTreeWidgetItem(QStringList()<<"学生信息管理系统");
    ui->treeWidget->addTopLevelItem(pf);

    QTreeWidgetItem *p1 = new QTreeWidgetItem(QStringList()<<"学生管理");
    QTreeWidgetItem *p2 = new QTreeWidgetItem(QStringList()<<"管理员管理");
    pf->addChild(p1);
    pf->addChild(p2);
    ui->treeWidget->expandAll();
    ui->stackedWidget->setCurrentIndex(0);

    createDB();
    createTable();
    queryTable();
}



MainWindow::~MainWindow()
{
    delete ui;
}

//================================

void MainWindow::createDB(){
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/Users/laoli/Desktop/code/QT/Student_System1/studentSystem.db");
    if(db.open() == false){
        qDebug() << "数据库打开失败";
    }
    else{
        qDebug() << "数据库打开成功";
    }
}
void MainWindow::createTable(){
    QSqlQuery query;
    QString str = QString("CREATE TABLE student(""id INT PRIMARY KEY NOT NULL,"
                          "name TEXT NOT NULL,"
                          "score REAL NOT NULL)");
    model.setQuery(str);
    ui->tableView->setModel(&model);
    if(query.exec(str) == false){
        qDebug() << str;
        qDebug() <<"创建数据表失败";
    }
    else {
        qDebug() <<"创建数据表成功";
    }
}
void MainWindow::queryTable(){
    QSqlQuery query;
    QString str = QString("SELECT * FROM student");
    model.setQuery(str);
    ui->tableView->setModel(&model);
    if(query.exec(str) == false){
        qDebug() << str;
        qDebug() <<"查询数据表失败";
    }
    else {
        qDebug() <<"查询数据表成功";
    }
}

void MainWindow::on_btn_exit_clicked()
{
    exit(0);
}


void MainWindow::on_soushuoButton_clicked()
{
    QSqlQuery query;
    int id = ui->lineEdit->text().toInt();
    QString str = QString("SELECT * FROM student WHERE id = %1").arg(id);
    model.setQuery(str);

    if(query.exec(str) ==false){
        qDebug() << "搜索出错";
    }
    else {
        qDebug()<< "搜索成功";

        ui->tableView->setModel(&model);
    }
}


void MainWindow::on_addButton_clicked()
{
    QSqlQuery query;//创建一个用于插入的对象
    //组件上获取数据
    int id = ui->idEdit->text().toInt();
    QString name = ui->nameEdit->text();
    double score = ui->scoreEdit->text().toDouble();
    ui->nameEdit->setAttribute(Qt::WA_InputMethodEnabled, false);

    //字符串拼接//字符串需要引号引起来,因为sql语句中写字符串就有引号引起来
    QString str = QString("INSERT INTO student(id,name,score) VALUES(%1,'%2',%3)"
                          ).arg(id).arg(name).arg(score);
    if(name == ""){
        QMessageBox::critical(this,"Error","姓名输入错误");
        return;
    }
    if(score < 0||score >100){
        QMessageBox::critical(this,"Error","成绩输入错误");
        return;
    }
    if(id == 0){
        QMessageBox::critical(this,"Error","ID输入错误");
        return;
    }
    if(query.exec(str) ==false){
        qDebug() << str;
    }
    else{
        qDebug() << "插入成功";
        queryTable();//显示一下
    }
}


void MainWindow::on_gaiButton_clicked()
{
    QSqlQuery query;
    int id = ui->idEdit->text().toInt();
    QString name = ui->nameEdit->text();
    double score = ui->scoreEdit->text().toDouble();
    QString str = QString("UPDATE student SET score = %1 WHERE id = %2 ").arg(score).arg(id) ;
    if(query.exec(str) == false){
        qDebug() << str;
    }
    else{
        qDebug() <<"修改成功";
        queryTable();//显示一下
    }


}


void MainWindow::on_delButton_clicked()
{
    QSqlQuery query;
    int id = ui->idEdit->text().toInt();
    QString str = QString("DELETE FROM student WHERE id = %1").arg(id);

    if(QMessageBox::question(this,"删除","确定要删除吗?",QMessageBox::Yes|QMessageBox::No)==QMessageBox::No){
        return;
    }

   if(query.exec(str) == false){
       qDebug() << str;
   }
   else{
       qDebug() <<"删除成功";
       queryTable();//显示一下
   }
}




