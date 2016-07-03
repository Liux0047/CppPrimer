#include <iostream>
#include <string>

using namespace std;

int main() {
	
	const int i = 5;
	const int &a = i;	
	int nc = i;

	const int* ip = &i;
	// int* p = &i;
}