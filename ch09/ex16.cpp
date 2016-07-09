/*
Write a program to determine whether two vector<int>s are equal.
Repeat the previous program, but compare elements in a list<int> to a vector<int>.
*/

#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> v1 = {1,2,3};
	vector<int> v2 = {1,2};
	list<int> li = {1,2,3};

	cout << (v1 == v2 ? "equal" : "unequal") << endl;
	cout << (vector<int>(li.begin(), li.end()) == v1 ? "equal" : "unequal") << endl;
	return 0;
}