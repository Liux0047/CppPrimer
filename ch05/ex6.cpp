/*
Rewrite your grading program to use the conditional operator (§ 4.7, p. 151) 
in place of the if–else statement.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};	
	int grade {89};

	string lettergrade = grade < 60 ? scores[0] : scores[(grade-50)/10];
	lettergrade += (grade == 100 || grade < 60) ? "" : (grade % 10 > 7) ? "+" : (grade % 10 < 3) ? "-" : "";
	cout << lettergrade << endl;
}