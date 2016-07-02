/*
Write three different versions of a program to print the elements of ia. 
One version should use a range for to manage the iteration, 
the other two should use an ordinary for loop in one case using subscripts and in the other using pointers. 
In all three programs write all the types directly. 
That is, do not use a type alias, auto, or decltype to simplify the code.
*/

#include <iostream>
#include <iterator>

using namespace std;

int main() {
	int ia[3][4] = {    // three elements; each element is an array of size 4
	    {0, 1, 2, 3},   // initializers for the row indexed by 0
	    {4, 5, 6, 7},   // initializers for the row indexed by 1
	    {8, 9, 10, 11}  // initializers for the row indexed by 2
	};

	for (const int (&row)[4] : ia) {
		for (int col : row){
			cout << col << " ";
		}
		cout << endl; 
	}

	for (size_t i=0; i!=3; ++i){
		for (size_t j=0; j!=4; ++j){
			cout << ia[i][j] << " ";
		}
		cout << endl;
	}

	for (int (*row)[4] = begin(ia); row != end(ia); ++row) {
		for (int *col = begin(*row); col != end(*row); ++col){
			cout << *col << " ";
		}
		cout << endl;
	}
}