#ifndef USER_PLAN_H
#define USER_PLAN_H
#include "user_com.h"
#include <string>
#include <QMainWindow>


namespace Ui {
class user_plan;
}

class user_plan : public QMainWindow
{
    Q_OBJECT

public:
    explicit user_plan(QWidget *parent = nullptr);
    ~user_plan();

protected:
    void showEvent(QShowEvent* event);

private slots:
    void on_pushButton_clicked();
    void on_pushButton_comm_clicked();


private:
    Ui::user_plan *ui;
    user_com *com;
};

#endif // USER_PLAN_H
