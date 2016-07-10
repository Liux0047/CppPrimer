/*
The algorithm header defines a function named count that, like find, 
takes a pair of iterators and a value. 
count returns a count of how often that value appears. 
Read a sequence of ints into a vector and print the count of how many elements have a given value.
*/

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> vec = {27, 210, 12, 47, 109, 83,27};
	cout << count(vec.cbegin(), vec.cend(), 27) << endl;
	return 0;
}