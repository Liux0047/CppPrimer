/*
Reimplement the program that eliminated duplicate words that we wrote in § 10.2.3 (p. 383) 
to use a list instead of a vector.
*/

#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <fstream>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
	list<string> lst = {"the","quick","red","fox","jumps","over","the","slow","red","turtle"};
	lst.sort();
	lst.unique();

	for (auto i : lst) {
		cout << i << " ";
	}
	cout << endl;
	return 0;
}