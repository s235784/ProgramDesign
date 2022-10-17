#include "util.h"
#include "planStruct.h"
#include "commentStruct.h"
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
list<Comment> readCommentList();
string readFile(string& file);
void writeFileTrunc(string& file, string& content);
void writeFileApp(string& file, string& content);

string file_properties = "config.txt"; // 配置文件名
string file_plan = "plan.txt"; // 套餐文件名
string file_user_plan = "userPlan.txt"; // 用户套餐文件名
string file_wanted_plan = "wantedPlan.txt"; // 用户意向套餐文件名
string file_comment = "comment.txt"; // 评论文件名

/**
 * @brief initProperties 初始化配置文件
 */
void initProperties() {
	if (!ifstream{ file_properties }) {
		ofstream outfile(file_properties.data(), ios::trunc);
        outfile << "admin_password=1234"; // 写入默认管理员密码
		outfile.close();
	}
}

/**
 * @brief getAdminPassword 获取管理员密码
 * @return 管理员密码
 */
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

/**
 * @brief isExistPlan 判断套餐是否已存在
 * @param planNew 要添加的新套餐
 * @return boolen
 */
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

/**
 * @brief isExistPlanById 通过ID判断套餐是否存在
 * @param id 套餐ID
 * @return boolen
 */
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

/**
 * @brief addPlan 添加新套餐
 * @param planNew 新套餐
 */
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

/**
 * @brief updatePlan 更新套餐
 * @param plan 更新后的套餐内容（需要指定ID）
 */
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

/**
 * @brief deletePlan 删除套餐
 * @param id 套餐ID
 */
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

/**
 * @brief readPlanList 获取套餐的列表
 * @return list
 */
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

/**
 * @brief getPlanById 通过ID获取套餐
 * @param id 套餐ID
 * @return Plan 套餐
 */
Plan getPlanById(int id) {
	list<Plan> planListDisk = readPlanList();
	for (auto& plan : planListDisk) {
		if (plan.id == id) {
			return plan;
		}
	}
    return {0, 0, 0, 0, 0};
}

/**
 * @brief isExistUserPlan 判断用户是否已选择套餐
 * @param phone 用户手机号
 * @return boolen
 */
bool isExistUserPlan(string& phone) {
	list<UserPlan> userPlanList = readUserPlanList();
	for (const auto& userPlan : userPlanList) {
		if (userPlan.phone == phone)
			return true;
	}
	return false;
}

/**
 * @brief getPlanByPhone 通过用户手机号获取套餐
 * @param phone 用户手机号
 * @return Plan
 */
Plan getPlanByPhone(string& phone) {
	list<UserPlan> userPlanList = readUserPlanList();
    int id = 0;
	for (UserPlan userPlan : userPlanList) {
		if (userPlan.phone == phone) {
			id = userPlan.planId;
			break;
		}
	}
	return getPlanById(id);
}

/**
 * @brief updateUserPlanByPhone 通过用户手机号更新用户套餐
 * @param phone 用户手机号
 * @param id 更新后的套餐ID
 */
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

/**
 * @brief readUserPlanList 获取用户套餐的列表
 * @return 包含所有用户及其套餐内容的列表
 */
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

/**
 * @brief addWantedPlan 添加一个意向套餐
 * @param plan 意向套餐的内容
 * 对于已存在相同意向套餐的情况，该套餐的次数会自动+1
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
                          // 已有该意向套餐
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
        if (!haveRepeat) { // 没有该意向套餐
			plan.id = maxId + 1;
			plan.times = 1;
            content.append(getWantedPlanString(plan));
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

/**
 * @brief readWantedPlanList 获取用户意向套餐列表
 * @return 用户意向套餐列表
 */
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

/**
 * @brief addComment 添加一条评论
 * @param comment 评论结构体
 */
void addComment(Comment comment) {
    list<Comment> commentListDisk = readCommentList();
    list<Comment> commentListNew;
    if (!commentListDisk.empty()) {
        int maxId = 0;
        string content;
        for (const auto& commentDisk : commentListDisk) {
            content.append(getCommentString(commentDisk));
            maxId = commentDisk.id > maxId ? commentDisk.id : maxId;
        }
        comment.id = maxId + 1;
        content.append(getCommentString(comment));
        writeFileTrunc(file_comment, content);
    }
    else {
        comment.id = 1;
        string content = getCommentString(comment);
        writeFileTrunc(file_comment, content);
    }
}

/**
 * @brief readCommentList 获取所有评论
 * @return 所有评论的列表
 */
list<Comment> readCommentList() {
    list<Comment> commentList;
    string fileDisk = readFile(file_comment);
    if (!fileDisk.empty()) {
        if (fileDisk[fileDisk.length() - 1] == '\n') {
            fileDisk.pop_back();
        }
        list<string> commentTextList = splitString(fileDisk, "\n");
        for (const auto& commentText : commentTextList) {
            list<string> commentStructText = splitString(commentText, " ");
            Comment comment = {};
            int index = 0;
            for (const auto& text : commentStructText) {
                if (index == 0)
                    comment.id = stoi(text);
                else if (index == 1)
                    comment.phone = text;
                else if (index == 2)
                    comment.fraction = stoi(text);
                else if (index == 3)
                    comment.content = text;
                index++;
            }
            commentList.push_back(comment);
        }
    }
    return commentList;
}

/**
 * @brief readFile 读取一个文件
 * @param file string类型的文件名
 * @return 文件内容
 */
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

/**
 * @brief writeFileTrunc 通过覆盖的方式写入文件内容
 * @param file 要写入的文件名
 * @param content 要写入的文件内容
 */
void writeFileTrunc(string& file, string& content) {
	ofstream outfile(file.data(), ios::trunc);
	outfile << content.data();
	outfile.close();
}

/**
 * @brief writeFileApp 通过追加的方式写入文件内容
 * @param file 要写入的文件名
 * @param content 要写入的文件内容
 */
void writeFileApp(string& file, string& content) {
	ofstream outfile(file.data(), ios::app);
	outfile << content.data();
	outfile.close();
}
