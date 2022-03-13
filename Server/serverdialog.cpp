#include "serverdialog.h"
#include "ui_serverdialog.h"

serverDialog::serverDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::serverDialog)
{
    ui->setupUi(this);
    //当有客户端向服务器发送连接请求，发送信号newConnection
    connect(&tcpServer,&QTcpServer::newConnection,this,&serverDialog::onNewConnection);
    //当定时器到时将会发送信号:timeout
    connect(&timer,&QTimer::timeout,this,&serverDialog::onTimeout);
}

serverDialog::~serverDialog()
{
    delete ui;
}

//创建服务器按钮对应的槽函数
void serverDialog::on_creatButton_clicked()
{
    port = ui->portEdit->text().toShort();//转成短整形
    //设置服务器ip和端口
    if(tcpServer.listen(QHostAddress::Any,port)==true){
        qDebug() << "服务器创建成功!";
        //禁用 创建服务器和 端口输入
        ui->creatButton->setEnabled(false);
        ui->portEdit->setEnabled(false);

        //开启定时器
        timer.start(3000);//相当于3s检查一次
    }
    else{
        qDebug() << "服务器创建失败!";
    }
}
//响应客户端连接请求槽函数
void serverDialog::onNewConnection(){
    //获取和客户端通信的套接字
    QTcpSocket* tcpClient=tcpServer.nextPendingConnection();
    //保存套接字到容器
    tcpClintList.append(tcpClient);
    //当客户端向服务器发送消息时，通信套接字发送信号：readyRead
    connect(tcpClient,&QTcpSocket::readyRead,this,&serverDialog::onReadyRead);
}
//接收客户端消息的槽函数
void serverDialog::onReadyRead(){
    //便利容器是哪个客户端给服务器发消息
    for(int i=0; i<tcpClintList.size();i++){
        //bytesAvailable():获取当前套接字等待读取消息的字节数
        //如果返回的结果是0说明没有消息，返回大于0说明当前套接字有消息
        if(tcpClintList.at(i)->bytesAvailable()){
             //读取消息并保存
            //readAll:把当前套接字的消息读取出来并保存到buf
            //QbyteArray相当于c中char数组，但其好处是可以动态变化，动态增加减少
            QByteArray buf = tcpClintList.at(i)->readAll();
            //显示一下聊天消息
            ui->listWidget->addItem(buf);
            ui->listWidget->scrollToBottom();//讲最新但消息回滚到最底部
            //转发消息给所有在线客户端
            sendMessage(buf);
        }
    }
}
//转发消息给其他客户端(Qbytearray要转发的消息，数据缓存区)
void serverDialog::sendMessage(const QByteArray& buf){
    //给每一个客户端的通信套接字都发个消息
    for (int i=0;i<tcpClintList.size();i++) {
        tcpClintList.at(i)->write(buf);
    }
}

void serverDialog::onTimeout(){
    //便利检查容器中保存的客户端通信套接字是否已经断开连接，如果是则删除
    for(int i=0;i<tcpClintList.size();i++){
        //state()返回套接字状态
        if(tcpClintList.at(i)->state() ==QAbstractSocket::UnconnectedState){
            tcpClintList.removeAt(i);//删掉第i个套接字(写到这里会存在连续断开的套接字删不干净)
            i--; //
        }
    }
}
