/*
Write a program that reads a string of characters including punctuation 
and writes what was read but with the punctuation removed.
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
	string s;
	cin >> s;

	for (auto c : s) {
		if (!ispunct(c)) {
			cout << c;
		}
	}

}
