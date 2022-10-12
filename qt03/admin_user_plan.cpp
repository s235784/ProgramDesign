#include "cmd/file.h"
#include "cmd/userPlanStruct.h"
#include "admin_user_plan.h"
#include "qboxlayout.h"
#include "ui_admin_user_plan.h"
#include <list>
#include <string>
#include <QMessageBox>

admin_user_plan::admin_user_plan(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin_user_plan)
{
    ui->setupUi(this);
}

admin_user_plan::~admin_user_plan()
{
    delete ui;
}

void admin_user_plan::paintEvent(QPaintEvent *event)
{
    static int pos=0;
    QString picture[1]={":/background.jpg"};
    //对象
    QPainter* painter=new QPainter(this);

    //画图
    QPixmap pixmap;

    pixmap.load(picture[pos]);
    pixmap.scaled(356,240);
    painter->drawPixmap(0,0,356,240,pixmap);
}

void admin_user_plan::showEvent(QShowEvent* event) {
    list<UserPlan> userPlanList = readUserPlanList();
    for (const auto& userPlan : userPlanList) {
        Plan plan = getPlanById(userPlan.planId);

        QListWidgetItem *item = new QListWidgetItem;
        item->setSizeHint(QSize(10,50));
        ui->listWidget->addItem(item);

        QWidget *w = new QWidget;
        QHBoxLayout *layout=new QHBoxLayout;

        QLabel *phoneTextUserPlan = new QLabel(w);
        phoneTextUserPlan->setText(QString::fromStdString(userPlan.phone));
        layout->addWidget(phoneTextUserPlan);

        QLabel *idTextUserPlan = new QLabel(w);
        idTextUserPlan->setText(QString::fromStdString(to_string(plan.id)));
        layout->addWidget(idTextUserPlan);

        QLabel *durationTextUserPlan = new QLabel(w);
        durationTextUserPlan->setText(QString::fromStdString(to_string(plan.duration)));
        layout->addWidget(durationTextUserPlan);

        QLabel *trafficTextUserPlan = new QLabel(w);
        trafficTextUserPlan->setText(QString::fromStdString(to_string(plan.traffic)));
        layout->addWidget(trafficTextUserPlan);

        QLabel *broadbandTextUserPlan = new QLabel(w);
        broadbandTextUserPlan->setText(QString::fromStdString(to_string(plan.broadband)));
        layout->addWidget(broadbandTextUserPlan);

        w->setLayout(layout);
        ui->listWidget->setItemWidget(item,w);
    }
}


void admin_user_plan::on_pushButton_back_clicked()
{
    // 返回上一个界面
    this->parentWidget()->show();
    delete this;
}

