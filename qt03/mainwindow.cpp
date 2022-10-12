#include "cmd/util.h"
#include "cmd/file.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->input_phone->setPlaceholderText("请输入您的电话号码");
    //限制只能输入数字
    QRegularExpressionValidator *pRevalidotor=new QRegularExpressionValidator(QRegularExpression("[0-9]+$"),this);
    ui->input_phone->setValidator(pRevalidotor);
    //限制只能输入11位
    ui->input_phone->setMaxLength(11);
    // 初始化配置文件
    initProperties();
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
    QString phone = ui -> input_phone -> text();
    // 匹配手机号格式
    if (matchPhone(phone.toStdString())) {
        a = new user_main(this);
        a->show();
        this->hide();
    } else {
        // 手机号格式不正确显示弹窗
        QMessageBox::warning(this, "格式错误",
                             "您输入的手机号格式有误，请检查后重试。",
                             QMessageBox::Ok);
    }
}

//管理员登陆
void MainWindow::on_pushButton_admin_login_clicked()
{
    b = new admin_login(this);
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
