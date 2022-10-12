#include "confirm.h"
#include "ui_confirm.h"

confirm::confirm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::confirm)
{
    ui->setupUi(this);
}

confirm::~confirm()
{
    delete ui;
}

void confirm::on_pushButton_clicked()
{
    close();
}

