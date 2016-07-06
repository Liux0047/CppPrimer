/*
Define your own versions of Screen and Window_mgr 
in which clear is a member of Window_mgr and a friend of Screen.
*/

#ifndef CH7_EX_32
#define CH7_EX_32

#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Screen;

class Window_mgr {
public:
	using ScreenIndex = vector<Screen>::size_type;
	void clear(ScreenIndex);
private:
	vector<Screen> screens;
};


class Screen{
	friend void Window_mgr::clear(ScreenIndex);
public:
	using pos = string::size_type;
	Screen() = default;
	Screen(pos ht, pos wd): 
		height(ht), width(wd), contents(ht*wd, ' ') {}
	Screen(pos ht, pos wd, char c): 
		height(ht), width(wd), contents(ht*wd, c) {}

	char get() const {
		return contents[cursor];
	}

	char get(pos r, pos c) const;

	Screen &move(pos r, pos c);
	Screen &set(char c);
	Screen &set(pos row, pos col, char c);

	Screen &display(ostream &os) {
		doDisplay(os);
		return *this;
	}
	const Screen &display(ostream &os) const {
		doDisplay(os);
		return *this;
	}

private:
	pos cursor {0};
	pos height {0}, width {0};
	string contents;
	void doDisplay(ostream &os) const {
		os << contents;
	}
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

inline
Screen &Screen::set(char c) {
	contents[cursor] = c;
	return *this;
}

inline 
Screen &Screen::set(pos row, pos col, char c) {
	contents[row*width + col] = c;
	return *this;
}

inline
void Window_mgr::clear(ScreenIndex index){
	if (index >= screens.size()){
		return;
	}
	Screen &s = screens[index];
	s.contents = string(s.height * s.width, ' ');
}

#endif