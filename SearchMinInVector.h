#pragma once
#include <vector>
#include <algorithm>
using namespace std;

class SearchMinInVector
{
public:

	auto operator()(vector<int>& intVec) {
		if (intVec.empty()) {
			throw exception("Vector is empty\n");
		}
		else {
			return *min_element(intVec.begin(), intVec.end());
		}
	}
};

