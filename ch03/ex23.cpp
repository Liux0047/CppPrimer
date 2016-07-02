/*
Write a program to create a vector with ten int elements. 
Using an iterator, assign each element a value that is twice its current value. 
Test your program by printing the vector.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<int> v(10, 1);
	

	for (auto it = v.begin(); it != v.end(); ++it){
		*it *= 2;
	}

	for (auto it = v.cbegin(); it != v.cend(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
}
