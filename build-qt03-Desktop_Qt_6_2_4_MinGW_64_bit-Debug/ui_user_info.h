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
    QPushButton *pushButton_confirm;
    QPushButton *pushButton_change;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *user_info)
    {
        if (user_info->objectName().isEmpty())
            user_info->setObjectName(QString::fromUtf8("user_info"));
        user_info->resize(336, 235);
        centralwidget = new QWidget(user_info);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 0, 201, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        pushButton_confirm = new QPushButton(centralwidget);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        pushButton_confirm->setGeometry(QRect(190, 170, 80, 18));
        pushButton_change = new QPushButton(centralwidget);
        pushButton_change->setObjectName(QString::fromUtf8("pushButton_change"));
        pushButton_change->setGeometry(QRect(60, 170, 80, 18));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 40, 61, 31));
        QFont font1;
        font1.setPointSize(15);
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 80, 61, 31));
        label_3->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 120, 61, 31));
        label_4->setFont(font1);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(160, 50, 81, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(160, 90, 81, 16));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(160, 130, 81, 16));
        user_info->setCentralWidget(centralwidget);
        menubar = new QMenuBar(user_info);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 336, 17));
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
        label->setText(QCoreApplication::translate("user_info", "\350\277\231\346\230\257\346\202\250\351\200\211\346\213\251\347\232\204\345\245\227\351\244\220", nullptr));
        pushButton_confirm->setText(QCoreApplication::translate("user_info", "\347\241\256\350\256\244", nullptr));
        pushButton_change->setText(QCoreApplication::translate("user_info", "\345\217\230\346\233\264", nullptr));
        label_2->setText(QCoreApplication::translate("user_info", "\351\200\232\350\257\235\346\227\266\351\225\277", nullptr));
        label_3->setText(QCoreApplication::translate("user_info", "4G\346\265\201\351\207\217", nullptr));
        label_4->setText(QCoreApplication::translate("user_info", "\345\256\275\345\270\246\350\264\267\346\254\276", nullptr));
        label_5->setText(QCoreApplication::translate("user_info", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("user_info", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("user_info", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user_info: public Ui_user_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_INFO_H
