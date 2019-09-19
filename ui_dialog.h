/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Fri Sep 6 11:49:27 2019
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label_ip;
    QLabel *label_port;
    QLineEdit *ip;
    QLineEdit *port;
    QTextEdit *show;
    QLineEdit *msg;
    QPushButton *send;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 300);
        label_ip = new QLabel(Dialog);
        label_ip->setObjectName(QString::fromUtf8("label_ip"));
        label_ip->setGeometry(QRect(20, 20, 30, 25));
        QFont font;
        font.setPointSize(14);
        label_ip->setFont(font);
        label_ip->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_port = new QLabel(Dialog);
        label_port->setObjectName(QString::fromUtf8("label_port"));
        label_port->setGeometry(QRect(210, 20, 50, 25));
        label_port->setFont(font);
        label_port->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ip = new QLineEdit(Dialog);
        ip->setObjectName(QString::fromUtf8("ip"));
        ip->setGeometry(QRect(50, 20, 113, 25));
        port = new QLineEdit(Dialog);
        port->setObjectName(QString::fromUtf8("port"));
        port->setGeometry(QRect(260, 20, 113, 25));
        show = new QTextEdit(Dialog);
        show->setObjectName(QString::fromUtf8("show"));
        show->setGeometry(QRect(30, 60, 341, 161));
        msg = new QLineEdit(Dialog);
        msg->setObjectName(QString::fromUtf8("msg"));
        msg->setGeometry(QRect(30, 240, 261, 27));
        send = new QPushButton(Dialog);
        send->setObjectName(QString::fromUtf8("send"));
        send->setEnabled(false);
        send->setGeometry(QRect(310, 240, 61, 27));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label_ip->setText(QApplication::translate("Dialog", "IP:", 0, QApplication::UnicodeUTF8));
        label_port->setText(QApplication::translate("Dialog", "Port:", 0, QApplication::UnicodeUTF8));
        ip->setText(QApplication::translate("Dialog", "192.168.0.111", 0, QApplication::UnicodeUTF8));
        send->setText(QApplication::translate("Dialog", "send", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
