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
    void paintEvent(QPaintEvent *event);

private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_login_clicked();

private:
    Ui::admin_login *ui;
    admin_main *log;
    warning *d;
};
#endif // ADMIN_LOGIN_H
