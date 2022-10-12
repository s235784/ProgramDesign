/********************************************************************************
** Form generated from reading UI file 'user_info.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_INFO_H
#define UI_USER_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_info
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QListView *listView;
    QPushButton *pushButton_back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *user_info)
    {
        if (user_info->objectName().isEmpty())
            user_info->setObjectName(QString::fromUtf8("user_info"));
        user_info->resize(569, 322);
        centralwidget = new QWidget(user_info);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 0, 561, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        listView = new QListView(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(10, 31, 541, 201));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(10, 250, 80, 31));
        user_info->setCentralWidget(centralwidget);
        menubar = new QMenuBar(user_info);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 569, 17));
        user_info->setMenuBar(menubar);
        statusbar = new QStatusBar(user_info);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        user_info->setStatusBar(statusbar);

        retranslateUi(user_info);

        QMetaObject::connectSlotsByName(user_info);
    } // setupUi

    void retranslateUi(QMainWindow *user_info)
    {
        user_info->setWindowTitle(QCoreApplication::translate("user_info", "\347\224\250\346\210\267\351\200\211\346\213\251\347\232\204\345\245\227\351\244\220", nullptr));
        label->setText(QCoreApplication::translate("user_info", "\350\277\231\346\230\257\346\210\221\344\273\254\346\240\271\346\215\256\346\202\250\347\232\204\351\234\200\346\261\202\344\270\272\346\202\250\345\214\271\351\205\215\347\232\204\346\234\200\344\275\263\347\232\204\347\273\223\346\236\234", nullptr));
        pushButton_back->setText(QCoreApplication::translate("user_info", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user_info: public Ui_user_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_INFO_H
