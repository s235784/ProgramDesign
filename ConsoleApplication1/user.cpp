#include "file.h"
#include "util.h"
#include "planStruct.h"
#include <list>
#include <iostream>
using namespace std;

void userMenu(string& phone);
void recommendPlan();
void showAllPlanUser();
void showMyPlan(string& phone);
void changeMyPlan(string& phone);

void showPhoneInput() {
	string phone;
	do {
		cout << "�����������ֻ��ţ�";
		cin >> phone;
		if (matchPhone(phone)) {
			break;
		}
		else {
			cout << "��ʽ�������������롣" << endl;
		}
	} while (true);

	system("cls");
	userMenu(phone);
}

void userMenu(string& phone) {
	bool continueShow = false;
	do {
		int choice;
		cout << "1. �ײ��Ƽ�" << endl;
		cout << "2. ��ʾ�����ײ�" << endl;
		cout << "3. ��ѯ�����ײ�" << endl;
		cout << "4. ����ײ�" << endl;
		cout << "0. ������һ��" << endl;
		cout << "���������ǰ����ţ�";
		cin >> choice;
		switch (choice) {
		case 1:
			system("cls");
			recommendPlan();
			continueShow = true;
			break;
		case 2:
			system("cls");
			showAllPlanUser();
			continueShow = true;
			break;
		case 3:
			system("cls");
			showMyPlan(phone);
			continueShow = true;
			break;
		case 4:
			system("cls");
			changeMyPlan(phone);
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

void recommendPlan() {
	int duration, traffic, broadband;
	cout << "����������Ҫ���ײ�����" << endl;
	cout << "ͨ��ʱ�������ӣ���";
	cin >> duration;
	cout << "������MB����";
	cin >> traffic;
	cout << "�����Mb����";
	cin >> broadband;

	list<Plan> recommend;
	list<Plan> planList = readPlanList();
	for (const auto& plan : planList) {
		if (duration != 0 &&
			(duration * 1.2 <= plan.duration || plan.duration <= duration * 0.8))
			continue;
		if (traffic != 0 &&
			(traffic * 1.2 <= plan.traffic || plan.traffic <= traffic * 0.8))
			continue;
		if (broadband != 0 &&
			(broadband * 1.2 <= plan.broadband || plan.broadband <= broadband * 0.8))
			continue;
		recommend.push_back(plan);
	}
	if (recommend.empty()) {
		cout << "��Ǹ����û������Ҫ���ײͣ���һ����Щ�أ�" << endl;
		// �������ײ����������
		WantedPlan plan = {0, duration, traffic, broadband, 0};
		addWantedPlan(plan);
		// ��ȡ����Ƽ�
		list<int> indexList = getRandIntList((int) planList.size(), 3);
		for (int i : indexList) {
			int index = 1;
			for (const auto& plan : planList) {
				if (index == i)
					recommend.push_back(plan);
				index++;
			}
		}
	}
	else {
		cout << "�����ҵ���������Ƽ��ײͣ�" << endl;
	}

	showPlanList(recommend);
}

void showAllPlanUser() {
	list<Plan> planList = readPlanList();
	showPlanList(planList);
}

void showMyPlan(string& phone) {
	if (!isExistUserPlan(phone)) {
		cout << "����û��ѡ���κ��ײ͡�" << endl;
	}
	else {
		Plan plan = getPlanByPhone(phone);
		list<Plan> planList = {plan};
		showPlanList(planList);
	}
}

void changeMyPlan(string& phone) {
	cout << "��ѡ�ײͣ�" << endl;
	showAllPlanUser();
	cout << "��������Ҫ������ײ�ǰ����ţ�";
	int id;
	cin >> id;
	if (!isExistPlanById(id)) {
		cout << "���������Ų����ڣ��޷��޸�" << endl;
		return;
	}
	updateUserPlanByPhone(phone, id);
	cout << "����ɡ�" << endl;
}