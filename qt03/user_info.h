#ifndef USER_INFO_H
#define USER_INFO_H

#include <QMainWindow>
#include "user_login.h"

namespace Ui {
class user_info;
}

class user_info : public QMainWindow
{
    Q_OBJECT

public:
    explicit user_info(QWidget *parent = nullptr);
    ~user_info();

private slots:

    void on_pushButton_confirm_clicked();

private:
    Ui::user_info *ui;

    user_login *back;
};

#endif // USER_INFO_H
