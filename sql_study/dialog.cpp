#include "dialog.h"
#include "ui_dialog.h"



Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    createDB();
    createTable();
    qurryTable();//把数据库中的表查询显示出来
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::createDB(){
    //添加数据库驱动
    db = QSqlDatabase::addDatabase("QSQLITE");//QSQLITE一定不能写错，不然连不上驱动

    QString dbPath = "/Users/laoli/Desktop/code/QT/sql_study/student.db";
    //设置数据库名字（文件名）
    db.setDatabaseName(dbPath);
    //db.setDatabaseName("student.db");


    //打开数据库
    if(db.open() == true){
        qDebug() << "打开数据库成功";
    }
    else{
        qDebug() << "打开数据库失败";
    }

}
void Dialog::createTable(){
    QSqlQuery query;// 以无参方式创建默认在刚打开的数据库里
    QString str = QString("CREATE TABLE student(""id INT PRIMARY KEY NOT NULL,"
                          "name TEXT NOT NULL,"
                          "score REAL NOT NULL)");
    if(query.exec(str) == false){
        qDebug() << str;
        qDebug() <<"创建数据表失败";
    }
    else {
        qDebug() <<"创建数据表成功";


    }
}
void Dialog::qurryTable(){
    QString str = QString("SELECT * FROM student");
    model.setQuery(str);
    ui->tableView->setModel(&model);
}


//插入操作对应的槽函数
void Dialog::on_insertButton_clicked()
{
    QSqlQuery query;//创建一个用于插入的对象
    //组件上获取数据
    int id = ui->idEdit->text().toInt();
    QString name = ui->nameEdit->text();
    double score = ui->scoreEdit->text().toDouble();
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
        qurryTable();//显示一下
    }
}

//删除操作对应的槽函数:可以根据ID删除一条数据
void Dialog::on_deleteButton_clicked()
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
       qurryTable();//显示一下
   }
}

//修改操作对应的槽函数
void Dialog::on_updateButton_clicked()
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
        qurryTable();//显示一下
    }
}

//排序操作对应的槽函数
void Dialog::on_sortButton_clicked()
{
    //获取排序列名(id和score)
    QString value = ui->valuecomboBox->currentText();
    //获取排序方式
    QString condition;
    if(ui->condcomboBox->currentIndex() == 0){
        condition = "ASC";
    }
    else{
        condition = "DSEC";
    }
    QString str = QString("SELECT *FROM student ORDER BY %1 %2").arg(value).arg(condition);
    model.setQuery(str);
    ui->tableView->setModel(&model);
}

