#pragma once
#include <vector>
using namespace std;

class increaseValue {

public:
	void operator()(vector<int>& intVec,const int value) {
		if (intVec.empty()) {
			throw exception("Vector empty\n");
		}
		else {
			for (auto i = intVec.begin(); i != intVec.end(); i++) {
				*i += value;
			}
		}
	}
};
