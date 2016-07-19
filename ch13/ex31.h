/*
Give your class a < operator and define a vector of HasPtrs. 
Give that vector some elements and then sort the vector. Note when swap is called.
*/

#ifndef CH13_EX30_H
#define CH13_EX30_H

#include <string>
#include <iostream>
using std::string;

class HasPtr {
	friend void swap(HasPtr&, HasPtr&);
	friend bool operator<(const HasPtr &lhs, const HasPtr &rhs);
public:
	HasPtr(const string &s = string()): ps(new string(s)), i(0) { }
	HasPtr(int num, const string &s = string()): ps(new string(s)), i(num) { }
	HasPtr(const HasPtr &hp) : ps (new string(*hp.ps)), i (hp.i){ }
	HasPtr& operator=(HasPtr hp) {
		this->swap(hp);
		return *this;
	}

	void swap(HasPtr &rhs) {
		std::cout << "swapping " << i << " with " << rhs.i << std::endl;
		using std::swap;
		swap(i, rhs.i);
		swap(ps, rhs.ps);
	}

	int getI(){
		return i;
	}

	~HasPtr() {
		delete ps;
	}
private:
	string *ps;
	int    i;
};

void swap(HasPtr& lhs, HasPtr& rhs){
	lhs.swap(rhs);
}

bool operator<(const HasPtr &lhs, const HasPtr &rhs){
	return lhs.i < rhs.i;
}

#endif