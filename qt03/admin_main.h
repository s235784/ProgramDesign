#ifndef ADMIN_MAIN_H
#define ADMIN_MAIN_H
#include <QMainWindow>
#include "QWidget"
#include "QPainter"
#include "QPixmap"
#include "admin_mange.h"

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

    void on_pushButton_manage_clicked();

private:
    Ui::admin_main *ui;
    admin_mange *man;

};

#endif // ADMIN_MAIN_H
