#pragma once
#include <vector>
using namespace std;

class DeleteBySearchVal {

public:
	void operator()(vector<int>& intVec,const int value) {
		if (intVec.empty()) {
			throw exception("Vec empty\n");
		}
		else {
			for (auto i = intVec.begin(); i != intVec.end(); ) {
				if (*i == value) {
					i = intVec.erase(i);
				}
				else {
					++i;
				}
			}
		}
	}
};
