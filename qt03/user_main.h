#ifndef USER_MAIN_H
#define USER_MAIN_H

#include <QMainWindow>
#include "user_login.h"
#include "user_plan.h"

namespace Ui {
class user_main;
}

class user_main : public QMainWindow
{
    Q_OBJECT

public:
    explicit user_main(QWidget *parent = nullptr);
    ~user_main();

private slots:
    void on_pushButton_userplan_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::user_main *ui;
    user_login *jump;
    user_plan *plan;
};

#endif // USER_MAIN_H
