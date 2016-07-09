/*
Write a program to find and remove the odd-valued elements in a fl<int>.
*/

#include <iostream>
#include <string>
#include <vector>
#include <forward_list>

using namespace std;

int main(int argc, char const *argv[])
{
	forward_list<int> fl ={ 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	auto cur = fl.begin();
	auto pre = fl.before_begin();
	while (cur != fl.end()) {
		if (*cur % 2){
			cur = fl.erase_after(pre);
		} else {
			pre = cur;
			++cur;
		}
	}

	for (auto i : fl) {
		cout << i << " ";
	}
	cout << endl;

	return 0;
}