/*
Extend your program to ignore case and punctuation. 
For example, “example.” “example,” and “Example” should all increment the same counter.
*/

#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>
#include <set>

using std::string;
using std::set;
using std::cin;
using std::map;
using std::endl;
using std::cout;
using std::remove_if;

void strip(string &s) {
	for (auto &c : s) {
		c = tolower(c);
	}

	s.erase(remove_if(s.begin(), s.end(), ispunct), s.end());
}

int main(int argc, char const *argv[])
{
	set<string> exclude = {"The", "But", "And", "Or", "An", "A","the", "but", "and", "or", "an", "a"};
	map<string, size_t>count;
	string s;
	while (cin >> s) {
		strip(s);
		if (exclude.find(s) == exclude.end()){
			++count[s];			
		}
	}

	for (auto m : count) {
		cout << m.first << " occured " << m.second << " times" << endl;
	}
	return 0;
}