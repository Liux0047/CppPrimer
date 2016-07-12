/*
Use reverse_iterators to print a vector in reverse order.
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
	for (auto it = vi.crbegin(); it != vi.crend(); ++it) {
		cout << *it << " ";
	}
	return 0;
}
