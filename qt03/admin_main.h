#ifndef ADMIN_MAIN_H
#define ADMIN_MAIN_H
#include <QMainWindow>
#include "QWidget"
#include "QPainter"
#include "QPixmap"
#include "admin_plan.h"

namespace Ui {
class admin_main;
}

class admin_main : public QMainWindow
{
    Q_OBJECT


public:
    explicit admin_main(QWidget *parent = nullptr);
    ~admin_main();

    void paintEvent(QPaintEvent *event);

private slots:
    void on_pushButton_back_clicked();
    void on_pushButton_plan_clicked();
    void on_pushButton_user_plan_clicked();
    void on_pushButton_wanted_clicked();

    void on_pushButton_wanted_2_clicked();

private:
    Ui::admin_main *ui;
    admin_plan *planUI;

};

#endif // ADMIN_MAIN_H
