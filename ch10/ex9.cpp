/*
Implement your own version of elimDups. 
Test your program by printing the vector after you read the input, after the call to unique, 
and after the call to erase.
*/

#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<string> words = {"the","quick","red","fox","jumps","over","the","slow","red","turtle"};
	sort(words.begin(), words.end());
	auto end_word = unique(words.begin(), words.end());
	words.erase(end_word, words.end());

	for (auto s : words) {
		cout << s << " ";
	}
	cout << endl;

	return 0;
}