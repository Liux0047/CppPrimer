/*
Write a function that takes a forward_list<string> and two additional string arguments. 
The function should find the first string and insert the second immediately following the first. 
If the first string is not found, 
then insert the second string at the end of the list.
*/

#include <iostream>
#include <string>
#include <vector>
#include <forward_list>

using namespace std;

void insertFound(forward_list<string> &fl, const string &target, const string &s) {
	auto cur = fl.begin(), pre = fl.before_begin();
	while (cur != fl.end() && *cur != target){
		pre = cur++;
	}
	fl.insert_after(cur == fl.end() ? pre : cur, s);
}

int main(int argc, char const *argv[])
{
	forward_list<string> fl = {"now", "you", "me"};
	insertFound(fl, "you", "see");
	for (auto i : fl) {
		cout << i << " ";
	}
	cout << endl;

	insertFound(fl, "none", "2");
	for (auto i : fl) {
		cout << i << " ";
	}
	cout << endl;
	return 0;
}