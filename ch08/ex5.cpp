/*
Rewrite the previous program to store each word in a separate element.
*/

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void func(const string &fileName, vector<string> &v) {
	ifstream input(fileName);
	string word;
	if (input) {
		while (input >> word){
			v.push_back(word);			
		}		
	}
}

int main(int argc, char const *argv[])
{
	
	std::vector<string> v;
	func("test.dat", v);
	for (string vs : v){
		cout << vs << endl;
	}
	return 0;
}