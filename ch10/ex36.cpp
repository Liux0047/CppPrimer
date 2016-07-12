/*
Use find to find the last element in a list of ints with value 0.
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
	vector<int> vi = {1,0,2,3,4,0};
	
	cout << *find(vi.crbegin(), vi.crend(), 0) << endl;
	return 0;
}
