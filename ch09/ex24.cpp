/*
Write a program that fetches the first element in a vector using at, 
the subscript operator, front, and begin. 
Test your program on an empty vector.
*/

#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	// vector<int> vec;
	vector<int> vec = {1};
	cout << vec.at(0);
	cout << vec[0];
	cout << vec.front();
	cout << *vec.begin();
	return 0;
}