#include "cmd/file.h"
#include "cmd/util.h"
#include "cmd/planStruct.h"
#include "user_filter.h"
#include "qboxlayout.h"
#include "user_all_plan.h"
#include "ui_user_all_plan.h"
#include <list>
#include <string>
#include <QMessageBox>
#include "user_main.h"

extern string phone;

user_main *user_Main;
user_all_plan::user_all_plan(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::user_all_plan)
{
    ui->setupUi(this);
    userFilterUI = new user_filter(this);
}

user_all_plan::~user_all_plan()
{
    delete ui;
}


void user_all_plan::showEvent(QShowEvent* event) {
    refreshPlanList();
}

void user_all_plan::on_pushButton_more_clicked()
{
    // 跳转到筛选界面
    userFilterUI->show();
    this->hide();
}

void user_all_plan::on_pushButton_back_clicked()
{
   // 返回上一个窗口
    user_Main =new user_main;
    user_Main->show();
     this->hide();
}

void user_all_plan::handleChooseBtnClicked() {
    // 点击订购按钮
    QPushButton* btn = (QPushButton*) sender();
    int id = btn->property("itemId").toInt();
    updateUserPlanByPhone(phone, id);
    QMessageBox::information(this, "提示", "恭喜，您已成功订购该套餐。",
                                       QMessageBox::Ok);
}

void user_all_plan::refreshPlanList() {
    // 获得套餐List
    // 先清空
    ui->listWidget->clear();
    list<Plan> planList = readPlanList();
    for (const auto& plan : planList) {
        // 匹配数据
        QListWidgetItem *item = new QListWidgetItem;
        item->setSizeHint(QSize(10,50));
        ui->listWidget->addItem(item);

        QWidget *w = new QWidget;
        QHBoxLayout *layout=new QHBoxLayout;

        QLabel *idTextPlan = new QLabel(w);
        idTextPlan->setText(QString::fromStdString(to_string(plan.id)));
        layout->addWidget(idTextPlan);

        QLabel *feeTextPlan = new QLabel(w);
        feeTextPlan->setText(QString::fromStdString(getTwoPlacesDecimal(plan.fee)));
        layout->addWidget(feeTextPlan);

        QLabel *durationTextPlan = new QLabel(w);
        durationTextPlan->setText(QString::fromStdString(to_string(plan.duration)));
        layout->addWidget(durationTextPlan);

        QLabel *trafficTextPlan = new QLabel(w);
        trafficTextPlan->setText(QString::fromStdString(to_string(plan.traffic)));
        layout->addWidget(trafficTextPlan);

        QLabel *broadbandTextPlan = new QLabel(w);
        broadbandTextPlan->setText(QString::fromStdString(to_string(plan.broadband)));
        layout->addWidget(broadbandTextPlan);

        QPushButton *chooseButtonPlan = new QPushButton(w);
        chooseButtonPlan->setText("订购");
        chooseButtonPlan->setProperty("itemId", plan.id);
        layout->addWidget(chooseButtonPlan);

        w->setLayout(layout);
        ui->listWidget->setItemWidget(item,w);

        // 绑定事件
        connect(chooseButtonPlan, &QPushButton::clicked,
                this, &user_all_plan::handleChooseBtnClicked,
                Qt::UniqueConnection);
    }
}

