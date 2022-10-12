/********************************************************************************
** Form generated from reading UI file 'warning.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNING_H
#define UI_WARNING_H

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

class Ui_warning
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_return;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *warning)
    {
        if (warning->objectName().isEmpty())
            warning->setObjectName(QString::fromUtf8("warning"));
        warning->resize(218, 141);
        centralwidget = new QWidget(warning);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 20, 91, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 60, 181, 20));
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 20, 41, 31));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/warning2.jpg);"));
        pushButton_return = new QPushButton(centralwidget);
        pushButton_return->setObjectName(QString::fromUtf8("pushButton_return"));
        pushButton_return->setGeometry(QRect(60, 80, 80, 18));
        warning->setCentralWidget(centralwidget);
        menubar = new QMenuBar(warning);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 218, 17));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        warning->setMenuBar(menubar);
        statusbar = new QStatusBar(warning);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        warning->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(warning);

        QMetaObject::connectSlotsByName(warning);
    } // setupUi

    void retranslateUi(QMainWindow *warning)
    {
        warning->setWindowTitle(QCoreApplication::translate("warning", "\350\255\246\345\221\212\357\274\201", nullptr));
        label->setText(QCoreApplication::translate("warning", "\350\255\246\345\221\212\357\274\201", nullptr));
        label_2->setText(QCoreApplication::translate("warning", "\346\202\250\346\211\200\350\276\223\345\205\245\347\232\204\344\277\241\346\201\257\346\234\211\350\257\257\357\274\214\350\257\267\351\207\215\346\226\260\350\276\223\345\205\245", nullptr));
        label_3->setText(QString());
        pushButton_return->setText(QCoreApplication::translate("warning", "\347\241\256\345\256\232", nullptr));
        menu->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class warning: public Ui_warning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNING_H
