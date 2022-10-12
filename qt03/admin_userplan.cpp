#include "admin_userplan.h"
#include "ui_admin_userplan.h"

admin_userplan::admin_userplan(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin_userplan)
{
    ui->setupUi(this);
}

admin_userplan::~admin_userplan()
{
    delete ui;
}

void admin_userplan::on_pushButton_back_clicked()
{
    this->parentWidget()->show();
    delete this;

}

