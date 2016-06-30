/*
Write your own version of a program that prints the sum of a set of integers read from cin.
*/

#include <iostream>
using namespace std;

int main() {
	int sum {0};
	cout << "enter integers";
	for (int i {}; cin >> i; sum+=i);

	cout << sum << endl;
}