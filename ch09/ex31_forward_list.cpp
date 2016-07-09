/*
The program on page 354 to remove even-valued elements and duplicate odd ones will not work 
on a list or forward_list. 
Why? Revise the program so that it works on these types as well.
*/

#include <iostream>
#include <string>
#include <vector>
#include <forward_list>

using namespace std;

int main(int argc, char const *argv[])
{
	forward_list<int> vi = {0,1,2,3,4,5,6,7,8,9};
	auto iter = vi.begin(), pre = vi.before_begin(); 
	while (iter != vi.end()) {
		if (*iter % 2) {
        iter = vi.insert_after(pre, *iter);  // duplicate the current element
        pre = (++iter)++; // advance past this element and the one inserted before it
    } else
        iter = vi.erase_after(pre);          // remove even elements
        // don't advance the iterator; iter denotes the element after the one we erased
    }

    for (auto i : vi) {
    	cout << i << " ";
    }
    return 0;
}