/*
Write a program that uses stable_sort and isShorter to 
sort a vector passed to your version of elimDups. 
Print the vector to verify that your program is correct.
*/

#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

bool isShorter(const string &s1, const string s2) {
	return s1.size() < s2.size();
}

void elimDups(vector<string> &words) {
	sort(words.begin(), words.end());
	auto end_word = unique(words.begin(), words.end());
	words.erase(end_word, words.end());
}

int main(int argc, char const *argv[])
{
	vector<string> words = {"the","quick","red","fox","jumps","over","the","slow","red","turtle"};
	elimDups(words);
	stable_sort(words.begin(), words.end(), isShorter);

	for (auto s : words) {
		cout << s << " ";
	}
	cout << endl;

	return 0;
}