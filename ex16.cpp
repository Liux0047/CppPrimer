/*
Write your own version of the biggies function using lambdas.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

void elimDups(vector<string> &words) {
	sort(words.begin(), words.end());
	auto end_word = unique(words.begin(), words.end());
	words.erase(end_word, words.end());
}

void biggies(vector<string> &words, vector<string>::size_type sz) {
	elimDups(words);
	stable_sort(words.begin(), words.end(), [](const string &s1, const string &s2) {
		return s1.size() < s2.size();
	});

	auto wc = find_if(words.begin(), words.end(), [sz](const string &s) {
		return s.size() >= sz;
	});

	for_each(wc, words.end(), [](const string &s) {
		cout << s << " ";
	});

}

int main(int argc, char const *argv[])
{
	vector<string> words = {"the","quick","red","fox","jumps","over","the","slow","red","turtle"};
	biggies(words, 5);
	return 0;
}