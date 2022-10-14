#include "cmd/file.h"
#include "cmd/util.h"
#include "cmd/planStruct.h"
#include "plan_add.h"
#include "admin_plan.h"
#include "qboxlayout.h"
#include "qcheckbox.h"
#include "ui_admin_plan.h"
#include <list>
#include <string>
#include <QMessageBox>
#include "admin_main.h"

admin_plan::admin_plan(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin_plan)
{
    ui->setupUi(this);
}

admin_plan::~admin_plan()
{
    delete ui;
}

void admin_plan::paintEvent(QPaintEvent *event)
{
    static int pos=0;
    QString picture[1]={":/background.jpg"};
    //对象
    QPainter* painter=new QPainter(this);

    //画图
    QPixmap pixmap;

    pixmap.load(picture[pos]);
    pixmap.scaled(500,123);
    painter->drawPixmap(0,0,500,123,pixmap);
}

void admin_plan::showEvent(QShowEvent* event) {
    refreshPlanList();
}

void admin_plan::on_pushButton_back_clicked() {
    // 返回上一个界面
    admin_main *adminMainUI = new admin_main(this);
    adminMainUI->show();
    this->hide();
}

void admin_plan::handleEditBtnClicked() {
    // 点击编辑按钮
    plan_add *addPlanUI = new plan_add(this);
    connect(this, SIGNAL(sendInitPlanEditSignal(int)),
            addPlanUI, SLOT(getInitPlanEditSignal(int)),
            Qt::UniqueConnection);

    QPushButton* btn = (QPushButton*) sender();
    int id = btn->property("itemId").toInt();
    addPlanUI->show();
    // 传递ID参数
    emit sendInitPlanEditSignal(id);
    this->hide();
}

void admin_plan::handleDelBtnClicked() {
    // 点击删除按钮
    QPushButton* btn = (QPushButton*) sender();
    int id = btn->property("itemId").toInt();
    // 显示删除弹窗
    int res = QMessageBox::warning(this, "确认", "您确认要删除此套餐吗？该操作无法撤回。",
                                   QMessageBox::Yes, QMessageBox::No);
    if (res == QMessageBox::Yes) {
        deletePlan(id);
        refreshPlanList();
    }
}

void admin_plan::on_pushButton_add_clicked() {
    // 添加套餐
    plan_add *addPlanUI = new plan_add(this);
    addPlanUI->show();
    this->hide();
}

void admin_plan::getRefreshPlanListSignal() {
    // 刷新套餐列表
    refreshPlanList();
}

void admin_plan::refreshPlanList() {
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

        QPushButton *editButtonPlan = new QPushButton(w);
        editButtonPlan->setText("修改");
        editButtonPlan->setProperty("itemId", plan.id);
        layout->addWidget(editButtonPlan);

        QPushButton *deleteButtonPlan = new QPushButton(w);
        deleteButtonPlan->setText("删除");
        deleteButtonPlan->setProperty("itemId", plan.id);
        layout->addWidget(deleteButtonPlan);

        w->setLayout(layout);
        ui->listWidget->setItemWidget(item,w);

        // 绑定事件
        connect(editButtonPlan, &QPushButton::clicked, this, &admin_plan::handleEditBtnClicked, Qt::UniqueConnection);
        connect(deleteButtonPlan, &QPushButton::clicked, this, &admin_plan::handleDelBtnClicked, Qt::UniqueConnection);
    }
}
