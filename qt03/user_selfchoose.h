#ifndef USER_SELFCHOOSE_H
#define USER_SELFCHOOSE_H
#include <QMainWindow>
#include "QWidget"
#include "QPainter"
#include "QPixmap"
namespace Ui {
class user_selfchoose;
}

class user_selfchoose : public QMainWindow
{
    Q_OBJECT

public:
    explicit user_selfchoose(QWidget *parent = nullptr);
    ~user_selfchoose();

     void paintEvent(QPaintEvent *event);

private slots:
    void on_pushButton_back_clicked();

private:
    Ui::user_selfchoose *ui;

};

#endif // USER_SELFCHOOSE_H