/*
Use accumulate to sum the elements in a vector<int>.
*/

#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> vec = {1,2,3};
	cout << accumulate(vec.cbegin(), vec.cend(), 0) << endl;
	return 0;
}