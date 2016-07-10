/*
Use bind and check_size to find the first element in a vector of ints 
that has a value greater than the length of a specified string value.
*/

#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <functional>

using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz)
{
    return s.size() < sz;
}

int main(int argc, char const *argv[])
{
	vector<int> vi = {2,4,6,2,3,9};
	string str {"12334"};
	auto found = find_if(vi.begin(), vi.end(), bind(check_size, str, _1));
	if (found != vi.end()) {
		cout << *found << endl;
	}
	return 0;
}