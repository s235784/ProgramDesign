#include "user_info.h"
#include "ui_user_info.h"

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

}
void user_info::on_pushButton_change_clicked()
{
    this->parentWidget()->show();
    delete this;
}

