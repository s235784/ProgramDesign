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
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *user_plan)
    {
        if (user_plan->objectName().isEmpty())
            user_plan->setObjectName(QString::fromUtf8("user_plan"));
        user_plan->resize(466, 356);
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
        label_4->setGeometry(QRect(100, 170, 91, 31));
        QFont font1;
        font1.setPointSize(15);
        label_4->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 70, 81, 31));
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 120, 91, 31));
        label_3->setFont(font1);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(310, 70, 81, 31));
        label_5->setFont(font1);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(310, 120, 81, 31));
        label_6->setFont(font1);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(100, 220, 91, 31));
        label_7->setFont(font1);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(310, 170, 81, 31));
        label_8->setFont(font1);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(310, 220, 81, 31));
        label_9->setFont(font1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 280, 80, 31));
        user_plan->setCentralWidget(centralwidget);
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
        label_5->setText(QCoreApplication::translate("user_plan", "\345\210\206\351\222\237", nullptr));
        label_6->setText(QCoreApplication::translate("user_plan", "MB", nullptr));
        label_7->setText(QCoreApplication::translate("user_plan", "\350\265\204\350\264\271", nullptr));
        label_8->setText(QCoreApplication::translate("user_plan", "Mb", nullptr));
        label_9->setText(QCoreApplication::translate("user_plan", "\345\205\203", nullptr));
        pushButton->setText(QCoreApplication::translate("user_plan", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user_plan: public Ui_user_plan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_PLAN_H
