/*
Revise the program from the exercise in § 5.5.1 (p. 191) 
so that it looks only for duplicated words that start with an uppercase letter.
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string in, temp {};
	while (cin >> in) {
		if (in.size() && !isupper(in[0])){
			temp = in;
			continue;
		}
		if (in == temp) {
			cout << temp << " duplicated" << endl;
			break;
		} else {
			temp = in;
		}
	}

	if (!cin) {
		cout << "no duplication" << endl;
	} 
}