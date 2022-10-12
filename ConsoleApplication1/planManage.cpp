#include "file.h"
#include "util.h"
#include <iomanip>
#include <iostream>
using namespace std;

void addPlanStep();
float showPlanItemInput(string name, string msg, int places);
void changePlan();
void showAllPlan();
void showDeletePlan();

void showPlanManageMenu() {
	bool continueShow = false;
	do {
		int choice;
		cout << "1. �����ײ�" << endl;
		cout << "2. �޸��ײ�" << endl;
		cout << "3. ��ѯ�ײ�" << endl;
		cout << "4. ɾ���ײ�" << endl;
		cout << "0. ������һ��" << endl;
		cout << "���������ǰ����ţ�";
		cin >> choice;
		switch (choice) {
		case 1:
			system("cls");
			addPlanStep();
			continueShow = true;
			break;
		case 2:
			system("cls");
			changePlan();
			continueShow = true;
			break;
		case 3:
			system("cls");
			showAllPlan();
			continueShow = true;
			break;
		case 4:
			system("cls");
			showDeletePlan();
			continueShow = true;
			break;
		case 0:
			system("cls");
			continueShow = false;
			break;
		default:
			cout << "�����������������������롣" << endl;
			continueShow = true;
		}
	} while (continueShow);
}

void addPlanStep() {
	Plan plan = {};
	cout << "�����������Ϣ" << endl;
	plan.fee = showPlanItemInput("�ʷѣ�Ԫ����", "ֻ������λС�����������ݸ�ʽ", 2);
	plan.duration = (int) showPlanItemInput("ͨ��ʱ�������ӣ���", "ֻ�����������������ݸ�ʽ", 0);
	plan.traffic = (int) showPlanItemInput("������MB����", "ֻ�����������������ݸ�ʽ", 0);
	plan.broadband = (int) showPlanItemInput("����Mb����", "ֻ�����������������ݸ�ʽ", 0);

	system("cls");
	if (isExistPlan(plan)) {
		cout << "������ͬ���ײͣ����ײͽ����ᱻ����" << endl;
	}
	else {
		addPlan(plan);
		cout << "�Ѵ������ײ�" << endl;
	}
}

/*
* place: �����С��λ��
*/
float showPlanItemInput(string name, string msg, int places) {
	do {
		float value;
		cout << name;
		cin >> value;
		if (getDecimalPlaces(value) > places) {
			cout << "ֻ�����������������ݸ�ʽ" << endl;
		}
		else
		{
			return value;
		}
	} while (true);
}

void changePlan() {
	showAllPlan();
	cout << "��������Ҫ�޸ĵ��ײ�ǰ����ţ�";
	int id;
	cin >> id;
	if (!isExistPlanById(id)) {
		cout << "���������Ų����ڣ��޷��޸�" << endl;
		return;
	}

	cout << "1. �ʷ�" << endl;
	cout << "2. ͨ��ʱ��" << endl;
	cout << "3. ����" << endl;
	cout << "4. ����" << endl;

	Plan plan = getPlanById(id);
	bool continueShow = false;
	do {
		int choice;
		cout << "��������Ҫ�޸�����ǰ����ţ�";
		cin >> choice;
		switch (choice) {
		case 1:
			plan.fee = showPlanItemInput("�ʷѣ�Ԫ����", "ֻ������λС�����������ݸ�ʽ", 2);
			continueShow = false;
			break;
		case 2:
			plan.duration = (int) showPlanItemInput("ͨ��ʱ�������ӣ���", "ֻ�����������������ݸ�ʽ", 0);
			continueShow = false;
			break;
		case 3:
			plan.traffic = (int) showPlanItemInput("������MB����", "ֻ�����������������ݸ�ʽ", 0);
			continueShow = false;
			break;
		case 4:
			plan.broadband = (int) showPlanItemInput("����Mb����", "ֻ�����������������ݸ�ʽ", 0);
			continueShow = false;
			break;
		default:
			cout << "�����������������������롣" << endl;
			continueShow = true;
		}
	} while (continueShow);

	updatePlan(plan);

	system("cls");
	cout << "���޸�" << endl;
}

void showAllPlan() {
	list<Plan> planList = readPlanList();
	showPlanList(planList);
}

void showDeletePlan() {
	showAllPlan();
	cout << "��������Ҫɾ�����ײ�ǰ����ţ�";
	int id;
	cin >> id;
	if (!isExistPlanById(id)) {
		system("cls");
		cout << "���������Ų����ڣ��޷�ɾ��" << endl;
	}
	else {
		deletePlan(id);
		system("cls");
		cout << "��ɾ��" << endl;
	}
}