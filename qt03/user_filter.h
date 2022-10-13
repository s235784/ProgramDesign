#ifndef USER_FILTER_H
#define USER_FILTER_H
#include "cmd/planStruct.h"
#include <list>
#include <string>
#include <QMainWindow>
namespace Ui {
class user_filter;
}

class user_filter : public QMainWindow
{
    Q_OBJECT

public:
    explicit user_filter(QWidget *parent = nullptr);
    ~user_filter();

protected:
    void showEvent(QShowEvent* event);

private slots:
    void on_pushButton_confirm_clicked();
    void on_pushButton_back_clicked();
    void getPhoneToFilter(std::string& phone);

private:
    Ui::user_filter *ui;
    std::string phone;
    void handleChooseBtnClicked();
    void refreshPlanList(std::list<Plan>& planList);
};

#endif // USER_FILTER_H
