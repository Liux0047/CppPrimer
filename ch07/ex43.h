/*
Assume we have a class named NoDefault that has a constructor that takes an int, 
but has no default constructor. 
Define a class C that has a member of type NoDefault. Define the default constructor for C.
*/


#ifndef CH7_EX_43
#define CH7_EX_43

#include <string>
#include <iostream>
using namespace std;

struct NoDefault{
	NoDefault(int a){};
};

struct C{
	C (): mem(0) {};
	NoDefault mem;
};
#endif