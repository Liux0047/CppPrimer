/*
Using fill_n, write a program to set a sequence of int values to 0.
*/

#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> vec = {1,2,3};
	fill_n(vec.begin(), vec.size(), 0);
	for (auto v : vec) {
		cout << v << " ";
	}
	return 0;
}