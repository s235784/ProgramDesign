#ifndef USER_INFO_H
#define USER_INFO_H
#include <QMainWindow>
#include "confirm.h"
namespace Ui {
class user_info;
}

class user_info : public QMainWindow
{
    Q_OBJECT

public:
    explicit user_info(QWidget *parent = nullptr);
    ~user_info();

private slots:

    void on_pushButton_confirm_clicked();

    void on_pushButton_change_clicked();

private:
    Ui::user_info *ui;
    confirm *con;

};

#endif // USER_INFO_H
