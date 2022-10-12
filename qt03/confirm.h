#ifndef CONFIRM_H
#define CONFIRM_H

#include <QMainWindow>

namespace Ui {
class confirm;
}

class confirm : public QMainWindow
{
    Q_OBJECT

public:
    explicit confirm(QWidget *parent = nullptr);
    ~confirm();

private slots:
    void on_pushButton_clicked();

private:
    Ui::confirm *ui;
};

#endif // CONFIRM_H
