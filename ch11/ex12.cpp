/*
Write a program to read a sequence of strings and ints, storing each into a pair. 
Store the pairs in a vector.
*/


#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	int i;
	vector<pair<string, int>> vec;
	while (cin >> s && cin >> i) {
		vec.push_back({s, i});
	}

	for (auto v : vec) {
		cout << v.first << " " << v.second << endl;
	}
	return 0;
}

