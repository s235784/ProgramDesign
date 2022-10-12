#ifndef ADMIN_PLAN_H
#define ADMIN_PLAN_H

#include <QMainWindow>
#include "QWidget"
#include "QPainter"
#include "QPixmap"

namespace Ui {
class admin_plan;
}

class admin_plan : public QMainWindow
{
    Q_OBJECT

public:
    explicit admin_plan(QWidget *parent = nullptr);
    ~admin_plan();
    void paintEvent(QPaintEvent *event);

protected:
    void showEvent(QShowEvent* event);

private slots:
    void on_pushButton_back_clicked();

private:
    Ui::admin_plan *ui;
};

#endif // ADMIN_PLAN_H
