/*
Update your Person class to hide its implementation.
*/

#ifndef CH7_EX_22
#define CH7_EX_22

#include <string>
#include <iostream>
using namespace std;

class Person {
		
	friend istream &read(istream &is, Person &p);
	friend ostream &print(ostream &os, const Person &p);

public:
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

private:
	string name;
	string address;
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