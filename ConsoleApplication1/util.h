#pragma once
#include "planStruct.h"
#include <list>
#include <string>
using namespace std;

bool comparePlan(Plan& a, Plan& b);
list<string> splitString(string str, string deli = " ");
