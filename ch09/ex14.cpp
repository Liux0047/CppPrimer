/*
Write a program to assign the elements from a list of char* pointers to 
C-style character strings to a vector of strings.
*/

#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
	list<const char*> lc = {"ab", "cd"};
	vector<string> vs;
	vs.assign(lc.begin(), lc.end());
	for (auto v : vs) {
		cout << v << " ";
	}
	cout << endl;
	return 0;
}