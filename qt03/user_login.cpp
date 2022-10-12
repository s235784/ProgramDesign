#include "user_login.h"
#include "ui_user_login.h"

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
     pixmap.scaled(638,483);
    painter->drawPixmap(0,0,638,483,pixmap);
}

void user_login::on_pushButton_more_clicked()
{

    more=new user_selfchoose(this);
    more->show();
    this->hide();

}


void user_login::on_pushButton_back_clicked()
{
    this->parentWidget()->show();
    delete this;
}

