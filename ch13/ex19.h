/*
Does your Employee class need to define its own versions of the copy-control members? 
If so, why? If not, why not? 
Implement whatever copy-control members you think Employee needs.
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

	Employee(const Employee &e) = delete;
	Employee& operator=(const Employee &e) = delete;

private:
	string name;
	int id;

	static int incrementor;
};

int Employee::incrementor = 0;

#endif