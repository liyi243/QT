#ifndef SERVERDIALOG_H
#define SERVERDIALOG_H

#include <QDialog>

#include <QTcpServer>
#include <QTcpSocket>
#include <QtDebug>

#include <QTimer> //增加定时器

QT_BEGIN_NAMESPACE
namespace Ui { class serverDialog; }
QT_END_NAMESPACE

class serverDialog : public QDialog
{
    Q_OBJECT

public:
    serverDialog(QWidget *parent = nullptr);
    ~serverDialog();

private slots:
    //创建服务器对应的槽函数
    void on_creatButton_clicked();
    //响应客户端连接请求槽函数
    void onNewConnection();
    //接收客户端消息的槽函数
    void onReadyRead();
    //转发消息给其他客户端(Qbytearray要转发的消息，数据缓存区)
    void sendMessage(const QByteArray& buf);
    //定时器到时后将执行的槽函数
    void onTimeout();
private:
    Ui::serverDialog *ui;
    QTcpServer tcpServer;
    quint16 port; //无符号整型（16bit类）;服务器端口
    QList<QTcpSocket*> tcpClintList;//容器：保存所有和客户端通信的套接字

    QTimer timer;//定时器:通过定时器检查现在的套接字中是否有已断开的，有就删掉
};
#endif // SERVERDIALOG_H
