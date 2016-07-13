/*
Write your own version of the word-counting program.
*/

#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int main(int argc, char const *argv[])
{
	set<string> exclude = {"The", "But", "And", "Or", "An", "A","the", "but", "and", "or", "an", "a"};
	map<string, size_t>count;
	string s;
	while (cin >> s) {
		if (exclude.find(s) == exclude.end()){
			++count[s];			
		}
	}

	for (auto m : count) {
		cout << m.first << " occured " << m.second << " times" << endl;
	}
	return 0;
}