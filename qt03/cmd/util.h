#pragma once
#include "planStruct.h"
#include "commentStruct.h"
#include "userPlanStruct.h"
#include "wantedPlanStruct.h"
#include <list>
#include <string>
using namespace std;

string getPlanString(Plan plan); // 获取Plan结构体的字符串数据
string getUserPlanString(UserPlan userPlan); // 获取UserPlan结构体的字符串数据
string getCommentString(Comment comment); // 获取Comment结构体的字符串数据
string getWantedPlanString(WantedPlan plan); // 获取WantedPlan结构体的字符串数据
bool comparePlan(Plan a, Plan b); // 比较两个Plan结构体是否相等（ID不判断）
list<string> splitString(string str, string deli = " "); // 通过deli截取字符串
list<int> getRandIntList(int maxNum, int count); // 获取一个随机数列表
bool matchPhone(string phone); // 正则匹配手机号
bool compareWantedPlan(WantedPlan a, WantedPlan b); // 比较WantedPlan（ID不判断）
string getTwoPlacesDecimal(float value); // 获取value的两位小数格式
