/*
Write a lambda that takes two ints and returns their sum.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	auto sum = [](int a, int b) {
		return a + b;
	};
	return 0;
}