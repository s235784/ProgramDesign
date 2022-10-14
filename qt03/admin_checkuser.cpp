#include "admin_checkuser.h"
#include "ui_admin_checkuser.h"

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
