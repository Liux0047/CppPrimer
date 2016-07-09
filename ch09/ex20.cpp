/*
Write a program to copy elements from a list<int> into two deques. 
The even-valued elements should go into one deque and the odd ones into the other.
*/

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>

using namespace std;

int main(int argc, char const *argv[])
{
	list<int> li = {1,2,3,4,5,6};
	deque<int> dOdd, dEven;

	for (auto i : li){
		(i & 0x1 ? dOdd : dEven).push_back(i);
	}

	for (auto i : dOdd) {
		cout << i << " ";
	}
	cout << endl;

	for (auto i : dEven){
		cout << i << " ";
	}
	cout << endl;

	return 0;
}