/*
Write a program that takes the names of an input file and two output files. 
The input file should hold integers. 
Using an istream_iterator read the input file. 
Using ostream_iterators, write the odd numbers into the first output file. 
Each value should be followed by a space. 
Write the even numbers into the second file. 
Each of these values should be placed on a separate line.
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
	if (argc != 4) {
		cerr << "incorrect number of args";
		return 0;
	}

	ifstream ifs(argv[1]);
	istream_iterator<int> in_iter(ifs), eof;

	ofstream ofs_odd(argv[2]), ofs_even(argv[3]);
	ostream_iterator<int> out_odd(ofs_odd, " "), out_even(ofs_even, "\n");

	for_each(in_iter, eof, [&out_odd, &out_even](const int i) {
		*(i % 2 ? out_odd : out_even) = i;
	});

	return 0;
}