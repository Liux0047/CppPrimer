/*
Write a function to return the absolute value of its argument.
*/

#include <iostream>
#include <string>

using namespace std;

int abs(int i) {
	return i > 0 ? i: -i;
}

int main() {
	int i = -5;
	cout << "absolute value of " << i << " is " << abs(i) << endl;
}