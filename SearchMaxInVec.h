#pragma once
#include <vector>
#include <algorithm>
using namespace std;

class SearchMaxInVector {
public:
	int operator()(vector<int> intVec) {
		if (intVec.empty()) {
			throw exception("Vector is empty\n");
		}
		else {
			return *max_element(intVec.begin(), intVec.end());
		}
	}
};
