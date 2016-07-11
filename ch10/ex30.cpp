/*
Use stream iterators, sort, and copy to read a sequence of integers from the standard input, 
sort them, and then write them back to the standard output.
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
	istream_iterator<int> iter(cin), eof;
	vector<int> vec(iter, eof);
	sort(vec.begin(), vec.end());
	ostream_iterator<int> out_iter(cout, " ");
	copy(vec.begin(), vec.end(), out_iter);
	return 0;
}