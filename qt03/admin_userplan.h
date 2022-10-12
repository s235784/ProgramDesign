#ifndef ADMIN_USERPLAN_H
#define ADMIN_USERPLAN_H

#include <QMainWindow>

namespace Ui {
class admin_userplan;
}

class admin_userplan : public QMainWindow
{
    Q_OBJECT

public:
    explicit admin_userplan(QWidget *parent = nullptr);
    ~admin_userplan();

private slots:
    void on_pushButton_back_clicked();

private:
    Ui::admin_userplan *ui;
};

#endif // ADMIN_USERPLAN_H
