/*
Use a stack to process parenthesized expressions. 
When you see an open parenthesis, note that it was seen. 
When you see a close parenthesis after an open parenthesis, pop elements down to and including the open parenthesis off the stack. 
push a value onto the stack to indicate that a parenthesized expression was replaced.
*/

#include <stack>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string s {"(45/((1+2)*3))"};
	stack<char> st;
	string sub {};
	for (auto sc : s) {
		if (sc == ')'){
			while (st.top() != '(') {
				sub.insert(sub.begin(), st.top());
				st.pop();
			}
			st.pop();
			cout << sub << endl;
			sub.clear();	// string stoi
		} else {			
			st.push(sc);
		}
	}

	return 0;
}