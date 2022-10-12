/********************************************************************************
** Form generated from reading UI file 'confirm.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRM_H
#define UI_CONFIRM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_confirm
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *confirm)
    {
        if (confirm->objectName().isEmpty())
            confirm->setObjectName(QString::fromUtf8("confirm"));
        confirm->resize(248, 160);
        centralwidget = new QWidget(confirm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 10, 71, 21));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 40, 191, 16));
        QFont font1;
        font1.setPointSize(15);
        label_2->setFont(font1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 80, 71, 31));
        confirm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(confirm);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 248, 17));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        confirm->setMenuBar(menubar);
        statusbar = new QStatusBar(confirm);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        confirm->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(confirm);

        QMetaObject::connectSlotsByName(confirm);
    } // setupUi

    void retranslateUi(QMainWindow *confirm)
    {
        confirm->setWindowTitle(QCoreApplication::translate("confirm", "\350\256\242\350\264\255\346\210\220\345\212\237", nullptr));
        label->setText(QCoreApplication::translate("confirm", "\346\201\255\345\226\234\357\274\201", nullptr));
        label_2->setText(QCoreApplication::translate("confirm", "\346\202\250\345\267\262\346\210\220\345\212\237\350\256\242\350\264\255\346\255\244\345\245\227\351\244\220\357\274\201", nullptr));
        pushButton->setText(QCoreApplication::translate("confirm", "\347\241\256\345\256\232", nullptr));
        menu->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class confirm: public Ui_confirm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRM_H
