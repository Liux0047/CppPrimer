/*
Rewrite the program from the previous exercise to use a list. List the changes you needed to make.
*/

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>

using namespace std;

int main(int argc, char const *argv[])
{		
	list<string> ls;
	for (string is; cin >> is; ls.push_back(is));

	for (auto it = ls.begin(); it != ls.end(); ++it) {
		cout << *it << endl;
	}
	return 0;
}
