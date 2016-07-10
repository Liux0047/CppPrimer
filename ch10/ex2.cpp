/*
Repeat the previous program, but read values into a list of strings.
*/

#include <list>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	list<string> ls = {"ab", "abc", "ab", "a"};
	cout << count(ls.cbegin(), ls.cend(), "ab") << endl;
	return 0;
}