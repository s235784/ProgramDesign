#pragma once
#include <list>
#include <string>
#include "planStruct.h"
#include "userPlanStruct.h"
#include "userPlanVOStruct.h"
#include "wantedPlanStruct.h"
using namespace std;

string getPlanString(Plan plan);
string getUserPlanString(UserPlan userPlan);
bool comparePlan(Plan a, Plan b);
list<string> splitString(string str, string deli = " ");
int getDecimalPlaces(float num);
void showPlanList(list<Plan>& planList);
void showUserPlanList(list<UserPlanVO>& planList);
void showWantedPlanList(list<WantedPlan>& planList);
list<int> getRandIntList(int maxNum, int count);
bool matchPhone(string phone);
string getWantedPlanString(WantedPlan plan);
bool compareWantedPlan(WantedPlan a, WantedPlan b);