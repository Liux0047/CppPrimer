/*
Write a function to swap two int pointers.
*/

#include <iostream>
#include <string>

using namespace std;

void swap(int *&a, int *&b){
	int *temp = a;
	a = b;
	b = temp;
}

int main() {
	int i {2}, j {3};
	int *ip = &i;
	int *jp = &j;
	swap(ip, jp);

	cout << *ip << ": " << *jp << endl;
}

