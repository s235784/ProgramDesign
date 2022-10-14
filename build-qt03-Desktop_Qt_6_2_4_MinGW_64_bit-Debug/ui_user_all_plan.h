/********************************************************************************
** Form generated from reading UI file 'user_all_plan.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_ALL_PLAN_H
#define UI_USER_ALL_PLAN_H

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

class Ui_user_all_plan
{
public:
    QWidget *centralwidget;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton_more;
    QPushButton *pushButton_back;
    QListWidget *listWidget;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_15;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *user_all_plan)
    {
        if (user_all_plan->objectName().isEmpty())
            user_all_plan->setObjectName(QString::fromUtf8("user_all_plan"));
        user_all_plan->resize(840, 578);
        centralwidget = new QWidget(user_all_plan);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 70, 40, 12));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(290, 370, 371, 41));
        QFont font;
        font.setPointSize(20);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 208, 88);"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(190, 410, 551, 41));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 208, 88);"));
        pushButton_more = new QPushButton(centralwidget);
        pushButton_more->setObjectName(QString::fromUtf8("pushButton_more"));
        pushButton_more->setGeometry(QRect(290, 470, 221, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        pushButton_more->setFont(font1);
        pushButton_more->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"    background-color: #f5f6fa;\n"
"    border-color: #2f3640;\n"
"    border-radius: 15px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\345\201\234\347\225\231\345\234\250\346\214\211\351\222\256\344\270\212\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\346\214\211\345\216\213\344\270\213\345\216\273\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}"));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(20, 499, 91, 31));
        pushButton_back->setFont(font1);
        pushButton_back->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"    background-color: #f5f6fa;\n"
"    border-color: #2f3640;\n"
"    border-radius: 15px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\345\201\234\347\225\231\345\234\250\346\214\211\351\222\256\344\270\212\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\346\214\211\345\216\213\344\270\213\345\216\273\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 90, 841, 281));
        listWidget->setStyleSheet(QString::fromUtf8("background-image: url(:/all_plan.png);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 70, 51, 20));
        QFont font2;
        font2.setPointSize(10);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(150, 70, 61, 20));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1280, -20, 50, 20));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(1350, -20, 50, 20));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(1200, -20, 51, 20));
        label_9->setFont(font2);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(540, 70, 61, 20));
        label_11->setFont(font2);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(270, 70, 61, 20));
        label_13->setFont(font2);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(400, 70, 61, 20));
        label_14->setFont(font2);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 171, 91));
        label->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/logo_trans.png);"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(0, 0, 841, 91));
        label_10->setStyleSheet(QString::fromUtf8("border-image: url(:/all_plan.png);"));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(-1, 370, 851, 171));
        label_12->setStyleSheet(QString::fromUtf8("border-image: url(:/all_plan3.png);"));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(280, 20, 551, 41));
        label_15->setFont(font);
        label_15->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 208, 88);"));
        user_all_plan->setCentralWidget(centralwidget);
        label_12->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        pushButton_more->raise();
        pushButton_back->raise();
        listWidget->raise();
        label_2->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label->raise();
        label_14->raise();
        label_3->raise();
        label_11->raise();
        label_4->raise();
        label_13->raise();
        label_15->raise();
        menubar = new QMenuBar(user_all_plan);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 840, 17));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        user_all_plan->setMenuBar(menubar);
        statusbar = new QStatusBar(user_all_plan);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        user_all_plan->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(user_all_plan);

        QMetaObject::connectSlotsByName(user_all_plan);
    } // setupUi

    void retranslateUi(QMainWindow *user_all_plan)
    {
        user_all_plan->setWindowTitle(QCoreApplication::translate("user_all_plan", "\345\245\227\351\244\220\351\200\211\346\213\251", nullptr));
        label_5->setText(QString());
        label_6->setText(QCoreApplication::translate("user_all_plan", "\346\211\276\344\270\215\345\210\260\345\220\210\351\200\202\350\207\252\345\267\261\347\232\204\345\245\227\351\244\220\357\274\237", nullptr));
        label_7->setText(QCoreApplication::translate("user_all_plan", "\344\270\255\345\233\275\347\224\265\344\277\241\346\216\250\345\207\272\344\272\206\345\205\250\346\226\260\347\255\233\351\200\211\345\212\237\350\203\275\357\274\214\345\277\253\346\235\245\350\257\225\350\257\225\345\220\247\357\274\201", nullptr));
        pushButton_more->setText(QCoreApplication::translate("user_all_plan", "\347\255\233\351\200\211", nullptr));
        pushButton_back->setText(QCoreApplication::translate("user_all_plan", "\350\277\224\345\233\236", nullptr));
        label_3->setText(QCoreApplication::translate("user_all_plan", "\347\274\226\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("user_all_plan", "\350\265\204\350\264\271/\345\205\203", nullptr));
        label_2->setText(QCoreApplication::translate("user_all_plan", "\346\265\201\351\207\217/MB", nullptr));
        label_8->setText(QCoreApplication::translate("user_all_plan", "\345\270\246\345\256\275/Mb", nullptr));
        label_9->setText(QCoreApplication::translate("user_all_plan", "\351\200\232\350\257\235/\345\210\206", nullptr));
        label_11->setText(QCoreApplication::translate("user_all_plan", "\345\270\246\345\256\275/Mb", nullptr));
        label_13->setText(QCoreApplication::translate("user_all_plan", "\351\200\232\350\257\235/\345\210\206", nullptr));
        label_14->setText(QCoreApplication::translate("user_all_plan", "\346\265\201\351\207\217/Mb", nullptr));
        label->setText(QString());
        label_10->setText(QString());
        label_12->setText(QString());
        label_15->setText(QCoreApplication::translate("user_all_plan", "\344\273\245\344\270\213\346\230\257\344\270\272\346\202\250\347\262\276\351\200\211\347\232\204\345\245\227\351\244\220", nullptr));
        menu->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class user_all_plan: public Ui_user_all_plan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_ALL_PLAN_H
