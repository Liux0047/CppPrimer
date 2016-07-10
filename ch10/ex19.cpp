/*
Rewrite the previous exercise to use stable_partition, 
which like stable_sort maintains the original element order in the paritioned sequence.
*/

#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<string> words = {"the","quick","red","fox","jumps","over","the","slow","red","turtle"};	
	decltype(words.size()) sz {5};
	auto longWord = stable_partition(words.begin(), words.end(), [sz](const string &s) {
		return s.size() < sz;
	});

	for (auto s : words) {
		cout << s << " ";
	}
	cout << endl;

	for_each (longWord, words.end(), [](const string &s) {
		cout << s << " ";
	});
	return 0;
}