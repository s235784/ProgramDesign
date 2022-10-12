#include "user_info.h"
#include "ui_user_info.h"
#include "QMessageBox"

user_info::user_info(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::user_info)
{
    ui->setupUi(this);
}

user_info::~user_info()
{
    delete ui;
}

void user_info::on_pushButton_confirm_clicked()
{
    //弹出上一个窗口
 QMessageBox::information(this,"确认","您已成功订购该套餐");
}
void user_info::on_pushButton_change_clicked()
{
    //返回上一个窗口
    this->parentWidget()->show();
    delete this;
}

