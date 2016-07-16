/*
Define your own versions of the TextQuery and QueryResult classes and 
execute the runQueries function from § 12.3.1 (p. 486).
*/

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <sstream>
#include "ex30.h"

using namespace std;

void runQueries(ifstream &infile)
{
    // infile is an ifstream that is the file we want to query
    TextQuery tq(infile);  //  store the file and build the query map
    // iterate with the user: prompt for a word to find and print results
    string s;
    cout << "enter word to look for, or q to quit: ";    
    while (cin >>s && s != "q") {
        // stop if we hit end-of-file on the input or if a 'q' is entered
        // run the query and print the results
    	print(cout, tq.query(s)) << endl;
    	cout << "enter word to look for, or q to quit: ";
    }
}

int main(int argc, char const *argv[])
{
	ifstream ifs("text.dat");
	runQueries(ifs);
	return 0;
}