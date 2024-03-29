#ifndef USER_COM_H
#define USER_COM_H
#include <string>
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

protected:
    void showEvent(QShowEvent* event);

private slots:
    void on_pushButton_submit_clicked();

    void on_pushButton_submit_2_clicked();

private:
    Ui::user_com *ui;
    int getCheckBoxFraction();
};

#endif // USER_COM_H
