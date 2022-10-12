/********************************************************************************
** Form generated from reading UI file 'admin_wanted.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_WANTED_H
#define UI_ADMIN_WANTED_H

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

class Ui_admin_wanted
{
public:
    QWidget *centralwidget;
    QLabel *logo;
    QPushButton *pushButton_back;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QListWidget *listWidget;
    QLabel *label_6;
    QLabel *label_2;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *admin_wanted)
    {
        if (admin_wanted->objectName().isEmpty())
            admin_wanted->setObjectName(QString::fromUtf8("admin_wanted"));
        admin_wanted->resize(501, 394);
        centralwidget = new QWidget(admin_wanted);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        logo = new QLabel(centralwidget);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(0, 0, 101, 51));
        logo->setStyleSheet(QString::fromUtf8("border-image: url(:/logo.jpg);"));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(420, 20, 70, 30));
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
        admin_wanted->setCentralWidget(centralwidget);
        menubar = new QMenuBar(admin_wanted);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 501, 17));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        admin_wanted->setMenuBar(menubar);
        statusbar = new QStatusBar(admin_wanted);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        admin_wanted->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(admin_wanted);

        QMetaObject::connectSlotsByName(admin_wanted);
    } // setupUi

    void retranslateUi(QMainWindow *admin_wanted)
    {
        admin_wanted->setWindowTitle(QCoreApplication::translate("admin_wanted", "\347\224\250\346\210\267\346\204\217\345\220\221\345\245\227\351\244\220", nullptr));
        logo->setText(QString());
        pushButton_back->setText(QCoreApplication::translate("admin_wanted", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("admin_wanted", "\347\274\226\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("admin_wanted", "\351\200\232\350\257\235/\345\210\206", nullptr));
        label_4->setText(QCoreApplication::translate("admin_wanted", "\346\265\201\351\207\217/MB", nullptr));
        label_5->setText(QCoreApplication::translate("admin_wanted", "\345\270\246\345\256\275/Mb", nullptr));
        label_6->setText(QCoreApplication::translate("admin_wanted", "\345\256\275\345\270\246", nullptr));
        label_2->setText(QCoreApplication::translate("admin_wanted", "\346\254\241\346\225\260", nullptr));
        menu->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class admin_wanted: public Ui_admin_wanted {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_WANTED_H
