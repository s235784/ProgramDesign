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
    QLabel *label_2;
    QPushButton *pushButton_manage;
    QPushButton *pushButton_back;
    QPushButton *pushButton_check;
    QPushButton *pushButton_intend;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *admin_main)
    {
        if (admin_main->objectName().isEmpty())
            admin_main->setObjectName(QString::fromUtf8("admin_main"));
        admin_main->resize(356, 240);
        centralwidget = new QWidget(admin_main);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 60, 261, 41));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 101, 51));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/logo.jpg);"));
        pushButton_manage = new QPushButton(centralwidget);
        pushButton_manage->setObjectName(QString::fromUtf8("pushButton_manage"));
        pushButton_manage->setGeometry(QRect(10, 110, 80, 31));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(279, 180, 61, 21));
        pushButton_check = new QPushButton(centralwidget);
        pushButton_check->setObjectName(QString::fromUtf8("pushButton_check"));
        pushButton_check->setGeometry(QRect(130, 110, 80, 31));
        pushButton_intend = new QPushButton(centralwidget);
        pushButton_intend->setObjectName(QString::fromUtf8("pushButton_intend"));
        pushButton_intend->setGeometry(QRect(250, 110, 80, 31));
        admin_main->setCentralWidget(centralwidget);
        menubar = new QMenuBar(admin_main);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 356, 17));
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
        label_2->setText(QString());
        pushButton_manage->setText(QCoreApplication::translate("admin_main", "\345\245\227\351\244\220\347\256\241\347\220\206", nullptr));
        pushButton_back->setText(QCoreApplication::translate("admin_main", "\350\277\224\345\233\236", nullptr));
        pushButton_check->setText(QCoreApplication::translate("admin_main", "\346\211\200\346\234\211\347\224\250\346\210\267\345\245\227\351\244\220", nullptr));
        pushButton_intend->setText(QCoreApplication::translate("admin_main", "\347\224\250\346\210\267\346\204\217\345\220\221\345\245\227\351\244\220", nullptr));
        menu->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class admin_main: public Ui_admin_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_MAIN_H
