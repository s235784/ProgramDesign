#include <math.h>
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <list>
#include <regex>
#include <string>
#include <vector>
#include "planStruct.h"
#include "userPlanStruct.h"
#include "userPlanVOStruct.h"
#include "wantedPlanStruct.h"
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
    content.append(" ");
    content.append(to_string(userPlan.planId));
    content.append("\n");
    return content;
}

bool comparePlan(Plan a, Plan b) {
    if (a.fee != b.fee) return false;
    if (a.duration != b.duration) return false;
    if (a.traffic != b.traffic) return false;
    if (a.broadband != b.broadband) return false;
    return true;
}

bool compareWantedPlan(WantedPlan a, WantedPlan b) {
    if (a.duration != b.duration) return false;
    if (a.traffic != b.traffic) return false;
    if (a.broadband != b.broadband) return false;
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
    num = num - (int)num;
    if (abs(num) <= 1e-6) {
        return 0;
    }
    for (int i = 0; i < 10; i++) {
        num *= 10;
        if (num - (int)num == 0) {
            return i + 1;
        }
    }
}

void showPlanList(list<Plan>& planList) {
    cout << "------------------------------------" << endl;
    cout << setiosflags(ios::left) << setw(12) << "编号" << setw(12) << "资费（元）" << setw(19)
         << "通话时长（分钟）" << setw(12) << "流量（MB）" << setw(12) << "宽带（Mb）" << endl;
    cout << "------------------------------------" << endl;
    for (const auto& plan : planList) {
        cout << setprecision(2) << fixed;
        cout << setw(12) << plan.id << setw(12) << plan.fee << setw(19) << plan.duration << setw(12)
             << plan.traffic << setw(12) << plan.broadband << endl;
    }
    cout << "------------------------------------" << endl;
}

void showUserPlanList(list<UserPlanVO>& planList) {
    cout << "------------------------------------" << endl;
    cout << setiosflags(ios::left) << setw(16) << "手机号" << setw(12) << "套餐编号" << setw(12)
         << "资费（元）" << setw(19) << "通话时长（分钟）" << setw(12) << "流量（MB）" << setw(12)
         << "宽带（Mb）" << endl;
    cout << "------------------------------------" << endl;
    for (const auto& plan : planList) {
        cout << setprecision(2) << fixed;
        cout << setw(16) << plan.phone << setw(12) << plan.id << setw(12) << plan.fee << setw(19)
             << plan.duration << setw(12) << plan.traffic << setw(12) << plan.broadband << endl;
    }
    cout << "------------------------------------" << endl;
}

void showWantedPlanList(list<WantedPlan>& planList) {
    cout << "------------------------------------" << endl;
    cout << setiosflags(ios::left) << setw(12) << "编号" << setw(19) << "通话时长（分钟）"
         << setw(12) << "流量（MB）" << setw(12) << "宽带（Mb）" << setw(12) << "次数" << endl;
    cout << "------------------------------------" << endl;
    for (const auto& plan : planList) {
        cout << setprecision(2) << fixed;
        cout << setw(12) << plan.id << setw(19) << plan.duration << setw(12) << plan.traffic
             << setw(12) << plan.broadband << setw(12) << plan.times << endl;
    }
    cout << "------------------------------------" << endl;
}

/*
 * 生成一个具有随机数的列表（从1开始）
 * maxNum 列表中最大的数
 * count 列表中数据的个数
 */
list<int> getRandIntList(int maxNum, int count) {
    list<int> result;
    if (maxNum <= count) {
        for (int i = 0; i < count; i++) {
            result.push_back(i);
        }
    } else {
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
    regex reg("^[1][3,4,5,7,8][0-9]{9}$");
    return regex_match(phone.data(), reg);
}