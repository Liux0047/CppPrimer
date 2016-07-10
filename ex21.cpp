/*
Write a lambda that captures a local int variable and decrements that variable until it reaches 0. 
Once the variable is 0 additional calls should no longer decrement the variable. 
The lambda should return a bool that indicates whether the captured variable is 0.
*/

#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main(int argc, char const *argv[])
{
	int i {5};
	auto dec = [&i]() {
		return --i == 0;
	};
	while (!dec()){
		cout << i << " ";
	}
	return 0;
}