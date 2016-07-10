/*
The library defines an algorithm named count_if. 
Like find_if, this function takes a pair of iterators denoting an input range 
and a predicate that it applies to each element in the given range. 
count_if returns a count of how often the predicate is true. 
Use count_if to rewrite the portion of our program that counted 
how many words are greater than length 6.
*/

#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int countWords(vector<string> &words, size_t len) {
	count_if(words.begin(), words.end(), [len](const string &s) {
		return s.size() >= len;
	});
}

int main(int argc, char const *argv[])
{
	vector<string> words = {"the","quick","red","fox","jumps","over","the","slow","red","turtle"};	
	size_t len = 5;
	cout << countWords(words, len) << endl;
	return 0;
}
