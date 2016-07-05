/*
Provide operations in your Person class to return the name and address. 
Should these functions be const? Explain your choice.
*/

#ifndef CH7_EX_5
#define CH7_EX_5

#include <string>
using namespace std;

class Person {
	string name;
	string address;

	const string &getName() const {
		return name;
	}

	const string &getAddress() const {
		return address;
	}
};


#endif