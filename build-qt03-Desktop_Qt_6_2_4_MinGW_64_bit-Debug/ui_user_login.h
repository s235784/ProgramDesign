/********************************************************************************
** Form generated from reading UI file 'user_login.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_LOGIN_H
#define UI_USER_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_login
{
public:
    QWidget *centralwidget;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton_more;
    QPushButton *pushButton_back;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *user_login)
    {
        if (user_login->objectName().isEmpty())
            user_login->setObjectName(QString::fromUtf8("user_login"));
        user_login->resize(840, 578);
        centralwidget = new QWidget(user_login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 40, 40, 12));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, -10, 71, 61));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(341, 40, 51, 31));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(391, 0, 111, 41));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 0);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(391, 40, 111, 31));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 0);"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(260, 370, 371, 41));
        label_6->setFont(font);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(180, 410, 551, 41));
        label_7->setFont(font);
        pushButton_more = new QPushButton(centralwidget);
        pushButton_more->setObjectName(QString::fromUtf8("pushButton_more"));
        pushButton_more->setGeometry(QRect(260, 470, 221, 41));
        QFont font1;
        font1.setPointSize(15);
        pushButton_more->setFont(font1);
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(20, 499, 91, 31));
        QFont font2;
        font2.setPointSize(9);
        pushButton_back->setFont(font2);
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 80, 771, 271));
        user_login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(user_login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 840, 17));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        user_login->setMenuBar(menubar);
        statusbar = new QStatusBar(user_login);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        user_login->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(user_login);

        QMetaObject::connectSlotsByName(user_login);
    } // setupUi

    void retranslateUi(QMainWindow *user_login)
    {
        user_login->setWindowTitle(QCoreApplication::translate("user_login", "\345\245\227\351\244\220\351\200\211\346\213\251", nullptr));
        label_5->setText(QString());
        label->setText(QCoreApplication::translate("user_login", "\345\244\251\347\277\274", nullptr));
        label_2->setText(QCoreApplication::translate("user_login", "4G", nullptr));
        label_3->setText(QCoreApplication::translate("user_login", "\346\236\201\351\200\237\347\231\276\345\205\206", nullptr));
        label_4->setText(QCoreApplication::translate("user_login", "\347\225\205\344\272\253\345\205\250\347\220\203", nullptr));
        label_6->setText(QCoreApplication::translate("user_login", "\346\211\276\344\270\215\345\210\260\345\220\210\351\200\202\350\207\252\345\267\261\347\232\204\345\245\227\351\244\220\357\274\237", nullptr));
        label_7->setText(QCoreApplication::translate("user_login", "\347\202\271\345\207\273\346\233\264\345\244\232\346\235\245\350\277\233\350\241\214\345\256\232\345\210\266\344\270\223\345\261\236\344\272\216\344\275\240\350\207\252\345\267\261\347\232\204\345\245\227\351\244\220\345\220\247\357\274\201", nullptr));
        pushButton_more->setText(QCoreApplication::translate("user_login", "\347\255\233\351\200\211", nullptr));
        pushButton_back->setText(QCoreApplication::translate("user_login", "\350\277\224\345\233\236", nullptr));
        menu->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class user_login: public Ui_user_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_LOGIN_H
