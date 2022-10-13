#include "admin_checkuser.h"
#include "ui_admin_checkuser.h"

admin_checkuser::admin_checkuser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin_checkuser)
{
    ui->setupUi(this);
}

admin_checkuser::~admin_checkuser()
{
    delete ui;
}

void admin_checkuser::on_pushButton_back_clicked()
{
    this->parentWidget()->show();
    delete this;
}

