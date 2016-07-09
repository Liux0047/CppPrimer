/*
Write a funtion that takes a string representing a name and two other strings representing a prefix, 
such as “Mr.” or “Ms.” and a suffix, such as “Jr.” or “III”. 
Using iterators and the insert and append functions, 
generate and return a new string with the suffix and prefix added to the given name.
*/

#include <string>
#include <vector>
#include <iostream>

using namespace std;

void add_fix(string &s, const string &prefix, const string &suffix) {
	s.insert(0, prefix);
	s.append(" " + suffix);
}

int main(int argc, char const *argv[])
{
	string s {"Allen"};
	add_fix(s, "Mr.", "Jr.");
	cout << s << endl;
	return 0;
}