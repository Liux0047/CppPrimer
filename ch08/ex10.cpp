/*
Write a program to store each line from a file in a vector<string>. 
Now use an istringstream to read each element from the vector a word at a time.
*/

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	
	ifstream ifs("test.dat");
	std::vector<string> lines;
	string line;
	if (ifs) {
		while (getline(ifs, line)) {
			lines.push_back(line);		
		}
	} else {
		cerr << "No such file";
		return 0;
	}

	for (auto &l : lines) {
		istringstream record(l);
		string element;
		while (record >> element) {
			cout << element << endl;
		}
	}
	return 0;
}