#include "planStruct.h"
#include "commentStruct.h"
#include "userPlanStruct.h"
#include "wantedPlanStruct.h"
#include <list>
#include <regex>
#include <random>
#include <string>
#include <vector>
#include <math.h>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <algorithm>

using namespace std;

/**
 * @brief getPlanString 获取Plan结构体的字符串数据
 * @param plan 结构体
 * @return 字符串数据
 */
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

/**
 * @brief getWantedPlanString 获取WantedPlan结构体的字符串数据
 * @param plan 结构体
 * @return 字符串数据
 */
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

/**
 * @brief getUserPlanString 获取UserPlan结构体的字符串数据
 * @param userPlan 结构体
 * @return 字符串数据
 */
string getUserPlanString(UserPlan userPlan) {
    string content = "";
    content.append(userPlan.phone);
    content.append(" ");
    content.append(to_string(userPlan.planId));
    content.append("\n");
    return content;
}

/**
 * @brief getCommentString 获取Comment结构体的字符串数据
 * @param comment 结构体
 * @return 字符串数据
 */
string getCommentString(Comment comment) {
    string content = "";
    content.append(to_string(comment.id));
    content.append(" ");
    content.append(comment.phone);
    content.append(" ");
    content.append(to_string(comment.fraction));
    content.append(" ");
    content.append(comment.content);
    content.append("\n");
    return content;
}

/**
 * @brief comparePlan 比较两个Plan是否内容相等
 * @param a Plan A
 * @param b Plan B
 * @return 相等True
 *
 * 将不会判断两个Plan的ID是否相等
 * 仅对其他参数进行判断
 */
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

/**
 * @brief compareWantedPlan 比较两个WantedPlan是否内容相等
 * @param a WantedPlan A
 * @param b WantedPlan B
 * @return boolen
 */
bool compareWantedPlan(WantedPlan a, WantedPlan b) {
    if (a.duration != b.duration)
        return false;
    if (a.traffic != b.traffic)
        return false;
    if (a.broadband != b.broadband)
        return false;
    return true;
}

/**
 * @brief splitString 通过指定内容截取字符串
 * @param str 要截取的字符串
 * @param deli 截取的依据
 * @return 截取后的列表
 */
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

/**
 * @brief getRandIntList 生成一个具有随机数的列表（从1开始）
 * @param maxNum 列表中最大的数
 * @param count 列表中数据的个数
 * @return 随机数列表
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
        unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
        shuffle(temp.begin(), temp.end(), std::default_random_engine(seed));
        for (int i = 0; i < count; i++) {
            result.push_back(temp[i]);
        }
    }
    return result;
}

/**
 * @brief matchPhone 正则匹配手机号格式
 * @param phone 要匹配的手机号
 * @return boolen
 */
bool matchPhone(string phone) {
    regex reg("^[1][3,4,5,7,8][0-9]{9}$");
    return regex_match(phone.data(), reg);
}

/**
 * @brief getTwoPlacesDecimal 获得两位小数的string
 * @param value 要转换的数字
 * @return 两位小数string
 */
string getTwoPlacesDecimal(float value) {
    string str = to_string(value);
    return str.substr(0, str.find(".") + 3);
}
