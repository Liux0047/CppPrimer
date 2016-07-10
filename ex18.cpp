/*
Rewrite biggies to use partition instead of find_if. 
We described the partition algorithm in exercise 10.13 in § 10.3.1 (p. 387).
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
	auto longWord = partition(words.begin(), words.end(), [sz](const string &s) {
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