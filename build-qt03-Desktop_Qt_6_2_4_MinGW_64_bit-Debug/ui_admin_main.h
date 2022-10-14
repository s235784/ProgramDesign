/********************************************************************************
** Form generated from reading UI file 'admin_main.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_MAIN_H
#define UI_ADMIN_MAIN_H

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

class Ui_admin_main
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton_plan;
    QPushButton *pushButton_back;
    QPushButton *pushButton_user_plan;
    QPushButton *pushButton_wanted;
    QLabel *logo;
    QPushButton *pushButton_wanted_2;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *admin_main)
    {
        if (admin_main->objectName().isEmpty())
            admin_main->setObjectName(QString::fromUtf8("admin_main"));
        admin_main->resize(439, 277);
        centralwidget = new QWidget(admin_main);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 20, 241, 41));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);
        pushButton_plan = new QPushButton(centralwidget);
        pushButton_plan->setObjectName(QString::fromUtf8("pushButton_plan"));
        pushButton_plan->setGeometry(QRect(119, 80, 101, 31));
        pushButton_plan->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        pushButton_back->setGeometry(QRect(10, 210, 71, 21));
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
        pushButton_user_plan = new QPushButton(centralwidget);
        pushButton_user_plan->setObjectName(QString::fromUtf8("pushButton_user_plan"));
        pushButton_user_plan->setGeometry(QRect(240, 80, 101, 31));
        pushButton_user_plan->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        pushButton_wanted = new QPushButton(centralwidget);
        pushButton_wanted->setObjectName(QString::fromUtf8("pushButton_wanted"));
        pushButton_wanted->setGeometry(QRect(119, 130, 101, 31));
        pushButton_wanted->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        logo = new QLabel(centralwidget);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(0, 0, 101, 51));
        logo->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/new_logo.png);"));
        pushButton_wanted_2 = new QPushButton(centralwidget);
        pushButton_wanted_2->setObjectName(QString::fromUtf8("pushButton_wanted_2"));
        pushButton_wanted_2->setGeometry(QRect(240, 130, 101, 31));
        pushButton_wanted_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        admin_main->setCentralWidget(centralwidget);
        menubar = new QMenuBar(admin_main);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 439, 17));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        admin_main->setMenuBar(menubar);
        statusbar = new QStatusBar(admin_main);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        admin_main->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(admin_main);

        QMetaObject::connectSlotsByName(admin_main);
    } // setupUi

    void retranslateUi(QMainWindow *admin_main)
    {
        admin_main->setWindowTitle(QCoreApplication::translate("admin_main", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("admin_main", "\346\202\250\345\217\257\344\273\245\350\277\233\350\241\214\345\246\202\344\270\213\346\223\215\344\275\234", nullptr));
        pushButton_plan->setText(QCoreApplication::translate("admin_main", "\345\245\227\351\244\220\347\256\241\347\220\206", nullptr));
        pushButton_back->setText(QCoreApplication::translate("admin_main", "\350\277\224\345\233\236", nullptr));
        pushButton_user_plan->setText(QCoreApplication::translate("admin_main", "\346\211\200\346\234\211\347\224\250\346\210\267\345\245\227\351\244\220", nullptr));
        pushButton_wanted->setText(QCoreApplication::translate("admin_main", "\347\224\250\346\210\267\346\204\217\345\220\221\345\245\227\351\244\220", nullptr));
        logo->setText(QString());
        pushButton_wanted_2->setText(QCoreApplication::translate("admin_main", "\346\237\245\347\234\213\347\224\250\346\210\267\350\257\204\344\273\267", nullptr));
        menu->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class admin_main: public Ui_admin_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_MAIN_H
