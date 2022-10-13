#include "user_com.h"
#include "ui_user_com.h"
#include "QMessageBox"

user_com::user_com(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::user_com)
{
    ui->setupUi(this);
    ui->textEdit_com->setPlaceholderText("请输入您对我们的建议");

    connect(ui->pushButton1, &QPushButton::clicked, [=](){
        ui->pushButton1->setChecked(true);
        ui->pushButton2->setChecked(false);
        ui->pushButton3->setChecked(false);
        ui->pushButton4->setChecked(false);
        ui->pushButton5->setChecked(false);
        ui->labelTitle->setText(QStringLiteral("非常不满意"));
    });

    connect(ui->pushButton2, &QPushButton::clicked, [=](){
        ui->pushButton1->setChecked(true);
        ui->pushButton2->setChecked(true);
        ui->pushButton3->setChecked(false);
        ui->pushButton4->setChecked(false);
        ui->pushButton5->setChecked(false);
        ui->labelTitle->setText(QStringLiteral("不满意"));
    });
    connect(ui->pushButton3, &QPushButton::clicked, [=](){
        ui->pushButton1->setChecked(true);
        ui->pushButton2->setChecked(true);
        ui->pushButton3->setChecked(true);
        ui->pushButton4->setChecked(false);
        ui->pushButton5->setChecked(false);
        ui->labelTitle->setText(QStringLiteral("一般"));
    });
    connect(ui->pushButton4, &QPushButton::clicked, [=]()
    {
        ui->pushButton1->setChecked(true);
        ui->pushButton2->setChecked(true);
        ui->pushButton3->setChecked(true);
        ui->pushButton4->setChecked(true);
        ui->pushButton5->setChecked(false);
        ui->labelTitle->setText(QStringLiteral("满意"));
    });
    connect(ui->pushButton5, &QPushButton::clicked, [=]()
    {
        ui->pushButton1->setChecked(true);
        ui->pushButton2->setChecked(true);
        ui->pushButton3->setChecked(true);
        ui->pushButton4->setChecked(true);
        ui->pushButton5->setChecked(true);

        ui->labelTitle->setText(QStringLiteral("非常满意"));
    });
}

user_com::~user_com()
{
    delete ui;
}





void user_com::on_pushButton_submit_clicked()
{
    QMessageBox::information(this, "感谢","谢谢您的评价与建议，我们后续会继续改进以更好地服务您");
}

