#include "cmd/file.h"
#include "admin_login.h"
#include "ui_admin_login.h"
#include <string>
#include <iostream>
#include <QMessageBox>

admin_login::admin_login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin_login)
{
    ui->setupUi(this);
     ui->input_login->setPlaceholderText("请输入您的密码");
     // 隐藏密码
     ui->input_login->setEchoMode(QLineEdit::Password);

}

admin_login::~admin_login()
{
    delete ui;
}

void admin_login::paintEvent(QPaintEvent *event)
{
    static int pos=0;
    QString picture[1]={":/background.jpg"};
    // 对象
    QPainter* painter=new QPainter(this);

    // 画图
    QPixmap pixmap;

    pixmap.load(picture[pos]);
     pixmap.scaled(518,299);
    painter->drawPixmap(0,0,518,299,pixmap);
}

void admin_login::on_pushButton_back_clicked()
{
    this->parentWidget()->show();
    delete this;

}


void admin_login::on_pushButton_login_clicked()
{
    // 判断密码输入是否正确
    string passwordInput = ui -> input_login -> text().toStdString();
    string password = getAdminPassword();
    if (password == passwordInput) {
        log=new admin_main(this);
        log->show();
        this->hide();
    } else {
        // 不正确显示弹窗
        QMessageBox::warning(this, tr("登陆失败"), tr("密码错误，请重新输入。"), QMessageBox::Ok);
        ui->input_login->clear();
    }
}
