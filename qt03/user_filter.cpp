#include "cmd/file.h"
#include "cmd/util.h"
#include "cmd/planStruct.h"
#include "cmd/wantedPlanStruct.h"
#include "qlistwidget.h"
#include "user_filter.h"
#include "ui_user_filter.h"
#include <list>
#include <string>
#include <QMessageBox>
#include <QHBoxLayout>
#include "user_all_plan.h"

extern string phone;

user_all_plan *user_All;
user_filter::user_filter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::user_filter)
{
    ui->setupUi(this);
}

user_filter::~user_filter()
{
    delete ui;
}

void user_filter::showEvent(QShowEvent* event) {
    // 4G流量只能输入数字
    QRegularExpressionValidator *pRevalidotor2=new QRegularExpressionValidator(QRegularExpression("[0-9]+$"),this);
    ui->lineEdit_traffic->setValidator(pRevalidotor2);
    // 通话时长只能输入数字
    QRegularExpressionValidator *pRevalidotor3=new QRegularExpressionValidator(QRegularExpression("[0-9]+$"),this);
    ui->lineEdit_duration->setValidator(pRevalidotor3);
    // 宽带只能输入数字
    QRegularExpressionValidator *pRevalidotor4=new QRegularExpressionValidator(QRegularExpression("[0-9]+$"),this);
    ui->lineEdit_band->setValidator(pRevalidotor4);
}

void user_filter::on_pushButton_confirm_clicked() {
    // 得到界面数据
    std::string durationString = ui->lineEdit_duration->text().toStdString();
    std::string trafficString = ui->lineEdit_traffic->text().toStdString();
    std::string bandString = ui->lineEdit_band->text().toStdString();
    if (durationString.empty() || trafficString.empty() || bandString.empty()) {
        QMessageBox::warning(this, "错误",
                             "请输入全部的内容后再确认。",
                             QMessageBox::Ok);
        return;
    }
    int duration = std::stoi(durationString);
    int traffic = std::stoi(trafficString);
    int band = std::stoi(bandString);
    // 寻找范围内的套餐
    list<Plan> recommend;
    list<Plan> planList = readPlanList();
    for (const auto& plan : planList) {
       if (duration != 0 &&
            (duration * 1.2 <= plan.duration || plan.duration <= duration * 0.8))
            continue;
        if (traffic != 0 &&
            (traffic * 1.2 <= plan.traffic || plan.traffic <= traffic * 0.8))
            continue;
        if (band != 0 &&
            (band * 1.2 <= plan.broadband || plan.broadband <= band * 0.8))
            continue;
        recommend.push_back(plan);
    }
    if (recommend.empty()) {
        QMessageBox::information(this, "提示", "抱歉，这里没有符合您想法的套餐，我们已记录您的需求，期待您下次再来。\n"
                                             "列表里面的是我们随机推荐的套餐，您可以尝试一下。",
                                           QMessageBox::Ok);
        // 向意向套餐中添加数据
        WantedPlan plan = {0, duration, traffic, band, 0};
        addWantedPlan(plan);
        // 获取随机推荐
        list<int> indexList = getRandIntList((int) planList.size(), 3);
        for (int i : indexList) {
            int index = 1;
            for (const auto& plan : planList) {
                if (index == i)
                    recommend.push_back(plan);
                index++;
            }
        }
    }
    refreshPlanList(recommend);
}

void user_filter::on_pushButton_back_clicked()
{
    // 返回上一个窗口
    user_All =new user_all_plan;
    user_All->show();
     this->hide();
}

void user_filter::handleChooseBtnClicked() {
    // 点击订购按钮
    QPushButton* btn = (QPushButton*) sender();
    int id = btn->property("itemId").toInt();
    updateUserPlanByPhone(phone, id);
    QMessageBox::information(this, "提示", "恭喜，您已成功订购该套餐。",
                                       QMessageBox::Ok);
}

void user_filter::refreshPlanList(list<Plan>& planList) {
    ui->listWidget->clear();
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
                this, &user_filter::handleChooseBtnClicked,
                Qt::UniqueConnection);
    }
}
