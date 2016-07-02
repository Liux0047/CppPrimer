/*
Write a program to read strings from the standard input, 
concatenating what is read into one large string. 
Print the concatenated string. Next, 
change the program to separate adjacent input strings by a space.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	string s, out = "";
	while (cin >> s) {
		out += s + " ";
	}
	cout << out << endl;
}