#ifndef ADMIN_WANTED_H
#define ADMIN_WANTED_H

#include "QWidget"
#include "QPixmap"
#include "QPainter"
#include <QMainWindow>

namespace Ui {
    class admin_wanted;
}

class admin_wanted : public QMainWindow {
    Q_OBJECT

public:
    explicit admin_wanted(QWidget *parent = nullptr);
    ~admin_wanted();
    void paintEvent(QPaintEvent *event);

protected:
    void showEvent(QShowEvent* event);

private slots:
    void on_pushButton_back_clicked();

private:
    Ui::admin_wanted *ui;
};

#endif // ADMIN_WANTED_H
