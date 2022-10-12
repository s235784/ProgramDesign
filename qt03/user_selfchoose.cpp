#include "user_selfchoose.h"
#include "ui_user_selfchoose.h"
#include "user_login.h"
user_selfchoose::user_selfchoose(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::user_selfchoose)
{
    ui->setupUi(this);
}

user_selfchoose::~user_selfchoose()
{
    delete ui;
}
void user_selfchoose::paintEvent(QPaintEvent *event)
{
    static int pos=0;
    QString picture[1]={":/back_user.jpg"};
    //对象
    QPainter* painter=new QPainter(this);
    //画图
    QPixmap pixmap;

    pixmap.load(picture[pos]);
     pixmap.scaled(395,237);
    painter->drawPixmap(0,0,395,237,pixmap);
}


void user_selfchoose::on_pushButton_back_clicked()
{

    this->parentWidget()->show();
    delete this;
}

