#ifndef ADMIN_CHECKUSER_H
#define ADMIN_CHECKUSER_H

#include <QMainWindow>
#include "admin_main.h"

namespace Ui {
class admin_checkuser;
}

class admin_checkuser : public QMainWindow
{
    Q_OBJECT

public:
    explicit admin_checkuser(QWidget *parent = nullptr);
    ~admin_checkuser();

private slots:
    void on_pushButton_back_clicked();
     void paintEvent(QPaintEvent *event);

private:
    Ui::admin_checkuser *ui;
};

#endif // ADMIN_CHECKUSER_H
