/*
Write a program that stores the excluded words in a vector instead of in a set. 
What are the advantages to using a set?
*/

#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<string> exclude = { "aa", "bb", "cc", "dd", "ee", "ff" };
	string word;
	while (cin >> word) {
		bool is_excluded = find(exclude.begin(), exclude.end(), word) != exclude.end();
		if (is_excluded) {
			cout << "excluded" << endl;
		} else {
			cout << "not excluded" << endl;
		}
	}
	return 0;
}