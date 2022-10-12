#include "admin_main.h"
#include "ui_admin_main.h"

admin_main::admin_main(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin_main)
{
    ui->setupUi(this);
}

admin_main::~admin_main()
{
    delete ui;
}
void admin_main::paintEvent(QPaintEvent *event)
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

void admin_main::on_pushButton_back_clicked()
{
    this->parentWidget()->show();
    delete this;
}


void admin_main::on_pushButton_manage_clicked()
{
    man=new admin_mange(this);
    man->show();
    this->hide();

}
