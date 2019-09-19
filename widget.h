#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QUdpSocket>
#include <QHostAddress>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    QHostAddress addr;
    quint16 port;
    QUdpSocket* udpSocket;
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    
private slots:
    void on_send_clicked();
    void read_data_gram();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
