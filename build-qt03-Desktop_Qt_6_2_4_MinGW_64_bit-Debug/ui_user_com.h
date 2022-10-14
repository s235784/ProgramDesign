/********************************************************************************
** Form generated from reading UI file 'user_com.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_COM_H
#define UI_USER_COM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_com
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QPushButton *pushButton5;
    QPushButton *pushButton4;
    QLabel *labelTitle;
    QPushButton *pushButton3;
    QLabel *label;
    QTextEdit *textEdit_content;
    QPushButton *pushButton_submit;
    QPushButton *pushButton_submit_2;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *user_com)
    {
        if (user_com->objectName().isEmpty())
            user_com->setObjectName(QString::fromUtf8("user_com"));
        user_com->resize(526, 475);
        centralwidget = new QWidget(user_com);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton1 = new QPushButton(centralwidget);
        pushButton1->setObjectName(QString::fromUtf8("pushButton1"));
        pushButton1->setGeometry(QRect(160, 100, 24, 24));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton1->sizePolicy().hasHeightForWidth());
        pushButton1->setSizePolicy(sizePolicy);
        pushButton1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	height:24px;\n"
"	width:24px;\n"
"	border-image: url(:/off.jpg);\n"
"}\n"
"QPushButton::checked\n"
"{\n"
"	border-image: url(:/on.jpg);\n"
"}"));
        pushButton1->setCheckable(true);
        pushButton1->setChecked(true);
        pushButton2 = new QPushButton(centralwidget);
        pushButton2->setObjectName(QString::fromUtf8("pushButton2"));
        pushButton2->setGeometry(QRect(190, 100, 24, 24));
        sizePolicy.setHeightForWidth(pushButton2->sizePolicy().hasHeightForWidth());
        pushButton2->setSizePolicy(sizePolicy);
        pushButton2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	height:24px;\n"
"	width:24px;\n"
"	border-image: url(:/off.jpg);\n"
"}\n"
"QPushButton::checked\n"
"{\n"
"	border-image: url(:/on.jpg);\n"
"}"));
        pushButton2->setCheckable(true);
        pushButton2->setChecked(true);
        pushButton5 = new QPushButton(centralwidget);
        pushButton5->setObjectName(QString::fromUtf8("pushButton5"));
        pushButton5->setGeometry(QRect(280, 100, 24, 24));
        sizePolicy.setHeightForWidth(pushButton5->sizePolicy().hasHeightForWidth());
        pushButton5->setSizePolicy(sizePolicy);
        pushButton5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	height:24px;\n"
"	width:24px;\n"
"	border-image: url(:/off.jpg);\n"
"}\n"
"QPushButton::checked\n"
"{\n"
"	border-image: url(:/on.jpg);\n"
"}"));
        pushButton5->setCheckable(true);
        pushButton5->setChecked(true);
        pushButton4 = new QPushButton(centralwidget);
        pushButton4->setObjectName(QString::fromUtf8("pushButton4"));
        pushButton4->setGeometry(QRect(250, 100, 24, 24));
        sizePolicy.setHeightForWidth(pushButton4->sizePolicy().hasHeightForWidth());
        pushButton4->setSizePolicy(sizePolicy);
        pushButton4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	height:24px;\n"
"	width:24px;\n"
"	border-image: url(:/off.jpg);\n"
"}\n"
"QPushButton::checked\n"
"{\n"
"	border-image: url(:/on.jpg);\n"
"}"));
        pushButton4->setCheckable(true);
        pushButton4->setChecked(true);
        labelTitle = new QLabel(centralwidget);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(310, 100, 151, 24));
        QFont font;
        font.setPointSize(12);
        labelTitle->setFont(font);
        labelTitle->setAlignment(Qt::AlignCenter);
        pushButton3 = new QPushButton(centralwidget);
        pushButton3->setObjectName(QString::fromUtf8("pushButton3"));
        pushButton3->setGeometry(QRect(220, 100, 24, 24));
        sizePolicy.setHeightForWidth(pushButton3->sizePolicy().hasHeightForWidth());
        pushButton3->setSizePolicy(sizePolicy);
        pushButton3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	height:24px;\n"
"	width:24px;\n"
"	border-image: url(:/off.jpg);\n"
"}\n"
"QPushButton::checked\n"
"{\n"
"	border-image: url(:/on.jpg);\n"
"}"));
        pushButton3->setCheckable(true);
        pushButton3->setChecked(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 20, 321, 51));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);
        textEdit_content = new QTextEdit(centralwidget);
        textEdit_content->setObjectName(QString::fromUtf8("textEdit_content"));
        textEdit_content->setGeometry(QRect(170, 180, 121, 171));
        pushButton_submit = new QPushButton(centralwidget);
        pushButton_submit->setObjectName(QString::fromUtf8("pushButton_submit"));
        pushButton_submit->setGeometry(QRect(280, 400, 80, 31));
        pushButton_submit->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        pushButton_submit_2 = new QPushButton(centralwidget);
        pushButton_submit_2->setObjectName(QString::fromUtf8("pushButton_submit_2"));
        pushButton_submit_2->setGeometry(QRect(130, 400, 80, 31));
        pushButton_submit_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 100, 331, 281));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/user_com.png);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 10, 131, 81));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/logo_trans.png);"));
        user_com->setCentralWidget(centralwidget);
        label_2->raise();
        pushButton1->raise();
        pushButton2->raise();
        pushButton5->raise();
        pushButton4->raise();
        labelTitle->raise();
        pushButton3->raise();
        label->raise();
        textEdit_content->raise();
        pushButton_submit->raise();
        pushButton_submit_2->raise();
        label_3->raise();
        menubar = new QMenuBar(user_com);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 526, 17));
        user_com->setMenuBar(menubar);
        statusbar = new QStatusBar(user_com);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        user_com->setStatusBar(statusbar);

        retranslateUi(user_com);

        QMetaObject::connectSlotsByName(user_com);
    } // setupUi

    void retranslateUi(QMainWindow *user_com)
    {
        user_com->setWindowTitle(QCoreApplication::translate("user_com", "MainWindow", nullptr));
        pushButton1->setText(QString());
        pushButton2->setText(QString());
        pushButton5->setText(QString());
        pushButton4->setText(QString());
        labelTitle->setText(QCoreApplication::translate("user_com", "\351\235\236\345\270\270\345\245\275", nullptr));
        pushButton3->setText(QString());
        label->setText(QCoreApplication::translate("user_com", "\350\257\267\345\257\271\346\210\221\344\273\254\347\232\204\346\234\215\345\212\241\350\277\233\350\241\214\350\257\204\344\273\267", nullptr));
        pushButton_submit->setText(QCoreApplication::translate("user_com", "\346\217\220\344\272\244", nullptr));
        pushButton_submit_2->setText(QCoreApplication::translate("user_com", "\350\277\224\345\233\236", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class user_com: public Ui_user_com {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_COM_H
