/*
Rewrite the program to count words of size 6 or less using functions in place of the lambdas.
*/

#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <functional>

using namespace std;
using namespace std::placeholders;

bool isShorter(const string &s, size_t len) {
	return s.size() < len;
}

int countWords(vector<string> &words, size_t len) {
	count_if(words.begin(), words.end(), bind(isShorter,_1,len));
}

int main(int argc, char const *argv[])
{
	vector<string> words = {"the","quick","red","fox","jumps","over","the","slow","red","turtle"};	
	size_t len = 5;
	cout << countWords(words, len) << endl;
	return 0;
}
