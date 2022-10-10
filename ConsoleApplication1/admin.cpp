#include "file.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <conio.h>
#include <windows.h>
using namespace std;

void checkAdminPasswd();
void showPlanMenu();
void showPlanManageMenu();
void showAllUserPlan();
void showUserWantedPlan();
string getpassword();

void adminMenu() {
	checkAdminPasswd();
	system("cls");
	showPlanMenu();
}

void showPlanMenu() {
	cout << "1. 套餐管理" << endl;
	cout << "2. 所有用户套餐" << endl;
	cout << "3. 用户意向套餐" << endl;
	cout << "0. 退出登录" << endl;

	bool continueShow = false;
	do {
		int choice;
		cout << "请输入操作前的序号：";
		cin >> choice;
		switch (choice) {
		case 1:
			system("cls");
			showPlanManageMenu();
			continueShow = true;
			break;
		case 2:
			showAllUserPlan();
			continueShow = false;
			break;
		case 3:
			showUserWantedPlan();
			continueShow = false;
			break;
		case 0:
			continueShow = false;
			break;
		default:
			cout << "您输入的序号有误，请重新输入。" << endl;
			continueShow = true;
		}
	} while (continueShow);
}

void checkAdminPasswd() {
	cout << "请输入管理员密码：";
	do {
		string passwdInput = getpassword();
		string passwd = getAdminPassword();
		if (passwd != passwdInput) {
			cout << "密码错误，请重新输入：";
		}
		else {
			return;
		}
	} while (true);
}

// 已知问题：输入方向键时也会触发
string getpassword() {
	string str = "";
	char init = '\0';
	for (;;) {
		init = _getch();
		if (init == VK_RETURN) {
			cout << endl;
			break;
		} else if (init == VK_BACK) {
			if (str.length() != 0) {
				cout << "\b \b" << flush;
				str.erase(str.length() - 1);
			}
		} else {
			cout << "*" << flush;
			str += init;
		}
	}
	return str;
}

void showPlanManageMenu() {

}

void showAllUserPlan() {

}

void showUserWantedPlan() {

}