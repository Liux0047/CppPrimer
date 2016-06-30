/*
Using escape sequences, write a program to print 2M followed by a newline. 
Modify the program to print 2, then a tab, then an M, followed by a newline.
*/

#include <iostream>
using namespace std;

int main() {
	cout << "\62\115\12";
	cout << "\62\11\115\12";
}