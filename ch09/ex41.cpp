/*
Write a program that initializes a string from a vector<char>.
*/

#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<char> vec {'a', 'b'};
	string s (vec.begin(), vec.end());
	cout << s << endl;
	return 0;
}