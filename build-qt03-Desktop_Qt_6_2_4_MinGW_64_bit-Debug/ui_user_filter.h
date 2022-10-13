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
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *user_filter)
    {
        if (user_filter->objectName().isEmpty())
            user_filter->setObjectName(QString::fromUtf8("user_filter"));
        user_filter->resize(569, 362);
        centralwidget = new QWidget(user_filter);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(470, 40, 80, 31));
        lineEdit_band = new QLineEdit(centralwidget);
        lineEdit_band->setObjectName(QString::fromUtf8("lineEdit_band"));
        lineEdit_band->setGeometry(QRect(120, 80, 51, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 20, 91, 21));
        QFont font;
        font.setPointSize(15);
        label_3->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 80, 81, 21));
        label_5->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 50, 81, 21));
        label_4->setFont(font);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(180, 50, 51, 21));
        label_7->setFont(font);
        lineEdit_traffic = new QLineEdit(centralwidget);
        lineEdit_traffic->setObjectName(QString::fromUtf8("lineEdit_traffic"));
        lineEdit_traffic->setGeometry(QRect(120, 50, 51, 20));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(180, 80, 61, 21));
        label_8->setFont(font);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(230, 80, 121, 21));
        lineEdit_duration = new QLineEdit(centralwidget);
        lineEdit_duration->setObjectName(QString::fromUtf8("lineEdit_duration"));
        lineEdit_duration->setGeometry(QRect(120, 20, 51, 20));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(180, 20, 51, 21));
        label_6->setFont(font);
        pushButton_confirm = new QPushButton(centralwidget);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        pushButton_confirm->setGeometry(QRect(350, 40, 80, 31));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 110, 551, 211));
        user_filter->setCentralWidget(centralwidget);
        menubar = new QMenuBar(user_filter);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 569, 17));
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
    } // retranslateUi

};

namespace Ui {
    class user_filter: public Ui_user_filter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_FILTER_H
