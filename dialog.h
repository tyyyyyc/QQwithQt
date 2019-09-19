#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QUdpSocket>
#include <QHostAddress>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    QHostAddress sendAddr;
    quint16 sendPort;
    QUdpSocket* udpSocket;
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    
private slots:
    void on_send_clicked();

    void on_ip_returnPressed();

    void on_port_returnPressed();

    void read_data_gram();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
