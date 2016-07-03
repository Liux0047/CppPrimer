/*
Given two vectors of ints, write a program to determine whether one vector is a prefix of the other. 
For vectors of unequal length, compare the number of elements of the smaller vector. 
For example, given the vectors containing 0, 1, 1, and 2 and 0, 1, 1, 2, 3, 5, 8, respectively your program should return true.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<int> v1 {0, 1, 1, 2}, v2 {0, 1, 1, 2, 3, 5, 8}, longer, shorter;

	if (v1.size() >= v2.size()){
		longer = v1;
		shorter = v2;
	} else {
		longer = v2;
		shorter = v1;
	}

	for (auto v=shorter.begin(); v!= shorter.end(); v++){
		if (*v != *(longer.begin() + (v - shorter.begin()))){
			cout << "not a prefix" << endl;
			return 0;
		}
	}

	cout << "is prefix" << endl;
	return 0;

}