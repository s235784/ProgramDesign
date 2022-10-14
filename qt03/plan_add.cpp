#include "cmd/file.h"
#include "cmd/util.h"
#include "cmd/planStruct.h"
#include "plan_add.h"
#include "admin_plan.h"
#include "ui_plan_add.h"
#include <QMessageBox>

int planId = 0;
admin_plan *adminPlan;

plan_add::plan_add(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::plan_add)
{
    ui->setupUi(this);
    adminPlan = new admin_plan();
}

plan_add::~plan_add()
{
    delete ui;
}

void plan_add::showEvent(QShowEvent* event) {
    // 设置输入框限制
    QRegularExpressionValidator *pRevalidotor1=new QRegularExpressionValidator(QRegularExpression("(^[1-9](\\d+)?(\\.\\d{1,2})?$)|(^(0){1}$)|(^\\d\\.\\d{1,2}?$)"),this);
    ui->lineEdit_fee->setValidator(pRevalidotor1);
    QRegularExpressionValidator *pRevalidotor2=new QRegularExpressionValidator(QRegularExpression("[0-9]+$"),this);
    ui->lineEdit_traffic->setValidator(pRevalidotor2);
    QRegularExpressionValidator *pRevalidotor3=new QRegularExpressionValidator(QRegularExpression("[0-9]+$"),this);
    ui->lineEdit_duration->setValidator(pRevalidotor3);
    QRegularExpressionValidator *pRevalidotor4=new QRegularExpressionValidator(QRegularExpression("[0-9]+$"),this);
    ui->lineEdit_band->setValidator(pRevalidotor4);
    // 绑定事件
    connect(this, SIGNAL(sendRefreshPlanListSignal()), adminPlan, SLOT(getRefreshPlanListSignal()), Qt::UniqueConnection);
}

void plan_add::on_pushButton_confirm_clicked()
{
    // 得到界面数据
    string feeString = ui->lineEdit_fee->text().toStdString();
    string durationString = ui->lineEdit_duration->text().toStdString();
    string trafficString = ui->lineEdit_traffic->text().toStdString();
    string bandString = ui->lineEdit_band->text().toStdString();
    if (feeString.empty() || durationString.empty() || trafficString.empty() || bandString.empty()) {
        QMessageBox::warning(this, "错误",
                             "请输入全部的内容后再确认。",
                             QMessageBox::Ok);
        return;
    }

    float fee = std::stof(feeString);
    int duration = std::stoi(durationString);
    int traffic = std::stoi(trafficString);
    int band = std::stoi(bandString);
    Plan plan = {planId, fee, duration, traffic, band};
    // 写入数据
    if (isExistPlan(plan)) {
        QMessageBox::warning(this, "错误",
                             "已有相同内容的套餐，请重新输入。",
                             QMessageBox::Ok);
        return;
    }
    if (planId == 0) {
        // 新增套餐
        addPlan(plan);
    } else {
        // 修改套餐
        updatePlan(plan);
    }
    // 返回上一个界面
    this->parentWidget()->show();
    // 通知刷新界面
    emit sendRefreshPlanListSignal();
    delete this;
}

void plan_add::on_pushButton_back_clicked()
{
    // 返回上一个界面
    adminPlan->show();
    this->hide();
}

void plan_add::getInitPlanEditSignal(int id) {
    // 初始化输入框
    planId = id;
    Plan plan = getPlanById(id);
    ui->lineEdit_fee->setText(QString::fromStdString(getTwoPlacesDecimal(plan.fee)));
    ui->lineEdit_duration->setText(QString::number(plan.duration));
    ui->lineEdit_traffic->setText(QString::number(plan.traffic));
    ui->lineEdit_band->setText(QString::number(plan.broadband));
}

