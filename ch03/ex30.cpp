/*
 Write a program to define an array of ten ints. 
 Give each element the same value as its position in the array.
 */

#include <iostream>
using namespace std;

int main() {
	const unsigned size = 10;
	int arr[size] = {};
	for (int i = 0; i != size; ++i) {
		arr[i] = i;
	}

	for (int i : arr) {
		cout << i << " ";
	}
	cout << endl;
}