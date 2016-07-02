/*
Write a program to compare two arrays for equality. 
Write a similar program to compare two vectors.
*/

#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main() {
	int arr1[3] = {1,2,3};
	int arr2[4] = {1,2,3,5};

	const int* pb1 = begin(arr1);
	const int* pe1 = end(arr1);
	const int* pb2 = begin(arr2);
	const int* pe2 = end(arr2);

	if (pe1 - pb1 == pe2 - pb2){
		for (auto i = pb1, j = pb2; (i != pe1) && (j != pe2); ++i ,++j){
			if (*i != *j){
				cout << "unequal" << endl;
				return 0;
			}
		}
		cout << "equal" << endl;
	} else {
		cout << "unequal" << endl;
	}
}