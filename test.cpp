#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	
	vector<int> v = {1,2,3};

	for (auto ele = v.begin(); ele != v.end(); ele++){
		cout << *ele << " ";
	}	

	cout << endl;
	auto wv = v.begin();
	while (wv != v.end()){
		cout << *wv++ << " ";
	}
	cout << endl;

	int a[2] = {1,2};
	auto ab = begin(a);
	while (ab != end(a)){
		cout << *ab++ << " ";
	}
}