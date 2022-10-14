#include "cmd/file.h"
#include "cmd/util.h"
#include "cmd/planStruct.h"
#include "user_main.h"
#include "user_plan.h"
#include "ui_user_plan.h"
#include <string>
#include <QMessageBox>

extern string phone;

user_plan::user_plan(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::user_plan)
{
    ui->setupUi(this);
}

user_plan::~user_plan()
{
    delete ui;
}

void user_plan::showEvent(QShowEvent* event) {
    Plan plan = getPlanByPhone(phone);

    string fee = getTwoPlacesDecimal(plan.fee);
    fee.append(" 元");
    ui->label_fee->setText(QString::fromStdString(fee));

    string duration = to_string(plan.duration);
    duration.append(" 分钟");
    ui->label_duration->setText(QString::fromStdString(duration));

    string traffic = to_string(plan.traffic);
    traffic.append(" MB");
    ui->label_traffic->setText(QString::fromStdString(traffic));

    string band = to_string(plan.broadband);
    band.append(" Mb");
    ui->label_band->setText(QString::fromStdString(band));
}

void user_plan::on_pushButton_clicked()
{
    // 返回上一个窗口
    user_main *userMainUI = new user_main(this);
    userMainUI->show();
    this->hide();
}

void user_plan::on_pushButton_comm_clicked()
{
    com=new user_com(this);
    com->show();
    this->hide();
}


