/*
Write a program to use a conditional operator to find the elements in a vector<int> 
that have odd value and double the value of each such element.
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v = {2,5,8,7,13,16};

	for (auto &i : v) {
		cout << (i = i%2 == 0 ? i : i *2) << " ";
	}
	cout << endl;
}