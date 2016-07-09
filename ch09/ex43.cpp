/*
Write a function that takes three strings, s, oldVal, and newVal. 
Using iterators, and the insert and erase functions replace all instances of oldVal 
that appear in s by newVal. Test your function by using it to replace common abbreviations, 
such as “tho” by “though” and “thru” by “through”.
*/

#include <string>
#include <vector>
#include <iostream>

using namespace std;

void rep(string &s, const string &oldVal, const string &newVal) {
	for (auto it = s.begin(); it != s.end() - oldVal.size(); it++){
		auto oit = oldVal.begin();
		if (*it == *oit) {
			bool isMatch = true;
			while (++oit != oldVal.end()){
				if (*oit != *(it + (oit - oldVal.begin()))){
					isMatch = false;
					break;
				}
			}
			if (isMatch) {
				s.replace(it, it + oldVal.size(), newVal);
				return;
			}
		}
	}
	
}

int main(int argc, char const *argv[])
{	
	string s {"thos thrus"};
	rep(s, "tho", "though");
	rep(s, "thru", "through");
	cout << s << endl;
	return 0;
}