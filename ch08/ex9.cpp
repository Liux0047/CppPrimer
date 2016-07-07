/*
Use the function you wrote for the first exercise in § 8.1.2 (p. 314) to 
print the contents of an istringstream object.
*/

#include <iostream>
#include <string>
#include <sstream>

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
	istringstream iss("hello");
	getInput(iss);
	return 0;
}