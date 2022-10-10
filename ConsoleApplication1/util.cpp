#include "planStruct.h"
#include <string>
#include <list>
using namespace std;

bool comparePlan(Plan& a, Plan& b) {
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