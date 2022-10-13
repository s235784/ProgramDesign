#include "user_main.h"
#include "user_plan.h"
#include "ui_user_main.h"
#include <string>
#include <QMessageBox>

user_main::user_main(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::user_main)
{
    ui->setupUi(this);
    userAllPlan = new user_all_plan(this);
    userPlan = new user_plan(this);
}

user_main::~user_main()
{
    delete ui;
}

void user_main::showEvent(QShowEvent* event) {
    // 绑定事件
    connect(this, SIGNAL(sendPhoneToUserPlan(std::string&)),
            userPlan, SLOT(getPhoneToUserPlan(std::string&)),
            Qt::UniqueConnection);
    connect(this, SIGNAL(sendPhoneToUserAllPlan(std::string&)),
            userAllPlan, SLOT(getPhoneToUserAllPlan(std::string&)),
            Qt::UniqueConnection);
}

void user_main::on_pushButton_userplan_clicked()
{
    userAllPlan->show();
    emit sendPhoneToUserAllPlan(phone);
    this->hide();
}

void user_main::on_pushButton_2_clicked()
{
    userPlan->show();
    emit sendPhoneToUserPlan(phone);
    this->hide();
}

void user_main::on_pushButton_3_clicked()
{
    //返回上一个窗口
    this->parentWidget()->show();
    delete this;
}

void user_main::getUserPhoneSignal(std::string& phone) {
    // 传递用户手机号
    user_main::phone = phone;
}

