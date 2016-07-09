/*
Assuming vi is a container of ints that includes even and odd values, 
predict the behavior of the following loop. 
After you’ve analyzed this loop, write a program to test whether your expectations were correct.
*/

#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> vi = {1,2,3,4,5};
	auto iter = vi.begin();
	while (iter != vi.end()){
		if (*iter % 2) {
			iter = vi.insert(iter, *iter);
			++iter;
		}
		++iter;
	}

	for (auto v : vi) {
		cout << v << " ";
	}

	return 0;
}