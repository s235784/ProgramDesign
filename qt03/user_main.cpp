#include "user_main.h"
#include "ui_user_main.h"

user_main::user_main(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::user_main)
{
    ui->setupUi(this);
}

user_main::~user_main()
{
    delete ui;
}

void user_main::on_pushButton_userplan_clicked()
{
    jump=new user_login(this);
    jump->show();
    this->hide();
}


void user_main::on_pushButton_3_clicked()
{
    //返回上一个窗口
    this->parentWidget()->show();
    delete this;
}


void user_main::on_pushButton_2_clicked()
{
    plan=new user_plan(this);
    plan->show();
    this->hide();
}

