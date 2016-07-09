/*
Write a program to process a vector<string>s whose elements represent integral values. 
Produce the sum of all the elements in that vector. 
Change the program so that it sums of strings that represent floating-point values.
*/

#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<string> vec {"3", "4"};
	int sum = 0;
	for (auto const &v : vec) {
		sum += std::stoi(v);
	}
	cout << sum << endl;

	int sumf = 0.0;
	for (auto const &v : vec) {
		sum += std::stof(v);
	}
	cout << sum << endl;

	return 0;
}