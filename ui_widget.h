/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Fri Sep 6 12:37:12 2019
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTextEdit *show;
    QLineEdit *msg;
    QPushButton *send;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(400, 300);
        show = new QTextEdit(Widget);
        show->setObjectName(QString::fromUtf8("show"));
        show->setGeometry(QRect(10, 10, 371, 221));
        msg = new QLineEdit(Widget);
        msg->setObjectName(QString::fromUtf8("msg"));
        msg->setGeometry(QRect(20, 250, 261, 27));
        send = new QPushButton(Widget);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(290, 250, 91, 27));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        send->setText(QApplication::translate("Widget", "send", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
