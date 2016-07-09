/*Write a program that finds each numeric character and then 
each alphabetic character in the string "ab2c3d7R4E6". 
Write two versions of the program. The first should use find_first_of, 
and the second find_first_not_of.
*/


#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	string s {"ab2c3d7R4E6"};
	string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	string::size_type pos = 0;

	while ((pos = s.find_first_of(alphabet, pos)) != string::npos) {
		cout << "found at pos " << pos << endl;
		pos++;
	}

	pos = 0;
	string::size_type matched = 0;
	while ((pos = s.find_first_not_of(alphabet, pos)) != string::npos) {
		for (auto i = matched; i != pos; ++i) {
			cout << "found at pos " << i << endl;
		}
		matched = ++pos;
	}

	return 0;
}