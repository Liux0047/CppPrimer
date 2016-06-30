/*
Write a program that prompts the user for two integers. 
Print each number in the range specified by those two integers.
*/

#include <iostream>
using namespace std;

int main(){
	cout << "enter 2 integers" << endl;
	int low {}, high {};
	cin >> low >> high;

	int num = low;
	while (num <= high) {
		cout << num << endl;
		num++;
	}
}
