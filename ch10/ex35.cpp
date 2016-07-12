/*
Now print the elements in reverse order using ordinary iterators.
*/

#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> vi = {1,2,3,4};
	for (auto it = vi.cend() - 1; it != vi.cbegin() - 1; --it) {
		cout << *it << " ";
	}
	return 0;
}
