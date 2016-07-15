/*
Redo the previous exercise, this time using shared_ptr.
*/
#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

shared_ptr<vector<int>> alloc() {
	return make_shared<vector<int>>();
}

void read(vector<int> &vec) {
	int i;
	while (cin >> i) {
		vec.push_back(i);
	}
}

void print(vector<int> &vec) {
	for (auto v : vec) {
		cout << v << " ";
	}
}

int main(int argc, char const *argv[])
{
	auto vp = alloc();
	read(*vp);
	print(*vp);
	return 0;
}