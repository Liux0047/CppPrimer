/*
Add a destructor to your HasPtr class from the previous exercises.
*/

#ifndef CH13_EX27_H
#define CH13_EX27_H

#include <string>
using std::string;
using std::size_t;

class HasPtr {
public:
	HasPtr(const string &s = string()): ps(new string(s)), i(0), use(new size_t(1)) { }
	HasPtr(HasPtr &hp) : ps (hp.ps), i (hp.i), use(hp.use){
		++*use;
	}
	HasPtr& operator=(const HasPtr &hp) {
		++*hp.use;
		if (--*use == 0) {
			delete ps;
			delete use;
		}
		i = hp.i;
		ps = hp.ps;
		use = hp.use;
		return *this;
	}
	~HasPtr() {
		if (--*use == 0) {
			delete ps;
			delete use;
		}

	}
private:
	string *ps;
	int i;
	size_t *use;
};

#endif