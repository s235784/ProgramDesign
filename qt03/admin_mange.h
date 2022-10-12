#ifndef ADMIN_MANGE_H
#define ADMIN_MANGE_H

#include <QMainWindow>
#include "QWidget"
#include "QPainter"
#include "QPixmap"

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

private slots:


    void on_pushButton_back_clicked();

private:
    Ui::admin_mange *ui;
};

#endif // ADMIN_MANGE_H
