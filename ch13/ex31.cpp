/*
Give your class a < operator and define a vector of HasPtrs. 
Give that vector some elements and then sort the vector. Note when swap is called.
*/
#include <vector>
#include <algorithm>
#include "ex31.h"

int main(int argc, char const *argv[])
{
	std::vector<HasPtr> vec = {HasPtr(2), HasPtr(3), HasPtr(1)};
	std::sort(vec.begin(), vec.end());

	for (auto v : vec) {
		std::cout << v.getI() << std::endl;
	}

	return 0;
}