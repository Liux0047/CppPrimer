/*
Write the assignment operator for the HasPtr class from exercise 13.5 in § 13.1.1 (p. 499). 
As with the copy constructor, your assignment operator should copy the object to which ps points.
*/

#ifndef CH13_EX8_H
#define CH13_EX8_H

#include <string>
using std::string;

class HasPtr {
public:
	HasPtr(const string &s = string()): ps(new string(s)), i(0) { }
	HasPtr(HasPtr &hp) : ps (new string(*hp.ps)), i (hp.i){ }
	HasPtr& operator=(const HasPtr &hp) {
		i = hp.i;
		delete ps;
		string new_ps = new string(*hp.ps);
		ps = new_ps;
		return *this;
	}
private:
	string *ps;
	int    i;
};

#endif