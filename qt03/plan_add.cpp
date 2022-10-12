#include "plan_add.h"
#include "ui_plan_add.h"

plan_add::plan_add(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::plan_add)
{
    ui->setupUi(this);
    QRegularExpressionValidator *pRevalidotor1=new QRegularExpressionValidator(QRegularExpression("[0-9]+$"),this);
    ui->lineEdit_money->setValidator(pRevalidotor1);
    QRegularExpressionValidator *pRevalidotor2=new QRegularExpressionValidator(QRegularExpression("[0-9]+$"),this);
    ui->lineEdit_flow->setValidator(pRevalidotor2);
    QRegularExpressionValidator *pRevalidotor3=new QRegularExpressionValidator(QRegularExpression("[0-9]+$"),this);
    ui->lineEdit_time->setValidator(pRevalidotor3);
    QRegularExpressionValidator *pRevalidotor4=new QRegularExpressionValidator(QRegularExpression("[0-9]+$"),this);
    ui->lineEdit_band->setValidator(pRevalidotor4);
}


plan_add::~plan_add()
{
    delete ui;
}

void plan_add::on_pushButton_confirm_clicked()
{
    //返回上一个界面
    this->parentWidget()->show();
    delete this;
}


void plan_add::on_pushButton_back_clicked()
{
    //返回上一个界面
    this->parentWidget()->show();
    delete this;
}

