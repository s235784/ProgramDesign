#include "admin_main.h"
#include "admin_plan.h"
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
    // 对象
    QPainter* painter=new QPainter(this);

    // 画图
    QPixmap pixmap;

    pixmap.load(picture[pos]);
     pixmap.scaled(356,240);
    painter->drawPixmap(0,0,356,240,pixmap);
}

void admin_main::on_pushButton_back_clicked()
{
    // 返回上一个界面
    this->parentWidget()->show();
    delete this;
}


void admin_main::on_pushButton_plan_clicked()
{
    // 跳转到套餐管理界面
    planUI = new admin_plan(this);
    planUI->show();
    this->hide();
}

void admin_main::on_pushButton_user_plan_clicked() {
    // 跳转到用户套餐界面
    // todo
}

void admin_main::on_pushButton_wanted_clicked(){
    // 跳转到用户意向界面
    // todo
}

