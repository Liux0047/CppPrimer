/*
Implement your own version of the word-transformation program.
*/

#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <utility>
#include <fstream>
#include <sstream>

using namespace std;

map<string, string> build_map(ifstream &ifs) {
	map<string, string> m;
	string key, value;
	while (ifs >> key && getline(ifs, value)) {
		if (value.size() > 1) {
			m[key] = value.substr(1);
		}

	}
	return m;
}

const string &transform(const string &s, const map<string, string> &m){
	auto find = m.find(s);
	if (find != m.cend()){
		return find->second;
	} else {
		return s;
	}
}

int main(int argc, char const *argv[])
{
	ifstream dict_in("dict.dat"), input("input.dat");
	auto trans_map = build_map(dict_in);
	string line;
	while (getline(input, line)){
		istringstream is(line);
		string word;
		bool first = true;
		while (is >> word) {
			if (first){
				first = false;
			} else {
				cout << " ";
			}
			cout << transform(word, trans_map);
		}
		cout << endl;
	}
	return 0;
}