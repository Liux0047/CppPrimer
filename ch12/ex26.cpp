/*
Rewrite the program on page 481 using an allocator.
*/


#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

int main(int argc, char const *argv[])
{
	int size = 10;
	allocator<string> alloc;
	auto origin = alloc.allocate(size);
	auto moving = origin;
	string s;
	while (cin >> s && moving != (origin + size)) {
		alloc.construct(moving++, s);
	}

	while (moving != origin){
		cout << *--moving << endl;
		alloc.destroy(moving);
	}

	alloc.deallocate(origin, size);

	return 0;
}