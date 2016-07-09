/*
Using the following definition of ia, copy ia into a vector and into a list. 
Use the single-iterator form of erase to remove the elements with odd values from your list 
and the even values from your vector.
*/
#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	vector<int> vec (begin(ia), end(ia));
	list<int> li (begin(ia), end(ia));

	for (auto it = vec.begin(); it != vec.end();){
		if ((*it) % 2 == 0) {
			it = vec.erase(it);
		} else {
			++it;
		}
	}

	for (auto it = li.begin(); it != li.end();){
		if ((*it) % 2 == 1) {
			it = li.erase(it);
		} else {
			++it;
		}
	}

	for (auto i : vec) {
		cout << i << " ";
	}
	cout << endl;

	for (auto i : li) {
		cout << i << " ";
	}
	return 0;
}