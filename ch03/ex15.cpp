/*
Write a program to read a sequence of ints from cin and store those values in a vector.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<string> v;
	string s;
	while (cin >> s){
		v.push_back(s);
	}

	for (string s : v) {
		cout << s << " ";
	}
}