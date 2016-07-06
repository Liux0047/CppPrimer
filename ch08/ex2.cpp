/*
Write a function that takes and returns an istream&. 
The function should read the stream until it hits end-of-file. 
The function should print what it reads to the standard output. 
Reset the stream so that it is valid before returning the stream.

Test your function by calling it, passing cin as an argument.
*/

#include <iostream>
#include <string>

using namespace std;

istream &getInput (istream& is) {
	string s;
	while (!is.eof()){
		is >> s;
		cout << s << endl;
	}
	is.clear();
	return is;
}

int main(int argc, char const *argv[])
{
	getInput(cin);
	return 0;
}