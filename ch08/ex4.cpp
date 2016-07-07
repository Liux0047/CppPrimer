/*
Write a function to open a file for input and read its contents into a vector of strings, 
storing each line as a separate element in the vector.
*/

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void func(const string &fileName, vector<string> &v) {
	ifstream input(fileName);
	string line;
	if (input) {
		while (getline(input, line)){
			v.push_back(line);			
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