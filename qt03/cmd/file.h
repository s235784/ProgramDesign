#pragma once
#include "planStruct.h"
#include "commentStruct.h"
#include "userPlanStruct.h"
#include "wantedPlanStruct.h"
#include <string>
#include <list>
using namespace std;

void initProperties(); // 初始化配置文件
bool isExistPlan(Plan planNew); // 通过套餐结构体判断数据是否重复
bool isExistPlanById(int id); // 通过套餐ID判断数据是否存在
void addPlan(Plan planNew); // 添加一条套餐数据
void updatePlan(Plan plan); // 更新套餐
void deletePlan(int id); // 删除一条套餐
string getAdminPassword(); // 获取配置文件中的Admin密码
list<Plan> readPlanList(); // 获取文件中的套餐的列表
Plan getPlanById(int id); // 通过ID获取套餐
Plan getPlanByPhone(string& phone); // 通过手机号获取套餐
bool isExistUserPlan(string& phone); // 通过手机号判断该用户是否有套餐
void updateUserPlanByPhone(string& phone, int id); // 通过手机号更新用户套餐
list<UserPlan> readUserPlanList(); // 获取所有用户的套餐
void addWantedPlan(WantedPlan plan); // 添加用户意向套餐
list<WantedPlan> readWantedPlanList(); // 获取用户意向套餐的列表
void addComment(Comment comment); // 添加一条评价
list<Comment> readCommentList(); // 获取用户评价的列表
