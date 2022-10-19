#pragma once
#include <list>
#include <string>
#include "planStruct.h"
#include "userPlanStruct.h"
#include "wantedPlanStruct.h"
using namespace std;

void initProperties();
bool isExistPlan(Plan planNew);
bool isExistPlanById(int id);
void addPlan(Plan planNew);
void updatePlan(Plan plan);
void deletePlan(int id);
string getAdminPassword();
list<Plan> readPlanList();
Plan getPlanById(int id);
Plan getPlanByPhone(string& phone);
bool isExistUserPlan(string& phone);
void updateUserPlanByPhone(string& phone, int id);
list<UserPlan> readUserPlanList();
void addWantedPlan(WantedPlan plan);
list<WantedPlan> readWantedPlanList();
