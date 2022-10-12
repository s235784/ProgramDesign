#include "cmd/file.h"
#include "admin_wanted.h"
#include "qboxlayout.h"
#include "ui_admin_wanted.h"
#include <list>
#include <string>
#include <QMessageBox>

admin_wanted::admin_wanted(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin_wanted)
{
    ui->setupUi(this);
}

admin_wanted::~admin_wanted()
{
    delete ui;
}

void admin_wanted::paintEvent(QPaintEvent *event)
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

void admin_wanted::showEvent(QShowEvent* event) {
    list<WantedPlan> wantedPlanList = readWantedPlanList();
    for (const auto& plan : wantedPlanList) {
        QListWidgetItem *item = new QListWidgetItem;
        item->setSizeHint(QSize(10,50));
        ui->listWidget->addItem(item);

        QWidget *w = new QWidget;
        QHBoxLayout *layout=new QHBoxLayout;

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

        QLabel *timesTextUserPlan = new QLabel(w);
        timesTextUserPlan->setText(QString::fromStdString(to_string(plan.times)));
        layout->addWidget(timesTextUserPlan);

        w->setLayout(layout);
        ui->listWidget->setItemWidget(item,w);
    }
}


void admin_wanted::on_pushButton_back_clicked()
{
    // 返回上一个界面
    this->parentWidget()->show();
    delete this;
}

