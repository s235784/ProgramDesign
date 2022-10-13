#ifndef ADMIN_LOGIN_H
#define ADMIN_LOGIN_H
#include <QMainWindow>
#include <QLineEdit>
#include "admin_main.h"
#include "QWidget"
#include "QPainter"
#include "QPixmap"
#include "QLabel"
#include <QDialog>

namespace Ui {
class admin_login;
}

class admin_login : public QMainWindow
{
    Q_OBJECT


public:
    explicit admin_login(QWidget *parent = nullptr);
    ~admin_login();


private slots:
    void on_pushButton_back_clicked();
    void paintEvent(QPaintEvent *event);
    void on_pushButton_login_clicked();

private:
    Ui::admin_login *ui;
    admin_main *log;
};
#endif // ADMIN_LOGIN_H
