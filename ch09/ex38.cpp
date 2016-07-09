/*
Write a program to explore how vectors grow in the library you use.
*/

#include <vector>
#include <iostream>

using namespace std;

void output(vector<int> &vec) {
	cout << "size: " << vec.size() << " capacity: " << vec.capacity() << endl;
}

int main(int argc, char const *argv[])
{
	vector<int> vec;
	output(vec);

	for (int i = 0; i<24; ++i){
		vec.push_back(i);
	}
	output(vec);


	for (int i = vec.size(); i<vec.capacity(); ++i){
		vec.push_back(i);
	}
	output(vec);

	vec.push_back(0);
	output(vec);

	vec.shrink_to_fit();
	output(vec);
	
	return 0;
}