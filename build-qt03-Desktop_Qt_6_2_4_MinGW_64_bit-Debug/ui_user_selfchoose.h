/********************************************************************************
** Form generated from reading UI file 'user_selfchoose.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_SELFCHOOSE_H
#define UI_USER_SELFCHOOSE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_selfchoose
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_duration;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_traffic;
    QLineEdit *lineEdit_band;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton_back;
    QPushButton *pushButton_confirm;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *user_selfchoose)
    {
        if (user_selfchoose->objectName().isEmpty())
            user_selfchoose->setObjectName(QString::fromUtf8("user_selfchoose"));
        user_selfchoose->resize(518, 306);
        centralwidget = new QWidget(user_selfchoose);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 0, 251, 31));
        QFont font;
        font.setPointSize(17);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 30, 351, 31));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 80, 91, 21));
        QFont font1;
        font1.setPointSize(15);
        label_3->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(130, 110, 81, 21));
        label_4->setFont(font1);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(130, 140, 81, 21));
        label_5->setFont(font1);
        lineEdit_duration = new QLineEdit(centralwidget);
        lineEdit_duration->setObjectName(QString::fromUtf8("lineEdit_duration"));
        lineEdit_duration->setGeometry(QRect(230, 80, 51, 20));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(290, 80, 51, 21));
        label_6->setFont(font1);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(290, 110, 51, 21));
        label_7->setFont(font1);
        lineEdit_traffic = new QLineEdit(centralwidget);
        lineEdit_traffic->setObjectName(QString::fromUtf8("lineEdit_traffic"));
        lineEdit_traffic->setGeometry(QRect(230, 110, 51, 20));
        lineEdit_band = new QLineEdit(centralwidget);
        lineEdit_band->setObjectName(QString::fromUtf8("lineEdit_band"));
        lineEdit_band->setGeometry(QRect(230, 140, 51, 20));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(290, 140, 61, 21));
        label_8->setFont(font1);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(360, 140, 121, 21));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(10, 230, 80, 31));
        QFont font2;
        font2.setPointSize(9);
        pushButton_back->setFont(font2);
        pushButton_confirm = new QPushButton(centralwidget);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        pushButton_confirm->setGeometry(QRect(200, 190, 80, 31));
        pushButton_confirm->setFont(font2);
        user_selfchoose->setCentralWidget(centralwidget);
        menubar = new QMenuBar(user_selfchoose);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 518, 17));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        user_selfchoose->setMenuBar(menubar);
        statusbar = new QStatusBar(user_selfchoose);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        user_selfchoose->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(user_selfchoose);

        QMetaObject::connectSlotsByName(user_selfchoose);
    } // setupUi

    void retranslateUi(QMainWindow *user_selfchoose)
    {
        user_selfchoose->setWindowTitle(QCoreApplication::translate("user_selfchoose", "\345\256\232\345\210\266\351\234\200\346\261\202", nullptr));
        label->setText(QCoreApplication::translate("user_selfchoose", "\350\257\267\345\221\212\350\257\211\346\210\221\344\273\254\346\202\250\347\232\204\351\234\200\346\261\202", nullptr));
        label_2->setText(QCoreApplication::translate("user_selfchoose", "\346\210\221\344\273\254\345\260\206\344\270\272\346\202\250\345\214\271\351\205\215\346\234\200\345\220\210\351\200\202\347\232\204\345\245\227\351\244\220", nullptr));
        label_3->setText(QCoreApplication::translate("user_selfchoose", "\347\224\265\350\257\235\346\227\266\351\225\277", nullptr));
        label_4->setText(QCoreApplication::translate("user_selfchoose", "4G\346\265\201\351\207\217", nullptr));
        label_5->setText(QCoreApplication::translate("user_selfchoose", "\345\256\275\345\270\246", nullptr));
        label_6->setText(QCoreApplication::translate("user_selfchoose", "\345\210\206\351\222\237", nullptr));
        label_7->setText(QCoreApplication::translate("user_selfchoose", "MB", nullptr));
        label_8->setText(QCoreApplication::translate("user_selfchoose", "MBps", nullptr));
        label_9->setText(QCoreApplication::translate("user_selfchoose", "\357\274\210\345\246\202\344\270\215\351\234\200\350\246\201\345\256\275\345\270\246\345\210\231\345\241\2530\357\274\211", nullptr));
        pushButton_back->setText(QCoreApplication::translate("user_selfchoose", "\350\277\224\345\233\236", nullptr));
        pushButton_confirm->setText(QCoreApplication::translate("user_selfchoose", "\347\241\256\345\256\232", nullptr));
        menu->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class user_selfchoose: public Ui_user_selfchoose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_SELFCHOOSE_H
