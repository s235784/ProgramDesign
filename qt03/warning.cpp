#include "warning.h"
#include "ui_warning.h"

warning::warning(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::warning)
{
    ui->setupUi(this);
}

warning::~warning()
{
    delete ui;
}
