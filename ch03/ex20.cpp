/*
 Read a set of integers into a vector. 
 Print the sum of each pair of adjacent elements. 
 Change your program so that it prints the sum of the first and last elements, 
 followed by the sum of the second and second-to-last, and so on.
 */

#include <iostream>
#include <string>
#include <vector>
#include <cctype>

 using namespace std;

 int main() {
 	vector<int> v;
 	int i;

 	while (cin >> i) {
 		v.push_back(i);
 	}

 	cout << "Part a" << endl;
 	for (decltype(v.size()) index = 0; index < v.size() - 1; ++index) {
 		cout << v[index] + v[index+1] << endl;
 	}

 	cout << "Part b" << endl;
 	for (decltype(v.size()) index = 0; index < v.size() / 2; ++index) {
 		cout << v[index] + v[v.size() -1 - index] << endl;
 	}
 }
