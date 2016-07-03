/*
Write a program that uses a do while loop to repetitively request two strings from the user 
and report which string is less than the other.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string rsp;
	do {
		string s1, s2;
		cout << "enter 2 strings" << endl;
		cin >> s1 >> s2;

		string lesser = s1 < s2 ? s1 : s2;
		cout << lesser << " is less than the other" << endl;

		cout << "repeat? [Y/N]: ";
		cin >> rsp;
	} while (!rsp.empty() && (rsp[0] != 'N' && rsp[0] != 'n'));
}