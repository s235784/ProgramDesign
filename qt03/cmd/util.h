#pragma once
#include "planStruct.h"
#include "commentStruct.h"
#include "userPlanStruct.h"
#include "wantedPlanStruct.h"
#include <list>
#include <string>
using namespace std;

string getPlanString(Plan plan);
string getUserPlanString(UserPlan userPlan);
string getCommentString(Comment comment);
bool comparePlan(Plan a, Plan b);
list<string> splitString(string str, string deli = " ");
int getDecimalPlaces(float num);
list<int> getRandIntList(int maxNum, int count);
bool matchPhone(string phone);
string getWantedPlanString(WantedPlan plan);
bool compareWantedPlan(WantedPlan a, WantedPlan b);
string getTwoPlacesDecimal(float value);
