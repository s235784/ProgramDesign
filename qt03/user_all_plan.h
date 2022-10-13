#ifndef USER_ALL_PLAN_H
#define USER_ALL_PLAN_H
#include "user_filter.h"
#include "QWidget"
#include "QPainter"
#include "QPixmap"
#include <string>
#include <QMainWindow>

namespace Ui {
class user_all_plan;
}

class user_all_plan : public QMainWindow
{
    Q_OBJECT

public:
    explicit user_all_plan(QWidget *parent = nullptr);
    ~user_all_plan();

    void paintEvent(QPaintEvent *event);

protected:
    void showEvent(QShowEvent* event);

private slots:
    void on_pushButton_more_clicked();
    void on_pushButton_back_clicked();
    void getPhoneToUserAllPlan(std::string& phone);

private:
    Ui::user_all_plan *ui;
    user_filter *userFilterUI;
    std::string phone;
    void refreshPlanList();
    void handleChooseBtnClicked();

signals:
    void sendPhoneToFilter(std::string& phone);
};

#endif // USER_ALL_PLAN_H
