#include "admin_userwant.h"
#include "ui_admin_userwant.h"

admin_userwant::admin_userwant(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin_userwant)
{
    ui->setupUi(this);
}

admin_userwant::~admin_userwant()
{
    delete ui;
}

void admin_userwant::on_pushButton_back_clicked()
{
    this->parentWidget()->show();
    delete this;
}

