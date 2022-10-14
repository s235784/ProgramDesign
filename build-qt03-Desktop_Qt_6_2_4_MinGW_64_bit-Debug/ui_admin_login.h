/********************************************************************************
** Form generated from reading UI file 'admin_login.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_LOGIN_H
#define UI_ADMIN_LOGIN_H

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

class Ui_admin_login
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *input_login;
    QPushButton *pushButton_login;
    QPushButton *pushButton_back;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *admin_login)
    {
        if (admin_login->objectName().isEmpty())
            admin_login->setObjectName(QString::fromUtf8("admin_login"));
        admin_login->resize(518, 299);
        QFont font;
        font.setPointSize(9);
        admin_login->setFont(font);
        admin_login->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(admin_login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 10, 211, 31));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 130, 201, 31));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);"));
        input_login = new QLineEdit(centralwidget);
        input_login->setObjectName(QString::fromUtf8("input_login"));
        input_login->setGeometry(QRect(181, 180, 131, 21));
        pushButton_login = new QPushButton(centralwidget);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));
        pushButton_login->setGeometry(QRect(320, 180, 81, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        pushButton_login->setFont(font2);
        pushButton_login->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"    background-color: #f5f6fa;\n"
"    border-color: #2f3640;\n"
"    border-radius: 12px;\n"
"    border-style: solid;\n"
"    border-width: 1px;\n"
"    padding: 3px;\n"
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
        pushButton_back->setGeometry(QRect(10, 230, 80, 21));
        pushButton_back->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"    background-color: #f5f6fa;\n"
"    border-color: #2f3640;\n"
"    border-radius: 12px;\n"
"    border-style: solid;\n"
"    border-width: 1px;\n"
"    padding: 3px;\n"
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
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 180, 31, 20));
        QFont font3;
        font3.setPointSize(10);
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 60, 51, 51));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/admin_logo.jpg);\n"
"background-color: rgb(255, 255, 255);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 0, 161, 81));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/new_logo.png);"));
        admin_login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(admin_login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 518, 17));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        admin_login->setMenuBar(menubar);
        statusbar = new QStatusBar(admin_login);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        admin_login->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(admin_login);

        QMetaObject::connectSlotsByName(admin_login);
    } // setupUi

    void retranslateUi(QMainWindow *admin_login)
    {
        admin_login->setWindowTitle(QCoreApplication::translate("admin_login", "\347\256\241\347\220\206\345\221\230\347\231\273\351\231\206", nullptr));
        label->setText(QCoreApplication::translate("admin_login", "      \346\254\242\350\277\216\345\233\236\346\235\245", nullptr));
        label_2->setText(QCoreApplication::translate("admin_login", "Administrator", nullptr));
        input_login->setText(QString());
        pushButton_login->setText(QCoreApplication::translate("admin_login", "\347\231\273\345\275\225", nullptr));
        pushButton_back->setText(QCoreApplication::translate("admin_login", "\350\277\224\345\233\236", nullptr));
        label_4->setText(QCoreApplication::translate("admin_login", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QString());
        label_5->setText(QString());
        menu->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class admin_login: public Ui_admin_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_LOGIN_H
