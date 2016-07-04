/*
Exercise 6.54: Write a declaration for a function that takes two int parameters and returns an int, 
and declare a vector whose elements have this function pointer type.

Exercise 6.55: Write four functions that add, subtract, multiply, 
and divide two int values. Store pointers to these functions in your vector from the previous exercise.

Exercise 6.56: Call each element in the vector and print their result.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int func(int, int);

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b){
	return a - b;
}

int multiply(int a, int b) {
	return a * b;
}

int divide(int a, int b) {
	return a / b;
}

int main(int argc, char const *argv[])
{
	vector<decltype(func)*> vec = {add, sub, multiply, divide};
	for (auto v : vec) {
		cout << v(4, 2) << endl;
	}
	return 0;
}