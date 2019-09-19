#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    udpSocket = new QUdpSocket(this);
    connect(udpSocket,SIGNAL(readyRead()),this,SLOT(read_data_gram()));

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_send_clicked()
{
    QString msg = ui->msg->text();
    udpSocket->writeDatagram(msg.toStdString().c_str(),msg.size(),sendAddr,sendPort);
    ui->msg->setText("");
}

void Dialog::on_ip_returnPressed()
{
    qDebug("%s",ui->ip->text().toStdString().c_str());
    udpSocket->bind(QHostAddress(ui->ip->text()),ui->port->text().toUShort());

}

void Dialog::on_port_returnPressed()
{
   qDebug("%s",ui->port->text().toStdString().c_str());
   udpSocket->bind(QHostAddress(ui->ip->text()),ui->port->text().toUShort());
}

void Dialog::read_data_gram()
{
    qDebug("------------");
    char buf[256] = {};
    udpSocket->readDatagram(buf,sizeof(buf),&sendAddr,&sendPort);
    ui->show->append(buf);
    ui->send->setEnabled(true);
}
