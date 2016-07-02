/*
Read a sequence of words from cin and store the values a vector. 
After you’ve read all the words, process the vector and change each word to uppercase. 
Print the transformed elements, eight words to a line.
*/

#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main() {
	vector<string> v;
	string s;
	while (cin >> s) {
		v.push_back(s);
	}

	for (auto &vs : v) {
		for (auto &c : vs) {
			c = toupper(c);
		}
	}

	for (auto vs : v) {
		cout << vs << endl;
	}
}
