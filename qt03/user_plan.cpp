#include "user_plan.h"
#include "ui_user_plan.h"

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

void user_plan::on_pushButton_clicked()
{
    // 返回上一个窗口
    this->parentWidget()->show();
    delete this;
}

