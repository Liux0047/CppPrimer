/*
Write a program to read a sequence of strings from the standard input into a deque. 
Use iterators to write a loop to print the elements in the deque.
*/

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>

using namespace std;

int main(int argc, char const *argv[])
{	
	string is;
	deque<string> ds;
	while (cin >> is) {
		ds.push_back(is);
	}

	for (auto it = ds.begin(); it != ds.end(); ++it) {
		cout << *it << endl;
	}
	return 0;
}
