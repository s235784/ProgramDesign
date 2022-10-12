#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"user_login.h"
#include"admin_login.h"
#include <QMainWindow>
#include <QLineEdit>
#include <QLabel>
#include "warning.h"
#include "QWidget"
#include "QPainter"
#include "QPixmap"



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //绘制图片
    void paintEvent(QPaintEvent *event);

private slots:
    void on_pushButton_exit_clicked();

    void on_pushButton_login_clicked();

    void on_pushButton_admin_login_clicked();


private:
    Ui::MainWindow *ui;
    user_login *a;
    admin_login *b;
    warning *c;
};

#endif // MAINWINDOW_H

