#include "clientdialog.h"
#include "ui_clientdialog.h"

ClientDialog::ClientDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ClientDialog)
{
    ui->setupUi(this);
    status = false;//离线
    connect(&tcpSocket,&QTcpSocket::connected,this,&ClientDialog::onConnected);
    connect(&tcpSocket,&QTcpSocket::disconnected,this,&ClientDialog::onDisConnect);
    connect(&tcpSocket,&QTcpSocket::readyRead,this,&ClientDialog::onReadyRead);
    connect(&tcpSocket,&QTcpSocket::errorOccurred,this,&ClientDialog::onError);
    //connect(&tcpSocket,SIGNAL(error(QAbstractSocket::SocketError)),this,SLOT(onError()));
}

ClientDialog::~ClientDialog()
{
    delete ui;
}

//发送按钮对应的槽函数
void ClientDialog::on_sendButton_clicked()
{
    //获取用户输入框消息
    QString msg = ui->messageEdit->text();
    if(msg ==""){
        return;
    }
    else{
        msg = username +": "+ msg;
        tcpSocket.write(msg.toUtf8());
        //清空消息框
        ui->messageEdit->clear();
    }
}

//连接服务器按钮对应的槽函数
void ClientDialog::on_conncetButton_clicked()
{
    //如果当前是离线状态，则建立与服务器的连接
    if(status == false){
        //获取服务器Ip
        serverIP.setAddress(ui->serveripEdit->text());
        //获取服务器端口
        serverPort = ui->portEdit->text().toShort();
        //获取聊天室昵称
        username = ui->usernameEdit->text();
        //向服务器发送连接请求
        //成功发送信号connected
        //失败发送信号error
        tcpSocket.connectToHost(serverIP,serverPort);
    }
    //如果当前是在线状态，则断开与服务器的连接
    else{
            //向聊天室发送离开聊天室的消息
        QString msg = username + ":离开了聊天室";
        tcpSocket.write(msg.toUtf8());
        //关闭和服务器的连接,发送disconnected
        tcpSocket.disconnectFromHost();

    }
}

//和服务器连接成功时执行的槽函数
void ClientDialog::onConnected(){
    status = true;//在线状态
    ui->sendButton->setEnabled(true);//恢复按钮状态
    ui->serveripEdit->setEnabled(false);//禁用IP
    ui->portEdit->setEnabled(false);
    ui->usernameEdit->setEnabled(false);
    ui->conncetButton->setText("离开聊天室");

    //向服务器发送进入聊天室的消息
    QString msg = username + ":进入了聊天室";
    //toUtf8:QString转换QByteArray
    tcpSocket.write(msg.toUtf8());
}
//和服务器断开连接时要执行的槽函数
void ClientDialog::onDisConnect(){
    status = false;//离线状态
    ui->sendButton->setEnabled(false);//禁用按钮状态
    ui->serveripEdit->setEnabled(true);//恢复IP
    ui->portEdit->setEnabled(true);
    ui->usernameEdit->setEnabled(true);
    ui->conncetButton->setText("连接服务器");
}
//接收聊天消息槽函数
void ClientDialog::onReadyRead(){
    if(tcpSocket.bytesAvailable()){
        //接收消息
        QByteArray buf = tcpSocket.readAll();
        ui->listWidget->addItem(buf);
        ui->listWidget->scrollToBottom();
    }
}
//网络异常槽函数
void ClientDialog::onError(){
    //errorString()用于获取网络异常的原因
    QMessageBox::critical(this,"ERROR",tcpSocket.errorString());
}
