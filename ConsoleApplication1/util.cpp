#include "planStruct.h"
#include "userPlanStruct.h"
#include "userPlanVOStruct.h"
#include "wantedPlanStruct.h"
#include <list>
#include <regex>
#include <string>
#include <vector>
#include <math.h>
#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;

string getPlanString(Plan plan) {
	string content = "";
	content.append(to_string(plan.id));
	content.append(" ");
	content.append(to_string(plan.fee));
	content.append(" ");
	content.append(to_string(plan.duration));
	content.append(" ");
	content.append(to_string(plan.traffic));
	content.append(" ");
	content.append(to_string(plan.broadband));
	content.append("\n");
	return content;
}

string getWantedPlanString(WantedPlan plan) {
	string content = "";
	content.append(to_string(plan.id));
	content.append(" ");
	content.append(to_string(plan.duration));
	content.append(" ");
	content.append(to_string(plan.traffic));
	content.append(" ");
	content.append(to_string(plan.broadband));
	content.append(" ");
	content.append(to_string(plan.times));
	content.append("\n");
	return content;
}

string getUserPlanString(UserPlan userPlan) {
	string content = "";
	content.append(userPlan.phone);
	content.append(to_string(userPlan.planId));
	content.append("\n");
	return content;
}

bool comparePlan(Plan a, Plan b) {
	if (a.fee != b.fee)
		return false;
	if (a.duration != b.duration)
		return false;
	if (a.traffic != b.traffic)
		return false;
	if (a.broadband != b.broadband)
		return false;
	return true;
}

bool compareWantedPlan(WantedPlan a, WantedPlan b) {
	if (a.duration != b.duration)
		return false;
	if (a.traffic != b.traffic)
		return false;
	if (a.broadband != b.broadband)
		return false;
	return true;
}

list<string> splitString(string str, string deli = " ") {
	list<string> result;
	size_t start = 0;
	size_t end = str.find(deli);
	while (end != -1) {
		result.push_back(str.substr(start, end - start));
		start = end + deli.size();
		end = str.find(deli, start);
	}
	result.push_back(str.substr(start, end - start));
	return result;
}

int getDecimalPlaces(float num) {
	num = num - (int) num;
	if (abs(num) <= 1e-6) {
		return 0;
	}
	for (int i = 0; i < 10; i++) {
		num *= 10;
		if (num - (int) num == 0) {
			return i + 1;
		}
	}
}

void showPlanList(list<Plan>& planList) {
	cout << "------------------------------------" << endl;
	cout << setiosflags(ios::left)
		<< setw(12) << "���"
		<< setw(12) << "�ʷѣ�Ԫ��"
		<< setw(19) << "ͨ��ʱ�������ӣ�"
		<< setw(12) << "������MB��"
		<< setw(12) << "�����Mb��"
		<< endl;
	cout << "------------------------------------" << endl;
	for (const auto& plan : planList) {
		cout << setprecision(2) << fixed;
		cout << setw(12) << plan.id
			<< setw(12) << plan.fee
			<< setw(19) << plan.duration
			<< setw(12) << plan.traffic
			<< setw(12) << plan.broadband
			<< endl;
	}
	cout << "------------------------------------" << endl;
}

void showUserPlanList(list<UserPlanVO>& planList) {
	cout << "------------------------------------" << endl;
	cout << setiosflags(ios::left)
		<< setw(20) << "�ֻ���"
		<< setw(12) << "���"
		<< setw(12) << "�ʷѣ�Ԫ��"
		<< setw(19) << "ͨ��ʱ�������ӣ�"
		<< setw(12) << "������MB��"
		<< setw(12) << "�����Mb��"
		<< endl;
	cout << "------------------------------------" << endl;
	for (const auto& plan : planList) {
		cout << setprecision(2) << fixed;
		cout << setw(20) << plan.phone
			<< setw(12) << plan.id
			<< setw(12) << plan.fee
			<< setw(19) << plan.duration
			<< setw(12) << plan.traffic
			<< setw(12) << plan.broadband
			<< endl;
	}
	cout << "------------------------------------" << endl;
}

void showWantedPlanList(list<WantedPlan>& planList) {
	cout << "------------------------------------" << endl;
	cout << setiosflags(ios::left)
		<< setw(12) << "���"
		<< setw(19) << "ͨ��ʱ�������ӣ�"
		<< setw(12) << "������MB��"
		<< setw(12) << "�����Mb��"
		<< setw(12) << "����"
		<< endl;
	cout << "------------------------------------" << endl;
	for (const auto& plan : planList) {
		cout << setprecision(2) << fixed;
		cout << setw(12) << plan.id
			<< setw(19) << plan.duration
			<< setw(12) << plan.traffic
			<< setw(12) << plan.broadband
			<< setw(12) << plan.times
			<< endl;
	}
	cout << "------------------------------------" << endl;
}

/*
* ����һ��������������б���1��ʼ��
* maxNum �б���������
* count �б������ݵĸ���
*/
list<int> getRandIntList(int maxNum, int count) {
	list<int> result;
	if (maxNum <= count) {
		for (int i = 0; i < count; i++) {
			result.push_back(i);
		}
	}
	else {
		vector<int> temp;
		for (int i = 0; i < maxNum; ++i) {
			temp.push_back(i + 1);
		}
		random_shuffle(temp.begin(), temp.end());
		for (int i = 0; i < count; i++) {
			result.push_back(temp[i]);
		}
	}
	return result;
}

bool matchPhone(string phone) {
	regex reg("/^1[3456789]\d{9}$/");
	return regex_match(phone.data(), reg);
}