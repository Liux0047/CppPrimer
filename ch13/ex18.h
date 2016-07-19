/*
Define an Employee class that contains an employee name and a unique employee identifier. 
Give the class a default constructor and a constructor that takes a string representing the employee’s name. 
Each constructor should generate a unique ID by incrementing a static data member.
*/

#ifndef CH13_EX18_H
#define CH13_EX18_H

#include <string>
using std::string;

class Employee {
public:
	Employee(){
		id = ++incrementor;
	}
	Employee(const string &n) : name(n){
		id = ++incrementor;
	}

private:
	string name;
	int id;

	static int incrementor;
};

int Employee::incrementor = 0;

#endif