#ifndef USER_LOGIN_H
#define USER_LOGIN_H
#include "warning.h"
#include "user_selfchoose.h"
#include <QMainWindow>
#include "QWidget"
#include "QPainter"
#include "QPixmap"
namespace Ui {
class user_login;
}

class user_login : public QMainWindow
{
    Q_OBJECT

public:
    explicit user_login(QWidget *parent = nullptr);
    ~user_login();

    void paintEvent(QPaintEvent *event);

private slots:
    void on_pushButton_more_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::user_login *ui;

    user_selfchoose *more;


};

#endif // USER_LOGIN_H
