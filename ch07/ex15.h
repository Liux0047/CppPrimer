/*
Add appropriate constructors to your Person class.
*/
#ifndef CH7_EX_15
#define CH7_EX_15

#include <string>
#include <iostream>
using namespace std;

struct Person {
	string name;
	string address;

	Person() = default;

	Person(const string &nameParam): name(nameParam){};
	Person(const string &nameParam, const string &addressParam): 
		name(nameParam), address(addressParam) {};
	Person(istream &is);

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

Person::Person(istream &is) {
	read(is, *this);
}


#endif