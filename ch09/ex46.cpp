/*
Rewrite the previous exercise using a position and length to manage the strings. 
This time use only the insert function.
*/

#include <string>
#include <vector>
#include <iostream>

using namespace std;

void add_fix(string &s, const string &prefix, const string &suffix) {
	s.insert(0, prefix);
	s.insert(s.size(), " " + suffix);
}

int main(int argc, char const *argv[])
{
	string s {"Allen"};
	add_fix(s, "Mr.", "Jr.");
	cout << s << endl;
	return 0;
}