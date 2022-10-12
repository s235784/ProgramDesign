#include "admin_login.h"
#include "ui_admin_login.h"
#include<iostream>
#include "vector"
#include "QMessageBox"


using namespace std;
admin_login::admin_login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin_login)
{
    ui->setupUi(this);
     ui->input_login->setPlaceholderText("请输入您的密码");
     //隐藏密码

}

admin_login::~admin_login()
{
    delete ui;
}

void admin_login::paintEvent(QPaintEvent *event)
{
    static int pos=0;
    QString picture[1]={":/background.jpg"};
    //对象
    QPainter* painter=new QPainter(this);

    //画图
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

    string password = ui->input_login->text().toStdString();
    vector<User>adminList;
    adminList.push_back(User("root","root",true));
    for (auto obj : adminList)
    {
        if(obj.password==password)
        {
            log=new admin_main(this);
            log->show();
            this->hide();

        };
    }
    QMessageBox::about(NULL, "错误", "账号或密码错误，请重试！");

}
User::User(string username0,string password0,bool isRoot0):password(password0),isRoot(isRoot0){};
