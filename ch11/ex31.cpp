/*
Write a program that defines a multimap of authors and their works. 
Use find to find an element in the multimap and erase that element. 
Be sure your program works correctly if the element you look for is not in the map.
*/

#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main(int argc, char const *argv[])
{
	multimap<string, string> works = {{"A", "ab"}, {"B", "bc"}, {"A", "abc"}};
	string search_item {"C"};
	auto it = works.find(search_item);

	if (it != works.end()){
		works.erase(it);
	}

	for (auto const& w : works){
		cout << w.first << " " << w.second << endl;
	}

	return 0;
}