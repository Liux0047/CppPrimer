/*
Write a function that takes an initializer_list<int> and 
produces the sum of the elements in the list.
*/

#include <iostream>
#include <string>
#include <initializer_list>

using namespace std;

int sum(initializer_list<int> const &il) {
	int sum {0};
	for (auto i : il) {
		sum += i;
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	cout << sum({1,3,5}) << endl;

	return 0;
}