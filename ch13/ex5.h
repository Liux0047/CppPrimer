/*
Given the following sketch of a class, write a copy constructor that copies all the members. 
Your constructor should dynamically allocate a new string (§ 12.1.2, p. 458) and copy the object to which ps points, 
rather than copying ps itself.
*/

#ifndef CH13_EX5_H
#define CH13_EX5_H

#include <string>


class HasPtr {
public:
	HasPtr(const std::string &s = std::string()): ps(new std::string(s)), i(0) { }
	HasPtr(HasPtr &HPtr) : ps (new std::string(*HPtr.ps)), i (HPtr.i){ }
private:
	std::string *ps;
	int    i;
};

#endif