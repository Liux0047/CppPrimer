/*
Use a range for to change all the characters in a string to X.
*/


#include <iostream>
#include <string>

using namespace std;

int main() {
	string s {"a string"};

	for (auto &c : s) {
		c = 'X';
	}

	cout << s << endl;
}