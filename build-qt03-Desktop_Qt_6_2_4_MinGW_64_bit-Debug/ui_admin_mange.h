/********************************************************************************
** Form generated from reading UI file 'admin_mange.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_MANGE_H
#define UI_ADMIN_MANGE_H

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

class Ui_admin_mange
{
public:
    QWidget *centralwidget;
    QLabel *logo;
    QPushButton *pushButton_back;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_add;
    QListWidget *listWidget;
    QLabel *label_6;
    QLabel *label_2;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *admin_mange)
    {
        if (admin_mange->objectName().isEmpty())
            admin_mange->setObjectName(QString::fromUtf8("admin_mange"));
        admin_mange->resize(501, 394);
        centralwidget = new QWidget(admin_mange);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        logo = new QLabel(centralwidget);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(0, 0, 101, 51));
        logo->setStyleSheet(QString::fromUtf8("border-image: url(:/logo.jpg);"));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(320, 10, 70, 30));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(5, 70, 40, 20));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(54, 70, 51, 20));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(119, 70, 61, 20));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(184, 70, 51, 20));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton_add = new QPushButton(centralwidget);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        pushButton_add->setGeometry(QRect(400, 10, 70, 30));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 90, 501, 271));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(440, 340, 51, 21));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(260, 70, 50, 20));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        admin_mange->setCentralWidget(centralwidget);
        menubar = new QMenuBar(admin_mange);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 501, 17));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        admin_mange->setMenuBar(menubar);
        statusbar = new QStatusBar(admin_mange);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        admin_mange->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(admin_mange);

        QMetaObject::connectSlotsByName(admin_mange);
    } // setupUi

    void retranslateUi(QMainWindow *admin_mange)
    {
        admin_mange->setWindowTitle(QCoreApplication::translate("admin_mange", "\347\256\241\347\220\206\344\274\230\346\203\240\345\245\227\351\244\220", nullptr));
        logo->setText(QString());
        pushButton_back->setText(QCoreApplication::translate("admin_mange", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("admin_mange", "\347\274\226\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("admin_mange", "\350\265\204\350\264\271 \345\205\203", nullptr));
        label_4->setText(QCoreApplication::translate("admin_mange", "\351\200\232\350\257\235 \345\210\206", nullptr));
        label_5->setText(QCoreApplication::translate("admin_mange", "\346\265\201\351\207\217 MB", nullptr));
        pushButton_add->setText(QCoreApplication::translate("admin_mange", "\345\242\236\345\212\240", nullptr));
        label_6->setText(QCoreApplication::translate("admin_mange", "\345\256\275\345\270\246", nullptr));
        label_2->setText(QCoreApplication::translate("admin_mange", "\345\270\246\345\256\275 Mb", nullptr));
        menu->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class admin_mange: public Ui_admin_mange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_MANGE_H