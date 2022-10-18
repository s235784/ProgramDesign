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
		cout << "1. 新增套餐" << endl;
		cout << "2. 修改套餐" << endl;
		cout << "3. 查询套餐" << endl;
		cout << "4. 删除套餐" << endl;
		cout << "0. 返回上一级" << endl;
		cout << "请输入操作前的序号：";
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
			cout << "您输入的序号有误，请重新输入。" << endl;
			continueShow = true;
		}
	} while (continueShow);
}

void addPlanStep() {
	Plan plan = {};
	cout << "请输入相关信息" << endl;
	plan.fee = showPlanItemInput("资费（元）：", "只能有两位小数，请检查数据格式", 2);
	plan.duration = (int) showPlanItemInput("通话时长（分钟）：", "只能是整数，请检查数据格式", 0);
	plan.traffic = (int) showPlanItemInput("流量（MB）：", "只能是整数，请检查数据格式", 0);
	plan.broadband = (int) showPlanItemInput("带宽（Mb）：", "只能是整数，请检查数据格式", 0);

	system("cls");
	if (isExistPlan(plan)) {
		cout << "已有相同的套餐，该套餐将不会被创建" << endl;
	}
	else {
		addPlan(plan);
		cout << "已创建该套餐" << endl;
	}
}

/*
* place: 允许的小数位数
*/
float showPlanItemInput(string name, string msg, int places) {
	do {
		float value;
		cout << name;
		cin >> value;
		if (getDecimalPlaces(value) > places) {
			cout << "只能是整数，请检查数据格式" << endl;
		}
		else
		{
			return value;
		}
	} while (true);
}

void changePlan() {
	showAllPlan();
	cout << "请输入您要修改的套餐前的序号：";
	int id;
	cin >> id;
	if (!isExistPlanById(id)) {
		cout << "您输入的序号不存在，无法修改" << endl;
		return;
	}

	cout << "1. 资费" << endl;
	cout << "2. 通话时长" << endl;
	cout << "3. 流量" << endl;
	cout << "4. 带宽" << endl;

	Plan plan = getPlanById(id);
	bool continueShow = false;
	do {
		int choice;
		cout << "请输入您要修改内容前的序号：";
		cin >> choice;
		switch (choice) {
		case 1:
			plan.fee = showPlanItemInput("资费（元）：", "只能有两位小数，请检查数据格式", 2);
			continueShow = false;
			break;
		case 2:
			plan.duration = (int) showPlanItemInput("通话时长（分钟）：", "只能是整数，请检查数据格式", 0);
			continueShow = false;
			break;
		case 3:
			plan.traffic = (int) showPlanItemInput("流量（MB）：", "只能是整数，请检查数据格式", 0);
			continueShow = false;
			break;
		case 4:
			plan.broadband = (int) showPlanItemInput("带宽（Mb）：", "只能是整数，请检查数据格式", 0);
			continueShow = false;
			break;
		default:
			cout << "您输入的序号有误，请重新输入。" << endl;
			continueShow = true;
		}
	} while (continueShow);

	updatePlan(plan);

	system("cls");
	cout << "已修改" << endl;
}

void showAllPlan() {
	list<Plan> planList = readPlanList();
	showPlanList(planList);
}

void showDeletePlan() {
	showAllPlan();
	cout << "请输入您要删除的套餐前的序号：";
	int id;
	cin >> id;
	if (!isExistPlanById(id)) {
		system("cls");
		cout << "您输入的序号不存在，无法删除" << endl;
	}
	else {
		deletePlan(id);
		system("cls");
		cout << "已删除" << endl;
	}
}