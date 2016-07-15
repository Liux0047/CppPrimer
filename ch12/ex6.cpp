/*
Write a function that returns a dynamically allocated vector of ints. 
Pass that vector to another function that reads the standard input to give values to the elements. 
Pass the vector to another function to print the values that were read. 
Remember to delete the vector at the appropriate time.
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> *alloc() {
	return new vector<int>;
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
	vector<int> *vp = alloc();
	read(*vp);
	print(*vp);
	delete vp;
	return 0;
}