/*
Define a pair of classes X and Y, in which X has a pointer to Y, and Y has an object of type X.
*/
#ifndef CH7_EX_31
#define CH7_EX_31

class Y;
class X {
	Y *y = nullptr;
};

class Y {
	X x;
};

#endif