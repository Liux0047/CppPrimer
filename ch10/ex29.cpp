/*
Write a program using stream iterators to read a text file into a vector of strings.
*/

#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <deque>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
	ifstream ifs("../test.dat");	
	istream_iterator<string> iter(ifs), eof;
	vector<string> vs(iter, eof);

	for (auto s : vs) {
		cout << s << " ";
	}
	return 0;
}