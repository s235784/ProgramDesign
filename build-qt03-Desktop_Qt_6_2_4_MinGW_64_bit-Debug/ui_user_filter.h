/********************************************************************************
** Form generated from reading UI file 'user_filter.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_FILTER_H
#define UI_USER_FILTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_filter
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_back;
    QLineEdit *lineEdit_band;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_7;
    QLineEdit *lineEdit_traffic;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit_duration;
    QLabel *label_6;
    QPushButton *pushButton_confirm;
    QListWidget *listWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_14;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_15;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *user_filter)
    {
        if (user_filter->objectName().isEmpty())
            user_filter->setObjectName(QString::fromUtf8("user_filter"));
        user_filter->resize(571, 420);
        centralwidget = new QWidget(user_filter);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(470, 90, 80, 31));
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
        lineEdit_band = new QLineEdit(centralwidget);
        lineEdit_band->setObjectName(QString::fromUtf8("lineEdit_band"));
        lineEdit_band->setGeometry(QRect(120, 140, 51, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 80, 91, 21));
        QFont font;
        font.setPointSize(15);
        label_3->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 140, 81, 21));
        label_5->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 110, 81, 21));
        label_4->setFont(font);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(180, 110, 51, 21));
        label_7->setFont(font);
        lineEdit_traffic = new QLineEdit(centralwidget);
        lineEdit_traffic->setObjectName(QString::fromUtf8("lineEdit_traffic"));
        lineEdit_traffic->setGeometry(QRect(120, 110, 51, 20));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(180, 140, 61, 21));
        label_8->setFont(font);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(230, 140, 121, 21));
        lineEdit_duration = new QLineEdit(centralwidget);
        lineEdit_duration->setObjectName(QString::fromUtf8("lineEdit_duration"));
        lineEdit_duration->setGeometry(QRect(120, 80, 51, 20));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(180, 80, 51, 21));
        label_6->setFont(font);
        pushButton_confirm = new QPushButton(centralwidget);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        pushButton_confirm->setGeometry(QRect(350, 90, 80, 31));
        pushButton_confirm->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        listWidget->setGeometry(QRect(0, 200, 571, 181));
        listWidget->setStyleSheet(QString::fromUtf8("border-image: url(:/user_fliter2.png);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-10, -10, 171, 91));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/logo_trans.png);\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 571, 211));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/user_fliter1.png);"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(220, 10, 461, 51));
        QFont font1;
        font1.setPointSize(18);
        label_10->setFont(font1);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 180, 51, 20));
        QFont font2;
        font2.setPointSize(10);
        label_11->setFont(font2);
        label_11->setStyleSheet(QString::fromUtf8(""));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(268, 180, 61, 20));
        label_14->setFont(font2);
        label_14->setStyleSheet(QString::fromUtf8(""));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(355, 180, 61, 20));
        label_12->setFont(font2);
        label_12->setStyleSheet(QString::fromUtf8(""));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(96, 180, 61, 20));
        label_13->setFont(font2);
        label_13->setStyleSheet(QString::fromUtf8(""));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(182, 180, 61, 20));
        label_15->setFont(font2);
        label_15->setStyleSheet(QString::fromUtf8(""));
        user_filter->setCentralWidget(centralwidget);
        label_2->raise();
        pushButton_back->raise();
        lineEdit_band->raise();
        label_3->raise();
        label_5->raise();
        label_4->raise();
        label_7->raise();
        lineEdit_traffic->raise();
        label_8->raise();
        label_9->raise();
        lineEdit_duration->raise();
        label_6->raise();
        pushButton_confirm->raise();
        listWidget->raise();
        label->raise();
        label_10->raise();
        label_11->raise();
        label_14->raise();
        label_12->raise();
        label_13->raise();
        label_15->raise();
        menubar = new QMenuBar(user_filter);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 571, 17));
        user_filter->setMenuBar(menubar);
        statusbar = new QStatusBar(user_filter);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        user_filter->setStatusBar(statusbar);

        retranslateUi(user_filter);

        QMetaObject::connectSlotsByName(user_filter);
    } // setupUi

    void retranslateUi(QMainWindow *user_filter)
    {
        user_filter->setWindowTitle(QCoreApplication::translate("user_filter", "\347\224\250\346\210\267\351\200\211\346\213\251\347\232\204\345\245\227\351\244\220", nullptr));
        pushButton_back->setText(QCoreApplication::translate("user_filter", "\350\277\224\345\233\236", nullptr));
        label_3->setText(QCoreApplication::translate("user_filter", "\347\224\265\350\257\235\346\227\266\351\225\277", nullptr));
        label_5->setText(QCoreApplication::translate("user_filter", "\345\256\275\345\270\246", nullptr));
        label_4->setText(QCoreApplication::translate("user_filter", "4G\346\265\201\351\207\217", nullptr));
        label_7->setText(QCoreApplication::translate("user_filter", "MB", nullptr));
        label_8->setText(QCoreApplication::translate("user_filter", "MBps", nullptr));
        label_9->setText(QCoreApplication::translate("user_filter", "\357\274\210\345\246\202\344\270\215\351\234\200\350\246\201\345\256\275\345\270\246\345\210\231\345\241\2530\357\274\211", nullptr));
        label_6->setText(QCoreApplication::translate("user_filter", "\345\210\206\351\222\237", nullptr));
        pushButton_confirm->setText(QCoreApplication::translate("user_filter", "\347\255\233\351\200\211", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_10->setText(QCoreApplication::translate("user_filter", "\346\210\221\344\273\254\345\260\206\344\274\232\345\260\275\346\234\200\345\244\247\345\212\252\345\212\233\346\273\241\350\266\263\346\202\250\347\232\204\351\234\200\346\261\202", nullptr));
        label_11->setText(QCoreApplication::translate("user_filter", "\347\274\226\345\217\267", nullptr));
        label_14->setText(QCoreApplication::translate("user_filter", "\346\265\201\351\207\217/Mb", nullptr));
        label_12->setText(QCoreApplication::translate("user_filter", "\345\270\246\345\256\275/Mb", nullptr));
        label_13->setText(QCoreApplication::translate("user_filter", "\350\265\204\350\264\271/\345\205\203", nullptr));
        label_15->setText(QCoreApplication::translate("user_filter", "\351\200\232\350\257\235/\345\210\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user_filter: public Ui_user_filter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_FILTER_H
