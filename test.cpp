#include <iostream>
#include <string>

using std::string;
using std::cout;

int main() {
	string s {"a"};
	auto len = s.size();

	cout << s << len;
}