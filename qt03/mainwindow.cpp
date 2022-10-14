#include "cmd/util.h"
#include "cmd/file.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

string phone;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    userMain = new user_main(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showEvent(QShowEvent* event) {
    ui->input_phone->setPlaceholderText("请输入您的电话号码");
    //限制只能输入数字
    QRegularExpressionValidator *pRevalidotor=new QRegularExpressionValidator(QRegularExpression("[0-9]+$"),this);
    ui->input_phone->setValidator(pRevalidotor);
    //限制只能输入11位
    ui->input_phone->setMaxLength(11);
    // 初始化配置文件
    initProperties();
    // 绑定事件
    connect(this, SIGNAL(sendUserPhoneSignal(std::string&)),
            userMain, SLOT(getUserPhoneSignal(std::string&)),
            Qt::UniqueConnection);
}

//退出键关闭窗口
void MainWindow::on_pushButton_exit_clicked()
{
    close();
}

//登陆键进入
void MainWindow::on_pushButton_login_clicked()
{
    phone = ui->input_phone->text().toStdString();
    // 匹配手机号格式
    if (!matchPhone(phone)) {
        // 手机号格式不正确显示弹窗
        QMessageBox::warning(this, "格式错误",
                             "您输入的手机号格式有误，请检查后重试。",
                             QMessageBox::Ok);
        return;
    }
    ui->input_phone->clear();
    userMain->show();
    this->hide();
}

//管理员登录
void MainWindow::on_pushButton_admin_login_clicked()
{
    admin_login *adminLogin = new admin_login(this);
    adminLogin->show();
    this->hide();
}

//背景图片
void MainWindow::paintEvent(QPaintEvent *event)
{
    static int pos=0;
    QString picture[1]={":/main_background2.jpg"};
    //对象
    QPainter* painter=new QPainter(this);

    //画图
    QPixmap pixmap;

    pixmap.load(picture[pos]);
    pixmap.scaled(596,315);
    painter->drawPixmap(0,0,596,315,pixmap);
}
