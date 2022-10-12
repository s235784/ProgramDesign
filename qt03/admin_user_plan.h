#ifndef ADMIN_USER_PLAN_H
#define ADMIN_USER_PLAN_H

#include "QWidget"
#include "QPixmap"
#include "QPainter"
#include <QMainWindow>

namespace Ui {
    class admin_user_plan;
}

class admin_user_plan : public QMainWindow {
    Q_OBJECT

public:
    explicit admin_user_plan(QWidget *parent = nullptr);
    ~admin_user_plan();
    void paintEvent(QPaintEvent *event);

protected:
    void showEvent(QShowEvent* event);

private slots:
    void on_pushButton_back_clicked();

private:
    Ui::admin_user_plan *ui;
};

#endif // ADMIN_USER_PLAN_H
