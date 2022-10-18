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
		cout << "请输入您的手机号：";
		cin >> phone;
		if (matchPhone(phone)) {
			break;
		}
		else {
			cout << "格式有误，请重新输入。" << endl;
		}
	} while (true);

	system("cls");
	userMenu(phone);
}

void userMenu(string& phone) {
	bool continueShow = false;
	do {
		int choice;
		cout << "1. 套餐推荐" << endl;
		cout << "2. 显示所有套餐" << endl;
		cout << "3. 查询个人套餐" << endl;
		cout << "4. 变更套餐" << endl;
		cout << "0. 返回上一级" << endl;
		cout << "请输入操作前的序号：";
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
			cout << "您输入的序号有误，请重新输入。" << endl;
			continueShow = true;
		}
	} while (continueShow);
}

void recommendPlan() {
	int duration, traffic, broadband;
	cout << "您输入您想要的套餐内容" << endl;
	cout << "通话时长（分钟）：";
	cin >> duration;
	cout << "流量（MB）：";
	cin >> traffic;
	cout << "宽带（Mb）：";
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
		cout << "抱歉这里没有你想要的套餐，试一下这些呢：" << endl;
		// 向意向套餐中添加数据
		WantedPlan plan = {0, duration, traffic, broadband, 0};
		addWantedPlan(plan);
		// 获取随机推荐
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
		cout << "我们找到了下面的推荐套餐：" << endl;
	}

	showPlanList(recommend);
}

void showAllPlanUser() {
	list<Plan> planList = readPlanList();
	showPlanList(planList);
}

void showMyPlan(string& phone) {
	if (!isExistUserPlan(phone)) {
		cout << "您还没有选择任何套餐。" << endl;
	}
	else {
		Plan plan = getPlanByPhone(phone);
		list<Plan> planList = {plan};
		showPlanList(planList);
	}
}

void changeMyPlan(string& phone) {
	cout << "可选套餐：" << endl;
	showAllPlanUser();
	cout << "请输入您要变更的套餐前的序号：";
	int id;
	cin >> id;
	if (!isExistPlanById(id)) {
		cout << "您输入的序号不存在，无法修改" << endl;
		return;
	}
	updateUserPlanByPhone(phone, id);
	cout << "已完成。" << endl;
}