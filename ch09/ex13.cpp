/*
How would you initialize a vector<double> from a list<int>? From a vector<int>? 
Write code to check your answers.
*/

#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
	list<int> li = {1,2,3};
	vector<int> vi = {4,5,6};

	vector<double> vd(li.begin(), li.end());
	for (auto v: vd) {
		cout << v << " ";
	}
	cout << endl;

	vector<double> vd2(vi.begin(), vi.end());
	for (auto v: vd2){
		cout << v << " ";
	}

	return 0;
}