/*
Update the program from the previous exercise so that it prints only the unique elements. 
Your program should use unqiue_copy (§ 10.4.1, p. 403).
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
	unique_copy(vec.begin(), vec.end(), out_iter);
	return 0;
}