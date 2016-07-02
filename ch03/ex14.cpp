/*
Write a program to read a sequence of ints from cin and store those values in a vector.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<int> v;
	int i{};
	while (cin >> i){
		v.push_back(i);
	}

	for (int j : v) {
		cout << j << " ";
	}
}