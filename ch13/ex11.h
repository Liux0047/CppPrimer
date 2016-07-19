/*
Add a destructor to your HasPtr class from the previous exercises.
*/

#ifndef CH13_EX11_H
#define CH13_EX11_H

#include <string>
using std::string;

class HasPtr {
public:
	HasPtr(const string &s = string()): ps(new string(s)), i(0) { }
	HasPtr(HasPtr &hp) : ps (new string(*hp.ps)), i (hp.i){ }
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

#endif