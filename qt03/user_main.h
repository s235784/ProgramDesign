#ifndef USER_MAIN_H
#define USER_MAIN_H

#include <string>
#include <QMainWindow>
#include "user_all_plan.h"
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

protected:
    void showEvent(QShowEvent* event);

private slots:
    void on_pushButton_userplan_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void getUserPhoneSignal(std::string& phone);

private:
    Ui::user_main *ui;
    user_all_plan *userAllPlan;
    user_plan *userPlan;
    std::string phone;

signals:
    void sendPhoneToUserPlan(std::string& phone);
    void sendPhoneToUserAllPlan(std::string& phone);
};

#endif // USER_MAIN_H
