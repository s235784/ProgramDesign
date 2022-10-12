#ifndef USER_PLAN_H
#define USER_PLAN_H

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

private slots:
    void on_pushButton_clicked();

private:
    Ui::user_plan *ui;

};

#endif // USER_PLAN_H
