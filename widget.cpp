#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    addr = QHostAddress("192.168.0.111");
    port = 8899;

    udpSocket = new QUdpSocket;
    udpSocket->bind(addr,7788);
    connect(udpSocket,SIGNAL(readyRead()),this,SLOT(read_data_gram()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_send_clicked()
{
    QString msg = ui->msg->text();
    udpSocket->writeDatagram(msg.toStdString().c_str(),msg.size(),addr,port);
    ui->msg->setText("");
}

void Widget::read_data_gram()
{
    qDebug("------------------");
    char buf[256] = {};
    udpSocket->readDatagram(buf,sizeof(buf),&addr,&port);
    ui->show->append(buf);
}
