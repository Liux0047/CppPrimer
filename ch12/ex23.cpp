/*
Write a program to concatenate two string literals, 
putting the result in a dynamically allocated array of char. 
Write a program to concatenate two library strings 
that have the same value as the literals used in the first program.
*/

#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
	char* concat_str = new char[strlen("first ") + strlen("second") + 1]();
	strcat(concat_str, "first ");
	strcat(concat_str, "second");

	cout << concat_str << endl;
	delete []concat_str;

	string s1{"first "}, s2{"second"};
	cout << s1 + s2 << endl;

	return 0;
}