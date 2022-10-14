/********************************************************************************
** Form generated from reading UI file 'user_plan.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_PLAN_H
#define UI_USER_PLAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_plan
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_duration;
    QLabel *label_traffic;
    QLabel *label_7;
    QLabel *label_band;
    QLabel *label_fee;
    QPushButton *pushButton;
    QPushButton *pushButton_comm;
    QLabel *label_5;
    QLabel *label_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *user_plan)
    {
        if (user_plan->objectName().isEmpty())
            user_plan->setObjectName(QString::fromUtf8("user_plan"));
        user_plan->resize(466, 381);
        centralwidget = new QWidget(user_plan);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 10, 271, 51));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 210, 91, 31));
        QFont font1;
        font1.setPointSize(15);
        label_4->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 110, 81, 31));
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 160, 91, 31));
        label_3->setFont(font1);
        label_duration = new QLabel(centralwidget);
        label_duration->setObjectName(QString::fromUtf8("label_duration"));
        label_duration->setGeometry(QRect(260, 110, 81, 31));
        label_duration->setFont(font1);
        label_traffic = new QLabel(centralwidget);
        label_traffic->setObjectName(QString::fromUtf8("label_traffic"));
        label_traffic->setGeometry(QRect(260, 160, 81, 31));
        label_traffic->setFont(font1);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(100, 260, 91, 31));
        label_7->setFont(font1);
        label_band = new QLabel(centralwidget);
        label_band->setObjectName(QString::fromUtf8("label_band"));
        label_band->setGeometry(QRect(260, 210, 81, 31));
        label_band->setFont(font1);
        label_fee = new QLabel(centralwidget);
        label_fee->setObjectName(QString::fromUtf8("label_fee"));
        label_fee->setGeometry(QRect(260, 260, 111, 31));
        label_fee->setFont(font1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 310, 80, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        pushButton_comm = new QPushButton(centralwidget);
        pushButton_comm->setObjectName(QString::fromUtf8("pushButton_comm"));
        pushButton_comm->setGeometry(QRect(240, 310, 80, 31));
        pushButton_comm->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 10, 471, 331));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/user_plan_new.png);"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(-10, 10, 91, 71));
        label_6->setStyleSheet(QString::fromUtf8("border-image: url(:/logo_trans.png);"));
        user_plan->setCentralWidget(centralwidget);
        label_5->raise();
        label->raise();
        label_4->raise();
        label_2->raise();
        label_3->raise();
        label_duration->raise();
        label_traffic->raise();
        label_7->raise();
        label_band->raise();
        label_fee->raise();
        pushButton->raise();
        pushButton_comm->raise();
        label_6->raise();
        menubar = new QMenuBar(user_plan);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 466, 17));
        user_plan->setMenuBar(menubar);
        statusbar = new QStatusBar(user_plan);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        user_plan->setStatusBar(statusbar);

        retranslateUi(user_plan);

        QMetaObject::connectSlotsByName(user_plan);
    } // setupUi

    void retranslateUi(QMainWindow *user_plan)
    {
        user_plan->setWindowTitle(QCoreApplication::translate("user_plan", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("user_plan", "\350\277\231\346\230\257\346\202\250\347\233\256\345\211\215\351\200\211\346\213\251\347\232\204\345\245\227\351\244\220", nullptr));
        label_4->setText(QCoreApplication::translate("user_plan", "\345\256\275\345\270\246", nullptr));
        label_2->setText(QCoreApplication::translate("user_plan", "\351\200\232\350\257\235\346\227\266\351\225\277", nullptr));
        label_3->setText(QCoreApplication::translate("user_plan", "4G\346\265\201\351\207\217", nullptr));
        label_duration->setText(QCoreApplication::translate("user_plan", "\345\210\206\351\222\237", nullptr));
        label_traffic->setText(QCoreApplication::translate("user_plan", "MB", nullptr));
        label_7->setText(QCoreApplication::translate("user_plan", "\350\265\204\350\264\271", nullptr));
        label_band->setText(QCoreApplication::translate("user_plan", "Mb", nullptr));
        label_fee->setText(QCoreApplication::translate("user_plan", "\345\205\203", nullptr));
        pushButton->setText(QCoreApplication::translate("user_plan", "\347\241\256\350\256\244", nullptr));
        pushButton_comm->setText(QCoreApplication::translate("user_plan", "\350\257\204\344\273\267", nullptr));
        label_5->setText(QString());
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class user_plan: public Ui_user_plan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_PLAN_H
