#include "util.h"
#include "planStruct.h"
#include <list>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

string readFile(string& file);
list<Plan> readPlanList();
void writeFileTrunc(string& file, string& content);
list<Plan> readPlanList();

string file_properties = "config.txt";
string file_user_plan = "userPlan.txt";

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

void writePlanList(list<Plan>& planList) {
	list<Plan> planListDisk = readPlanList();
	if (!planListDisk.empty()) {
		
	}
	else {
		string content = "";
		for (const auto& plan : planList) {
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
		}
		writeFileTrunc(file_user_plan, content);
	}
}

list<Plan> readPlanList() {
	list<Plan> planList;
	string fileDisk = readFile(file_user_plan);
	if (!fileDisk.empty()) {
		list<string> planTextList = splitString(fileDisk, "\n");
		for (const auto& planText : planTextList) {
			list<string> planStructText = splitString(planText, " ");
			for (const auto& text : planStructText) {
				// todo
			}
		}
	}
	return planList;
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