#include <iomanip>
#include <iostream>
#include <string>
#include "admin.h"
#include "file.h"
#include "planManage.h"
#include "user.h"
#include "util.h"
using namespace std;

int main() {
    initProperties();

    cout << "欢迎使用 电信优惠套餐推荐系统。\n功能菜单：" << endl;
    cout << "1. 用户登录" << endl;
    cout << "2. 管理员登录" << endl;
    cout << "0. 退出" << endl;

    bool backMenu = false;
    bool continueShow = true;
    do {
        int choice;
        cout << "请输入操作前的序号：";
        cin >> choice;
        switch (choice) {
            case 1:
                system("cls");
                showPhoneInput();
                backMenu = true;
                continueShow = false;
                break;
            case 2:
                system("cls");
                checkAdminPasswd();
                backMenu = true;
                continueShow = false;
                break;
            case 0:
                continueShow = false;
                break;
            default:
                cout << "您输入的序号有误，请重新输入。" << endl;
        }
    } while (continueShow);

    if (backMenu) {
        system("cls");
        main();
    }
    return 0;
}
