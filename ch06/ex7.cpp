/*
Write a function that returns 0 when it is first called and then generates numbers in sequence each 
time it is called again.
*/

#include <iostream>
#include <string>

using namespace std;

int seq() {
	static int cnt = 0;
	return cnt++;
}

int main() {
	for (int i=0; i<10; ++i){
		cout << seq() << endl;
	}
}