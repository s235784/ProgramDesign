#include "file.h"
#include "util.h"
#include "userPlanVOStruct.h"
#include "wantedPlanStruct.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <conio.h>
#include <windows.h>
using namespace std;

void showPlanMenu();
void showPlanManageMenu();
void showAllUserPlan();
void showUserWantedPlan();
string getPassword();

void checkAdminPasswd() {
	cout << "���������Ա���룺";
	do {
		string passwdInput = getPassword();
		string passwd = getAdminPassword();
		if (passwd != passwdInput) {
			cout << "����������������룺";
		}
		else {
			break;
		}
	} while (true);

	system("cls");
	showPlanMenu();
}

void showPlanMenu() {
	bool continueShow = false;
	do {
		int choice;
		cout << "1. �ײ͹���" << endl;
		cout << "2. �����û��ײ�" << endl;
		cout << "3. �û������ײ�" << endl;
		cout << "0. �˳���¼" << endl;
		cout << "���������ǰ����ţ�";
		cin >> choice;
		switch (choice) {
		case 1:
			system("cls");
			showPlanManageMenu();
			continueShow = true;
			break;
		case 2:
			system("cls");
			showAllUserPlan();
			continueShow = true;
			break;
		case 3:
			system("cls");
			showUserWantedPlan();
			continueShow = true;
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

// ��֪���⣺���뷽���ʱҲ�ᴥ��
string getPassword() {
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

void showAllUserPlan() {
	list<UserPlan> userPlanList = readUserPlanList();
	list<UserPlanVO> userPlanVOList;
	for (const auto& userPlan : userPlanList) {
		Plan plan = getPlanById(userPlan.planId);
		UserPlanVO userPlanVO = {userPlan.phone, plan.id, plan.fee,
			plan.duration, plan.traffic, plan.broadband};
		userPlanVOList.push_back(userPlanVO);
	}
	showUserPlanList(userPlanVOList);
}

void showUserWantedPlan() {
	list<WantedPlan> wantedPlanList = readWantedPlanList();
	showWantedPlanList(wantedPlanList);
}