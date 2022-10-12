/********************************************************************************
** Form generated from reading UI file 'user_main.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_MAIN_H
#define UI_USER_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_main
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton_userplan;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *user_main)
    {
        if (user_main->objectName().isEmpty())
            user_main->setObjectName(QString::fromUtf8("user_main"));
        user_main->resize(598, 330);
        centralwidget = new QWidget(user_main);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 0, 301, 61));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        pushButton_userplan = new QPushButton(centralwidget);
        pushButton_userplan->setObjectName(QString::fromUtf8("pushButton_userplan"));
        pushButton_userplan->setGeometry(QRect(180, 90, 221, 51));
        QFont font1;
        font1.setPointSize(15);
        pushButton_userplan->setFont(font1);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 190, 221, 51));
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 250, 80, 31));
        user_main->setCentralWidget(centralwidget);
        menubar = new QMenuBar(user_main);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 598, 17));
        user_main->setMenuBar(menubar);
        statusbar = new QStatusBar(user_main);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        user_main->setStatusBar(statusbar);

        retranslateUi(user_main);

        QMetaObject::connectSlotsByName(user_main);
    } // setupUi

    void retranslateUi(QMainWindow *user_main)
    {
        user_main->setWindowTitle(QCoreApplication::translate("user_main", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("user_main", "\345\260\212\346\225\254\347\232\204\347\224\265\344\277\241\347\224\250\346\210\267\346\202\250\345\245\275", nullptr));
        pushButton_userplan->setText(QCoreApplication::translate("user_main", "\345\245\227\351\244\220\351\200\211\346\213\251", nullptr));
        pushButton_2->setText(QCoreApplication::translate("user_main", "\346\210\221\347\232\204\345\245\227\351\244\220", nullptr));
        pushButton_3->setText(QCoreApplication::translate("user_main", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user_main: public Ui_user_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_MAIN_H
