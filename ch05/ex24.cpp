/*
Revise your program to throw an exception if the second number is zero. 
Test your program with a zero input to see what happens on your system if you don’t catch an exception.
*/

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

using namespace std;

int main() {
	int a, b;

	cout << "Enter 2 numbers: ";
	cin >> a >> b;

	if (b == 0) {
		throw runtime_error("b is zero");
	}
	cout << "result is " << a/b << endl;
}