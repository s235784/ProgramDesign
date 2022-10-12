#ifndef ADMIN_USERWANT_H
#define ADMIN_USERWANT_H

#include <QMainWindow>

namespace Ui {
class admin_userwant;
}

class admin_userwant : public QMainWindow
{
    Q_OBJECT

public:
    explicit admin_userwant(QWidget *parent = nullptr);
    ~admin_userwant();

private slots:
    void on_pushButton_back_clicked();

private:
    Ui::admin_userwant *ui;
};

#endif // ADMIN_USERWANT_H
