/*
Rewrite the word-counting program from § 11.1 (p. 421) to use insert instead of subscripting. 
Which program do you think is easier to write and read? Explain your reasoning.
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
	map<string, size_t> count;
	string word;
	while (cin >> word) {
		auto ret = count.insert({word, 1});
		if (!ret.second) {
			++ret.first->second;
		}
	}

	for (auto c : count) {
		cout << c.first << " " << c.second << endl;
	}
	return 0;
}