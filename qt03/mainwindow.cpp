#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->input_phone->setPlaceholderText("请输入您的电话号码");
}

MainWindow::~MainWindow()
{
    delete ui;
}

//退出键关闭窗口
void MainWindow::on_pushButton_exit_clicked()
{
    close();
}

//登陆键进入
void MainWindow::on_pushButton_login_clicked()
{
    a=new user_login(this);
    a->show();
    this->hide();
}
//管理员登陆
void MainWindow::on_pushButton_admin_login_clicked()
{
    b=new admin_login(this);
    b->show();
    this->hide();
}
//背景图片
void MainWindow::paintEvent(QPaintEvent *event)
{
    static int pos=0;
    QString picture[1]={":/background.jpg"};
    //对象
    QPainter* painter=new QPainter(this);

    //画图
    QPixmap pixmap;

    pixmap.load(picture[pos]);
     pixmap.scaled(518,299);
    painter->drawPixmap(0,0,518,299,pixmap);
}
