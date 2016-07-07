/*
Revise the program from the previous exercise to append its output to its given file. 
Run the program on the same output file at least twice to ensure that the data are preserved.
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
	// ofstream out("out.data");
	// for (string vs : v){
	// 	out << vs << endl;
	// }

	ofstream out_app("out.data", ofstream::app);
	for (string vs : v){
		out_app << vs << endl;
	}
	return 0;
}
