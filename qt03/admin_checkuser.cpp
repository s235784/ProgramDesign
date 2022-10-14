#include "cmd/file.h"
#include "cmd/commentStruct.h"
#include "admin_checkuser.h"
#include "ui_admin_checkuser.h"
#include <QHBoxLayout>

admin_checkuser::admin_checkuser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin_checkuser)
{
    ui->setupUi(this);
}

admin_checkuser::~admin_checkuser()
{
    delete ui;
}

void admin_checkuser::showEvent(QShowEvent* event) {
    list<Comment> commentList = readCommentList();
    for (const auto& comment : commentList) {
        QListWidgetItem *item = new QListWidgetItem;
        item->setSizeHint(QSize(10,50));
        ui->listWidget->addItem(item);

        QWidget *w = new QWidget;
        QHBoxLayout *layout=new QHBoxLayout;

        QLabel *idTextUserPlan = new QLabel(w);
        idTextUserPlan->setText(QString::fromStdString(to_string(comment.id)));
        layout->addWidget(idTextUserPlan);

        QLabel *durationTextUserPlan = new QLabel(w);
        durationTextUserPlan->setText(QString::fromStdString(comment.phone));
        layout->addWidget(durationTextUserPlan);

        QLabel *trafficTextUserPlan = new QLabel(w);
        trafficTextUserPlan->setText(QString::fromStdString(to_string(comment.fraction)));
        layout->addWidget(trafficTextUserPlan);

        QLabel *broadbandTextUserPlan = new QLabel(w);
        broadbandTextUserPlan->setText(QString::fromStdString(comment.content));
        layout->addWidget(broadbandTextUserPlan);

        w->setLayout(layout);
        ui->listWidget->setItemWidget(item,w);
    }
}

void admin_checkuser::on_pushButton_back_clicked()
{
    this->parentWidget()->show();
    delete this;
}

void admin_checkuser::paintEvent(QPaintEvent *event)
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
