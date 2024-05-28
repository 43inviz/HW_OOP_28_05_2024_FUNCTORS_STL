#include <iostream>
#include <vector>
#include "SearchMaxInVec.h"
#include "SearchMinInVector.h"
#include "increaseValue.h"
#include "decreaseValue.h"
#include "SortFromLowToHigh.h"
#include "SortByLower.h"
#include "DelBySearchVal.h"
using namespace std;



int main() {

	//vector<int> vec = { 1,2,3,4,5,6,7 };
	vector<int> vec = { 11,2,3,43,5,11,11};

	try {
		//MAX ELEMENT IN VECTOR
		/*SearchMaxInVector max;
		int maxVal = max(vec);
		cout <<"Max value: " << maxVal << endl;*/

		//MIN ELEMENT IN VECTOR
		/*SearchMinInVector min;
		int minValue = min(vec);
		cout << "Min value: " << minValue << endl;*/


		// *i += CONST VALUE
		//increaseValue val;
		//val(vec, 2);
		//for (auto i = vec.begin(); i != vec.end(); i++) {
		//	cout << *i << endl;
		//}

		// *i -= CONST VALUE
	    /*decreaseValue valu;
		valu(vec, 1);*/
		/*for (auto i = vec.begin(); i != vec.end(); i++) {
			cout << *i << endl;
		}*/

		//SORT FROM High TO Low
		//SortByLower sort;
		//sort(vec);

		//for (auto i = vec.begin(); i != vec.end(); i++) {
		//	cout << *i << endl;
		//}

		//SORT FROM HIGH TO LOW

		/*SortFromLowToHigh sort;
		sort(vec);
		for (auto i = vec.begin(); i != vec.end(); i++) {
			cout << *i << endl;
		}*/


		//Delete by search value
		DeleteBySearchVal del;
		del(vec, 11);

		for (auto i = vec.begin(); i != vec.end(); i++) {
			cout << *i << endl;
		}




	}
	catch (exception& ex) {
		cout << ex.what() << endl;
	}

	return 0;
}