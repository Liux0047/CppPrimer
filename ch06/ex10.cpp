/*
Using pointers, write a function to swap the values of two ints. 
Test the function by calling it and printing the swapped values.
*/

#include <iostream>
#include <string>

using namespace std;

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a {1}, b {2};
	swap(&a, &b);
	cout << a << " " << b << endl;
}