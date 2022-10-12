/********************************************************************************
** Form generated from reading UI file 'plan_add.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAN_ADD_H
#define UI_PLAN_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_plan_add
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_money;
    QLineEdit *lineEdit_time;
    QLineEdit *lineEdit_flow;
    QLineEdit *lineEdit_band;
    QPushButton *pushButton_confirm;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton_back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *plan_add)
    {
        if (plan_add->objectName().isEmpty())
            plan_add->setObjectName(QString::fromUtf8("plan_add"));
        plan_add->resize(528, 334);
        centralwidget = new QWidget(plan_add);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 0, 391, 51));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 60, 91, 41));
        QFont font1;
        font1.setPointSize(15);
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 110, 81, 41));
        label_3->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 160, 81, 41));
        label_4->setFont(font1);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(110, 210, 81, 41));
        label_5->setFont(font1);
        lineEdit_money = new QLineEdit(centralwidget);
        lineEdit_money->setObjectName(QString::fromUtf8("lineEdit_money"));
        lineEdit_money->setGeometry(QRect(270, 70, 81, 21));
        lineEdit_time = new QLineEdit(centralwidget);
        lineEdit_time->setObjectName(QString::fromUtf8("lineEdit_time"));
        lineEdit_time->setGeometry(QRect(270, 120, 81, 20));
        lineEdit_flow = new QLineEdit(centralwidget);
        lineEdit_flow->setObjectName(QString::fromUtf8("lineEdit_flow"));
        lineEdit_flow->setGeometry(QRect(270, 170, 81, 20));
        lineEdit_band = new QLineEdit(centralwidget);
        lineEdit_band->setObjectName(QString::fromUtf8("lineEdit_band"));
        lineEdit_band->setGeometry(QRect(270, 220, 81, 20));
        pushButton_confirm = new QPushButton(centralwidget);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        pushButton_confirm->setGeometry(QRect(200, 260, 80, 31));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(380, 60, 91, 41));
        label_6->setFont(font1);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(380, 110, 81, 41));
        label_7->setFont(font1);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(380, 160, 81, 41));
        label_8->setFont(font1);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(380, 210, 81, 41));
        label_9->setFont(font1);
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(10, 260, 80, 31));
        plan_add->setCentralWidget(centralwidget);
        menubar = new QMenuBar(plan_add);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 528, 17));
        plan_add->setMenuBar(menubar);
        statusbar = new QStatusBar(plan_add);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        plan_add->setStatusBar(statusbar);

        retranslateUi(plan_add);

        QMetaObject::connectSlotsByName(plan_add);
    } // setupUi

    void retranslateUi(QMainWindow *plan_add)
    {
        plan_add->setWindowTitle(QCoreApplication::translate("plan_add", "\345\242\236\345\212\240\345\245\227\351\244\220\345\206\205\345\256\271", nullptr));
        label->setText(QCoreApplication::translate("plan_add", "\347\256\241\347\220\206\345\245\227\351\244\220\344\270\255\347\232\204\351\241\271\347\233\256", nullptr));
        label_2->setText(QCoreApplication::translate("plan_add", "\350\265\204\350\264\271", nullptr));
        label_3->setText(QCoreApplication::translate("plan_add", "\351\200\232\350\257\235\346\227\266\351\225\277", nullptr));
        label_4->setText(QCoreApplication::translate("plan_add", "\346\265\201\351\207\217", nullptr));
        label_5->setText(QCoreApplication::translate("plan_add", "\345\256\275\345\270\246", nullptr));
        pushButton_confirm->setText(QCoreApplication::translate("plan_add", "\347\241\256\350\256\244", nullptr));
        label_6->setText(QCoreApplication::translate("plan_add", "\345\205\203", nullptr));
        label_7->setText(QCoreApplication::translate("plan_add", "\345\210\206\351\222\237", nullptr));
        label_8->setText(QCoreApplication::translate("plan_add", "Mb", nullptr));
        label_9->setText(QCoreApplication::translate("plan_add", "Mbps", nullptr));
        pushButton_back->setText(QCoreApplication::translate("plan_add", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class plan_add: public Ui_plan_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAN_ADD_H
