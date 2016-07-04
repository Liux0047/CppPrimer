/*
Write a function that takes an int and a pointer to an int and 
returns the larger of the int value or the value to which the pointer points. 
What type should you use for the pointer?
*/
#include <iostream>
#include <string>

using namespace std;

int larger(const int i, const int *ip) {
	return i > *ip ? i : *ip;
}

int main() {
	int i {51};
	int j {19};
	cout << larger(i, &j) << endl;
}