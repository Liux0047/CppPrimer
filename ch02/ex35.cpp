/*
Determine the types deduced in each of the following definitions. 
Once you’ve figured out the types, write a program to see whether you were correct.
*/


#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
	const int i = 42;
	auto j = i; // j is int
	const auto &k = i; // k is reference to const int
	auto *p = &i;	// p is const int*
	const auto j2 = i, &k2 = i;	// const int

	// print i means int, and PKi means pointer to const int.
	cout << "j is " << typeid(j).name() << endl
		<< "k is " << typeid(k).name() << endl
		<< "p is " << typeid(p).name() << endl
		<< "j2 is " << typeid(j2).name() << endl
		<< "k2 is " << typeid(k2).name() << endl;
}