#include "cmd/file.h"
#include "cmd/util.h"
#include "cmd/planStruct.h"
#include "qboxlayout.h"
#include "user_all_plan.h"
#include "ui_user_all_plan.h"
#include <list>
#include <string>
#include <QMessageBox>

user_all_plan::user_all_plan(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::user_all_plan)
{
    ui->setupUi(this);
    more = new user_selfchoose(this);
}

user_all_plan::~user_all_plan()
{
    delete ui;
}

void user_all_plan::paintEvent(QPaintEvent *event)
{
    static int pos=0;
    QString picture[1]={":/back_user.jpg"};
    //对象
    QPainter* painter=new QPainter(this);

    //画图
    QPixmap pixmap;

    pixmap.load(picture[pos]);
    pixmap.scaled(840,578);
    painter->drawPixmap(0,0,840,578,pixmap);
}

void user_all_plan::showEvent(QShowEvent* event) {
    refreshPlanList();
}

void user_all_plan::on_pushButton_more_clicked()
{
    //跳转到用户自己选择
    more->show();
    this->hide();
}

void user_all_plan::on_pushButton_back_clicked()
{
    //返回上一个窗口
    this->parentWidget()->show();
    delete this;
}

void user_all_plan::handleChoseBtnClicked() {
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

        QPushButton *choseButtonPlan = new QPushButton(w);
        choseButtonPlan->setText("订购");
        choseButtonPlan->setProperty("itemId", plan.id);
        layout->addWidget(choseButtonPlan);

        w->setLayout(layout);
        ui->listWidget->setItemWidget(item,w);

        // 绑定事件
        connect(choseButtonPlan, &QPushButton::clicked,
                this, &user_all_plan::handleChoseBtnClicked,
                Qt::UniqueConnection);
    }
}

void user_all_plan::getPhoneToUserAllPlan(std::string& phone) {
    user_all_plan::phone = phone;
}

