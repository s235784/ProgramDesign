/********************************************************************************
** Form generated from reading UI file 'admin_checkuser.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_CHECKUSER_H
#define UI_ADMIN_CHECKUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_checkuser
{
public:
    QWidget *centralwidget;
    QListWidget *listWidget;
    QPushButton *pushButton_back;
    QLabel *logo;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *admin_checkuser)
    {
        if (admin_checkuser->objectName().isEmpty())
            admin_checkuser->setObjectName(QString::fromUtf8("admin_checkuser"));
        admin_checkuser->resize(500, 394);
        centralwidget = new QWidget(admin_checkuser);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 100, 501, 251));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(400, 20, 80, 31));
        logo = new QLabel(centralwidget);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(0, 0, 181, 71));
        logo->setStyleSheet(QString::fromUtf8("border-image: url(:/logo.jpg);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 80, 40, 20));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(375, 80, 51, 20));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 80, 51, 20));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(250, 80, 61, 20));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        admin_checkuser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(admin_checkuser);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 500, 17));
        admin_checkuser->setMenuBar(menubar);
        statusbar = new QStatusBar(admin_checkuser);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        admin_checkuser->setStatusBar(statusbar);

        retranslateUi(admin_checkuser);

        QMetaObject::connectSlotsByName(admin_checkuser);
    } // setupUi

    void retranslateUi(QMainWindow *admin_checkuser)
    {
        admin_checkuser->setWindowTitle(QCoreApplication::translate("admin_checkuser", "\346\237\245\347\234\213\347\224\250\346\210\267\350\257\204\344\273\267", nullptr));
        pushButton_back->setText(QCoreApplication::translate("admin_checkuser", "\350\277\224\345\233\236", nullptr));
        logo->setText(QString());
        label->setText(QCoreApplication::translate("admin_checkuser", "\347\274\226\345\217\267", nullptr));
        label_5->setText(QCoreApplication::translate("admin_checkuser", "\350\257\204\344\273\267", nullptr));
        label_3->setText(QCoreApplication::translate("admin_checkuser", "\346\211\213\346\234\272\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("admin_checkuser", "\350\257\204\345\210\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_checkuser: public Ui_admin_checkuser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_CHECKUSER_H