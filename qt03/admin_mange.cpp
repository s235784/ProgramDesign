#include "admin_mange.h"
#include "qboxlayout.h"
#include "qcheckbox.h"
#include "ui_admin_mange.h"

admin_mange::admin_mange(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin_mange)
{
    ui->setupUi(this);
}

admin_mange::~admin_mange()
{
    delete ui;
}
void admin_mange::paintEvent(QPaintEvent *event)
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

void admin_mange::showEvent(QShowEvent* event) {
    // 列表
    QListWidgetItem *item=new QListWidgetItem;
    item->setSizeHint(QSize(10,50));
    ui->listWidget->addItem(item);

    QWidget *w = new QWidget;
    QHBoxLayout *layout=new QHBoxLayout;
    QLabel *idAdmin = new QLabel(w);
    idAdmin->setText("1");
    layout->addWidget(idAdmin);
    QLabel *feeAdmin = new QLabel(w);
    feeAdmin->setText("1");
    layout->addWidget(feeAdmin);
    QLabel *durationAdmin = new QLabel(w);
    durationAdmin->setText("1");
    layout->addWidget(durationAdmin);
    QLabel *trafficAdmin = new QLabel(w);
    trafficAdmin->setText("1");
    layout->addWidget(trafficAdmin);
    QLabel *broadbandAdmin = new QLabel(w);
    broadbandAdmin->setText("1");
    layout->addWidget(broadbandAdmin);
    QPushButton *editButtonAdmin = new QPushButton(w);
    editButtonAdmin->setText("修改");
    layout->addWidget(editButtonAdmin);
    QPushButton *deleteButtonAdmin = new QPushButton(w);
    deleteButtonAdmin->setText("删除");
    layout->addWidget(deleteButtonAdmin);

    w->setLayout(layout);
    ui->listWidget->setItemWidget(item,w);
}


void admin_mange::on_pushButton_back_clicked()
{
    //返回上一个界面
    this->parentWidget()->show();
    delete this;
}


void admin_mange::on_pushButton_add_clicked()
{
    add=new plan_add(this);
    add->show();
    this->hide();
}

