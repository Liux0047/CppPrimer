/*
Revise your program from the previous exercise to use a try block to catch the exception.
The catch clause should print a message to the user and ask them to supply a new number and 
repeat the code inside the try.
*/

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

using namespace std;

int main() {
	int a, b;

	while (true){
		try {
			cout << "Enter 2 numbers: ";
			cin >> a >> b;		
			if (b == 0) {
				throw runtime_error("b is zero");
			}
			cout << "result is " << a/b << endl;
			break;
		} catch (runtime_error err) {
			cout << "Error: " << err.what() << endl
			<< "Try again? [Y/N]: ";
			char tryAgain;
			cin >> tryAgain;
			if (!cin || toupper(tryAgain) == 'N') {
				break;
			}
		}
	}

}