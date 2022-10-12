#include "user_selfchoose.h"
#include "ui_user_selfchoose.h"
user_selfchoose::user_selfchoose(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::user_selfchoose)
{
    ui->setupUi(this);
    QRegularExpressionValidator *pRevalidotor2=new QRegularExpressionValidator(QRegularExpression("[0-9]+$"),this);
    ui->lineEdit_flow->setValidator(pRevalidotor2);
    QRegularExpressionValidator *pRevalidotor3=new QRegularExpressionValidator(QRegularExpression("[0-9]+$"),this);
    ui->lineEdit_time->setValidator(pRevalidotor3);
    QRegularExpressionValidator *pRevalidotor4=new QRegularExpressionValidator(QRegularExpression("[0-9]+$"),this);
    ui->lineEdit_band->setValidator(pRevalidotor4);

}

user_selfchoose::~user_selfchoose()
{
    delete ui;
}
void user_selfchoose::paintEvent(QPaintEvent *event)
{
    static int pos=0;
    QString picture[1]={":/back_user.jpg"};
    //对象
    QPainter* painter=new QPainter(this);
    //画图
    QPixmap pixmap;

    pixmap.load(picture[pos]);
     pixmap.scaled(518,306);
    painter->drawPixmap(0,0,518,306,pixmap);
}


void user_selfchoose::on_pushButton_back_clicked()
{

    //返回上一个界面
    this->parentWidget()->show();
    delete this;
}


void user_selfchoose::on_pushButton_confirm_clicked()
{
   //跳转到匹配套餐界面
    con=new user_info(this);
    con->show();
    this->hide();
}

