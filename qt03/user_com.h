#ifndef USER_COM_H
#define USER_COM_H

#include <QMainWindow>

namespace Ui {
class user_com;
}

class user_com : public QMainWindow
{
    Q_OBJECT

public:
    explicit user_com(QWidget *parent = nullptr);
    ~user_com();

private slots:

    void on_pushButton_submit_clicked();

private:
    Ui::user_com *ui;
};

#endif // USER_COM_H
