/*
Write a program to read strings from standard input looking for duplicated words. 
The program should find places in the input where one word is followed immediately by itself. 
Keep track of the largest number of times a single repetition occurs and which word is repeated. 
Print the maximum number of duplicates, 
or else print a message saying that no word was repeated
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<string> instrings;
	string s;

	while (cin >> s) {
		instrings.push_back(s);
	}

	string longest {};
	int longestCnt {0}, consecutive {0};

	auto iterator = instrings.begin();
	string curStr = "", preStr = "";
	while (iterator != instrings.end()){
		curStr = *iterator;
		if (curStr == preStr){
			consecutive ++;
			if (consecutive > longestCnt){
				longestCnt = consecutive;
				longest = curStr;
			}
		} else {
			consecutive = 0;
		}
		preStr = curStr;
		++iterator;
	}

	if (longest.empty()){
		cout << "no repetition" << endl;
	} else {
		cout << longest << " repeated " << longestCnt << " time(s)" << endl;
		cout << longest << " occured " << longestCnt + 1 << " times" << endl;
	}

}