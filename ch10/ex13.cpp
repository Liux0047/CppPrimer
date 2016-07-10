/*
The library defines an algorithm named partition that takes a predicate and partitions the container so that values for which the predicate is true appear in the first part and those for which the predicate is false appear in the second part. 
The algorithm returns an iterator just past the last element for which the predicate returned true. 
Write a function that takes a string and returns a bool indicating whether the string has five characters or more. 
Use that function to partition words. 
Print the elements that have five or more characters.
*/

#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

bool isLeft (const string &s1) {
	return s1.size() >= 5 ;
}

int main(int argc, char const *argv[])
{
	vector<string> words = {"the","quick","red","fox","jumps","over","the","slow","red","turtle"};	
	partition(words.begin(), words.end(), isLeft);

	for (auto s : words) {
		cout << s << " ";
	}
	return 0;
}