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
	cout << "1. �ײ͹���" << endl;
	cout << "2. �����û��ײ�" << endl;
	cout << "3. �û������ײ�" << endl;
	cout << "0. �˳���¼" << endl;

	bool continueShow = false;
	do {
		int choice;
		cout << "���������ǰ����ţ�";
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
			cout << "�����������������������롣" << endl;
			continueShow = true;
		}
	} while (continueShow);
}

void checkAdminPasswd() {
	cout << "���������Ա���룺";
	do {
		string passwdInput = getpassword();
		string passwd = getAdminPassword();
		if (passwd != passwdInput) {
			cout << "����������������룺";
		}
		else {
			return;
		}
	} while (true);
}

// ��֪���⣺���뷽���ʱҲ�ᴥ��
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