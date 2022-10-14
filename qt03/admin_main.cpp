#include "admin_main.h"
#include "admin_plan.h"
#include "admin_wanted.h"
#include "admin_user_plan.h"
#include "ui_admin_main.h"
#include "admin_login.h"
#include "admin_checkuser.h"

admin_login *ad_Log;
admin_checkuser *ad_Check;

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
    QString picture[1]={":/admin_MainBack.jpg"};
    // 对象
    QPainter* painter=new QPainter(this);

    // 画图
    QPixmap pixmap;

    pixmap.load(picture[pos]);
    pixmap.scaled(439,277);
    painter->drawPixmap(0,0,439,277,pixmap);
}

void admin_main::on_pushButton_back_clicked()
{
    // 返回上一个界面
    ad_Log = new admin_login(this);
    ad_Log->show();
    this->hide();
}


void admin_main::on_pushButton_plan_clicked()
{
    // 跳转到套餐管理界面
    admin_plan *planUI = new admin_plan(this);
    planUI->show();
    this->hide();
}

void admin_main::on_pushButton_user_plan_clicked() {
    // 跳转到用户套餐界面
    admin_user_plan *planUI = new admin_user_plan(this);
    planUI->show();
    this->hide();
}

void admin_main::on_pushButton_wanted_clicked(){
    // 跳转到用户意向界面
    admin_wanted *wantedUI = new admin_wanted(this);
    wantedUI->show();
    this->hide();
}


void admin_main::on_pushButton_wanted_2_clicked()
{
    ad_Check = new admin_checkuser(this);
    ad_Check->show();
    this->hide();
}

