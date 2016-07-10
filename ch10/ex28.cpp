/*
Copy a vector that holds the values from 1 to 9 inclusive, into three other containers. 
Use an inserter, a back_inserter, and a front_inserter, respectivly to add elements to these containers. 
Predict how the output sequence varies by the kind of inserter 
and verify your predictions by running your programs.
*/

#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <deque>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> vec = {1,2,3,4,5,6,7,8,9};
	deque<int> vi, vb, vf;

	unique_copy(vec.begin(), vec.end(), inserter(vi, vi.begin()));
	for (auto v : vi) {
		cout << v << " ";
	}
	cout << endl;

	unique_copy(vec.begin(), vec.end(), back_inserter(vb));
	for (auto v : vb) {
		cout << v << " ";
	}
	cout << endl;

	unique_copy(vec.begin(), vec.end(), front_inserter(vf));
	for (auto v : vf) {
		cout << v << " ";
	}
	cout << endl;

	return 0;
}