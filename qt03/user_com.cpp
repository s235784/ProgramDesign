#include "cmd/file.h"
#include "cmd/commentStruct.h"
#include "user_com.h"
#include "ui_user_com.h"
#include "QMessageBox"

user_com::user_com(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::user_com)
{
    ui->setupUi(this);
}

user_com::~user_com()
{
    delete ui;
}

void user_com::showEvent(QShowEvent* event) {
    ui->textEdit_content->setPlaceholderText("请输入您对我们的建议");

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

void user_com::on_pushButton_submit_clicked()
{
    int fraction = getCheckBoxFraction();
    string content = ui->textEdit_content->toPlainText().toStdString();
    if (fraction == 0) {
        QMessageBox::warning(this, "错误",
                             "请输入您的评分。",
                             QMessageBox::Ok);
        return;
    }
    if (content.empty()) {
        QMessageBox::warning(this, "错误",
                             "请输入您的评价。",
                             QMessageBox::Ok);
        return;
    }
    Comment comment = {0, phone, fraction, content};
    addComment(comment);
    QMessageBox::information(this, "感谢", "谢谢您的评价与建议，我们后续会继续改进以更好地服务您.");
}

int user_com::getCheckBoxFraction() {
    int fraction = 0;
    if (ui->pushButton1->isChecked())
        fraction++;
    if (ui->pushButton2->isChecked())
        fraction++;
    if (ui->pushButton3->isChecked())
        fraction++;
    if (ui->pushButton4->isChecked())
        fraction++;
    if (ui->pushButton5->isChecked())
        fraction++;
    return fraction;
}

void user_com::getPhoneToUserComment(std::string& phone) {
    user_com::phone = phone;
}

