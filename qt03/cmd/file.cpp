#include "util.h"
#include "planStruct.h"
#include "userPlanStruct.h"
#include "wantedPlanStruct.h"
#include <list>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

list<Plan> readPlanList();
list<UserPlan> readUserPlanList();
list<WantedPlan> readWantedPlanList();
string readFile(string& file);
void writeFileTrunc(string& file, string& content);
void writeFileApp(string& file, string& content);

string file_properties = "config.txt";
string file_plan = "plan.txt";
string file_user_plan = "userPlan.txt";
string file_wanted_plan = "wantedPlan.txt";

void initProperties() {
	if (!ifstream{ file_properties }) {
		ofstream outfile(file_properties.data(), ios::trunc);
		outfile << "admin_password=1234";
		outfile.close();
	}
}

string getAdminPassword() {
	string result = "1234";
	string fileContent = readFile(file_properties);

	string::size_type position = fileContent.find("admin_password=");
	if (position != fileContent.npos) {
		result = "";
		string temp = fileContent.substr(position + 15);
		for (int i = 0; i < temp.length(); i++) {
			if (temp[i] != '\n') {
				result.push_back(temp[i]);
			}
			else {
				break;
			}
		}
	}
	return result;
}

bool isExistPlan(Plan planNew) {
	list<Plan> planListDisk = readPlanList();
	if (!planListDisk.empty()) {
		for (const auto& planDisk : planListDisk) {
			if (comparePlan(planDisk, planNew)) {
				return true;
			}
		}
	}
	return false;
}

bool isExistPlanById(int id) {
	list<Plan> planListDisk = readPlanList();
	if (!planListDisk.empty()) {
		for (const auto& planDisk : planListDisk) {
			if (planDisk.id == id) {
				return true;
			}
		}
	}
	return false;
}

void addPlan(Plan planNew) {
	list<Plan> planListDisk = readPlanList();
	if (!planListDisk.empty()) {
		int maxId = 0;
		bool haveRepeat = false;
		for (const auto& planDisk : planListDisk) {
			if (comparePlan(planDisk, planNew)) {
				haveRepeat = true;
			}
			maxId = planDisk.id > maxId ? planDisk.id : maxId;
		}
		if (!haveRepeat) {
			planNew.id = maxId + 1;
			string content = getPlanString(planNew);
			writeFileApp(file_plan, content);
		}
	}
	else {
		planNew.id = 1;
		string content = getPlanString(planNew);
		writeFileTrunc(file_plan, content);
	}
}

void updatePlan(Plan plan) {
	list<Plan> planListDisk = readPlanList();
	string content;
	if (!planListDisk.empty()) {
		for (Plan planDisk : planListDisk) {
			if (planDisk.id == plan.id) {
				planDisk = plan;
			}
			content.append(getPlanString(planDisk));
		}
		writeFileTrunc(file_plan, content);
	}
}

void deletePlan(int id) {
	list<Plan> planListDisk = readPlanList();
	string content;
	if (!planListDisk.empty()) {
		for (const auto& plan : planListDisk) {
			if (plan.id != id) {
				content.append(getPlanString(plan));
			}
		}
		writeFileTrunc(file_plan, content);
	}
}

list<Plan> readPlanList() {
	list<Plan> planList;
	string fileDisk = readFile(file_plan);
	if (!fileDisk.empty()) {
		if (fileDisk[fileDisk.length() - 1] == '\n') {
			fileDisk.pop_back();
		}
		list<string> planTextList = splitString(fileDisk, "\n");
		for (const auto& planText : planTextList) {
			list<string> planStructText = splitString(planText, " ");
			Plan plan = {};
			int index = 0;
			for (const auto& text : planStructText) {
				if (index == 0)
					plan.id = stoi(text);
				else if (index == 1)
					plan.fee = stof(text);
				else if (index == 2)
					plan.duration = stoi(text);
				else if (index == 3)
					plan.traffic = stoi(text);
				else if (index == 4)
					plan.broadband = stoi(text);
				index++;
			}
			planList.push_back(plan);
		}
	}
	return planList;
}

Plan getPlanById(int id) {
	list<Plan> planListDisk = readPlanList();
	for (auto& plan : planListDisk) {
		if (plan.id == id) {
			return plan;
		}
	}
	return {};
}

bool isExistUserPlan(string& phone) {
	list<UserPlan> userPlanList = readUserPlanList();
	for (const auto& userPlan : userPlanList) {
		if (userPlan.phone == phone)
			return true;
	}
	return false;
}

Plan getPlanByPhone(string& phone) {
	list<UserPlan> userPlanList = readUserPlanList();
	int id = 0; // todo
	for (UserPlan userPlan : userPlanList) {
		if (userPlan.phone == phone) {
			id = userPlan.planId;
			break;
		}
	}
	return getPlanById(id);
}

void updateUserPlanByPhone(string& phone, int id) {
	string content;
	list<UserPlan> userPlanList = readUserPlanList();
	if (!userPlanList.empty()) {
		bool find = false;
		for (UserPlan userPlan : userPlanList) {
			if (userPlan.phone == phone) {
				find = true;
				userPlan.planId = id;
			}
			content.append(getUserPlanString(userPlan));
		}
		if (!find) {
			UserPlan userPlan = {phone, id};
			content.append(getUserPlanString(userPlan));
		}
	}
	else {
		UserPlan userPlan = { phone, id };
		content.append(getUserPlanString(userPlan));
	}
	writeFileTrunc(file_user_plan, content);
}

list<UserPlan> readUserPlanList() {
	list<UserPlan> userPlanList;
	string fileDisk = readFile(file_user_plan);
	if (!fileDisk.empty()) {
		if (fileDisk[fileDisk.length() - 1] == '\n') {
			fileDisk.pop_back();
		}
		list<string> userPlanTextList = splitString(fileDisk, "\n");
		for (const auto& planText : userPlanTextList) {
			list<string> userPlanStructText = splitString(planText, " ");
			UserPlan userPlan = {};
			int index = 0;
			for (const auto& text : userPlanStructText) {
				if (index == 0)
					userPlan.phone = text;
				else if (index == 1)
					userPlan.planId = stoi(text);
				index++;
			}
			userPlanList.push_back(userPlan);
		}
	}
	return userPlanList;
}

/*
* 添加一个意向套餐
* 对于已添加的套餐次数会自动+1
*/
void addWantedPlan(WantedPlan plan) {
	list<WantedPlan> planListDisk = readWantedPlanList();
	list<WantedPlan> planListNew;
	if (!planListDisk.empty()) {
		int maxId = 0;
		string content;
		bool haveRepeat = false;
		for (const auto& planDisk : planListDisk) {
			if (compareWantedPlan(planDisk, plan)) {
				haveRepeat = true;
				plan.id = planDisk.id;
				plan.times = planDisk.times + 1;
				content.append(getWantedPlanString(plan));
			}
			else {
				content.append(getWantedPlanString(planDisk));
			}
			maxId = planDisk.id > maxId ? planDisk.id : maxId;
		}
		if (!haveRepeat) {
			plan.id = maxId + 1;
			plan.times = 1;
			content = getWantedPlanString(plan);
		}
		writeFileTrunc(file_wanted_plan, content);
	}
	else {
		plan.id = 1;
		plan.times = 1;
		string content = getWantedPlanString(plan);
		writeFileTrunc(file_wanted_plan, content);
	}
}

list<WantedPlan> readWantedPlanList() {
	list<WantedPlan> wantedPlanList;
	string fileDisk = readFile(file_wanted_plan);
	if (!fileDisk.empty()) {
		if (fileDisk[fileDisk.length() - 1] == '\n') {
			fileDisk.pop_back();
		}
		list<string> wantedPlanTextList = splitString(fileDisk, "\n");
		for (const auto& planText : wantedPlanTextList) {
			list<string> wantedPlanStructText = splitString(planText, " ");
			WantedPlan plan = {};
			int index = 0;
			for (const auto& text : wantedPlanStructText) {
				if (index == 0)
					plan.id = stoi(text);
				else if (index == 1)
					plan.duration = stoi(text);
				else if (index == 2)
					plan.traffic = stoi(text);
				else if (index == 3)
					plan.broadband = stoi(text);
				else if (index == 4)
					plan.times = stoi(text);
				index++;
			}
			wantedPlanList.push_back(plan);
		}
	}
	return wantedPlanList;
}

string readFile(string& file) {
	string fileContent;
	ifstream infile(file.data());
	if (!infile.good()) {
		return "";
	}
	ostringstream stream;
	stream << infile.rdbuf();
	fileContent = stream.str();
	infile.close();
	return fileContent;
}

void writeFileTrunc(string& file, string& content) {
	ofstream outfile(file.data(), ios::trunc);
	outfile << content.data();
	outfile.close();
}

void writeFileApp(string& file, string& content) {
	ofstream outfile(file.data(), ios::app);
	outfile << content.data();
	outfile.close();
}