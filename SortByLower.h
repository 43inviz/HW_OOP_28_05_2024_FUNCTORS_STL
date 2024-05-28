#pragma once
#include <vector>
#include <algorithm>
using namespace std;

class SortByLower{
public:
	int operator()(vector<int>& intVec) {
		if (intVec.empty()) {
			throw exception("Vector empty\n");
		}
		else {
			sort(intVec.begin(), intVec.end(), [](int a, int b) { return a > b; });
		}
	}
};
