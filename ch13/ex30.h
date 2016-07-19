/*
Write and test a swap function for your valuelike version of HasPtr. 
Give your swap a print statement that notes when it is executed.
*/

#ifndef CH13_EX30_H
#define CH13_EX30_H

#include <string>
#include <iostream>
using std::string;

class HasPtr {
	friend void swap(HasPtr &lhs, HasPtr &rhs);
public:
	HasPtr(const string &s = string()): ps(new string(s)), i(0) { }
	HasPtr(const HasPtr &hp) : ps (new string(*hp.ps)), i (hp.i){ }
	HasPtr& operator=(const HasPtr &hp) {
		i = hp.i;
		delete ps;
		string *new_ps = new string(*hp.ps);
		ps = new_ps;
		return *this;
	}
	~HasPtr() {
		delete ps;
	}
private:
	string *ps;
	int    i;
};

void swap(HasPtr &lhs, HasPtr &rhs) {
	std::cout << "swapping " << lhs.i << " with " << rhs.i << std::endl;
	using std::swap;
	swap(lhs.i, rhs.i);
	swap(lhs.ps, rhs.ps);
}

#endif