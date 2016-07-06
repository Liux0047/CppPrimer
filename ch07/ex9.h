/*
Add operations to read and print Person objects to the code 
you wrote for the exercises in § 7.1.2 (p. 260).
*/

#ifndef CH7_EX_9
#define CH7_EX_9

#include <string>
#include <iostream>
using namespace std;

struct Person {
	string name;
	string address;

	const string &getName() const {
		return name;
	}

	const string &getAddress() const {
		return address;
	}
};

istream &read(istream &is, Person &p) {
	cout << "Enter name and address: ";
	is >> p.name >> p.address;
	return is; 
}

ostream &print(ostream &os, const Person &p) {
	os << "name: " << p.name << " address: " << p.address;
	return os;
}


#endif