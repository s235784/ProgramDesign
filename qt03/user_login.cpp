#include "user_login.h"
#include "ui_user_login.h"
#include "QMessageBox"


user_login::user_login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::user_login)
{
    ui->setupUi(this);
}

user_login::~user_login()
{
    delete ui;
}
void user_login::paintEvent(QPaintEvent *event)
{
    static int pos=0;
    QString picture[1]={":/back_user.jpg"};
    //对象
    QPainter* painter=new QPainter(this);

    //画图
    QPixmap pixmap;

    pixmap.load(picture[pos]);
     pixmap.scaled(840,578);
    painter->drawPixmap(0,0,840,578,pixmap);
}

void user_login::on_pushButton_more_clicked()
{
    //跳转到用户自己选择
    more=new user_selfchoose(this);
    more->show();
    this->hide();

}


void user_login::on_pushButton_back_clicked()
{
    //返回上一个窗口
    this->parentWidget()->show();
    delete this;
}


void user_login::on_pushButton_confirm_clicked()
{
    //弹出确认界面
    QMessageBox::information(this,"确认","您已成功订购该套餐");
}


void user_login::on_pushButton_confirm_2_clicked()
{
    //弹出确认界面
    QMessageBox::information(this,"确认","您已成功订购该套餐");

}


void user_login::on_pushButton_confirm_3_clicked()
{
    //弹出确认界面
    QMessageBox::information(this,"确认","您已成功订购该套餐");
}

