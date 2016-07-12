/*
Given a vector that has ten elements, 
copy the elements from positions 3 through 7 in reverse order to a list.
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
	vector<int> vi = {0,1,2,3,4,5,6,7,8,9};
	list<int> li;
	copy(vi.crbegin() + 3, vi.crbegin() + 8, back_inserter(li));

	for (auto i : li) {
		cout << i << " ";
	}
	return 0;
}
