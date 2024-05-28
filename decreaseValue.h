 #pragma once
#include <vector>
using namespace std;

class decreaseValue {
public:
	void operator()(vector<int>& intVec, int value) {
		if (intVec.empty()) {
			throw exception("Vecgor empty\n");
		}
		else
		{
			for (auto i = intVec.begin(); i != intVec.end(); i++) {
				*i -= value;
			}
		}
	}
};