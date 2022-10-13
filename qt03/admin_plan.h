#ifndef ADMIN_PLAN_H
#define ADMIN_PLAN_H

#include "QWidget"
#include "QPainter"
#include "QPixmap"
#include "plan_add.h"
#include <QMainWindow>
#include <QAbstractButton>

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
    void on_pushButton_add_clicked();
    void getRefreshPlanListSignal();

private:
    Ui::admin_plan *ui;
    void handleEditBtnClicked();
    void handleDelBtnClicked();
    void refreshPlanList();

signals:
    void sendInitPlanEditSignal(int id);
};

#endif // ADMIN_PLAN_H
