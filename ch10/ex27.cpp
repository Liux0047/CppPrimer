/*
In addition to unique (§ 10.2.3, p. 384), 
the library defines function named unique_copy that takes a third iterator denoting a destination 
into which to copy the unique elements. 
Write a program that uses unique_copy to copy the unique elements from 
a vector into an initially empty list.
*/

#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> vi = {1, 2, 2, 3, 4, 4, 5, 5, 5};
	list<int> li;
	unique_copy(vi.begin(), vi.end(), inserter(li, li.begin()));

	for (auto v : li) {
		cout << v << " ";
	}
	return 0;
}
