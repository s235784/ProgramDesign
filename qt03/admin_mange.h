#ifndef ADMIN_MANGE_H
#define ADMIN_MANGE_H

#include <QMainWindow>
#include "QWidget"
#include "QPainter"
#include "QPixmap"
#include "plan_add.h"

namespace Ui {
class admin_mange;
}

class admin_mange : public QMainWindow
{
    Q_OBJECT

public:
    explicit admin_mange(QWidget *parent = nullptr);
    ~admin_mange();
    void paintEvent(QPaintEvent *event);

protected:
    void showEvent(QShowEvent* event);

private slots:


    void on_pushButton_back_clicked();

    void on_pushButton_add_clicked();

private:
    Ui::admin_mange *ui;
    plan_add *add;
};

#endif // ADMIN_MANGE_H
