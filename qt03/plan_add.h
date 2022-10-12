#ifndef PLAN_ADD_H
#define PLAN_ADD_H

#include <QMainWindow>
#include "QRegularExpressionValidator"
#include "QRegularExpression"
#include <QLineEdit>

namespace Ui {
class plan_add;
}

class plan_add : public QMainWindow
{
    Q_OBJECT

public:
    explicit plan_add(QWidget *parent = nullptr);
    ~plan_add();

private slots:
    void on_pushButton_confirm_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::plan_add *ui;
};

#endif // PLAN_ADD_H
