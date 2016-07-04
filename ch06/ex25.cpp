/*
Write a main function that takes two arguments. 
Concatenate the supplied arguments and print the resulting string.
*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	if (argc > 2){
		cout << argv[1] << argv[2] << endl;
	}
	return 0;
}