#include <iostream>
#include <string>

using namespace std;

int main() {
	
	void *vp = nullptr;
	long long *ip = nullptr;

	cout << sizeof vp << endl;
	cout << sizeof *ip << endl;
}