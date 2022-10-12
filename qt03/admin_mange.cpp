#include "admin_mange.h"
#include "ui_admin_mange.h"

admin_mange::admin_mange(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin_mange)
{
    ui->setupUi(this);
}

admin_mange::~admin_mange()
{
    delete ui;
}
void admin_mange::paintEvent(QPaintEvent *event)
{
    static int pos=0;
    QString picture[1]={":/background.jpg"};
    //对象
    QPainter* painter=new QPainter(this);

    //画图
    QPixmap pixmap;

    pixmap.load(picture[pos]);
     pixmap.scaled(356,240);
    painter->drawPixmap(0,0,356,240,pixmap);
}


void admin_mange::on_pushButton_back_clicked()
{
    //返回上一个界面
    this->parentWidget()->show();
    delete this;
}

