/*
Write your own version of the Screen class.
*/


#ifndef CH7_EX_23
#define CH7_EX_23

#include <string>
#include <iostream>
using namespace std;

class Screen{
public:
	using pos = string::size_type;
	Screen() = default;
	Screen(pos ht, pos wd, char c): 
		height(ht), width(wd), contents(ht*wd, c) {}

	char get() const {
		return contents[cursor];
	}

	char get(pos r, pos c) const;

	Screen &move(pos r, pos c);

private:
	pos cursor {0};
	pos height {0}, width {0};
	string contents;
};

inline 
char Screen::get(pos r, pos c) const {
	return contents[r*width + c];
}

inline
Screen &Screen::move(pos r, pos c) {
	cursor = r * width + c;
	return *this;
}

#endif