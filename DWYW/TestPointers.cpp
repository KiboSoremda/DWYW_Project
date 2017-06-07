#include <iostream>

using namespace std;

int main() {
	int i = 68; 
	int * p_i;
	p_i = &i;

	//express values two ways
	cout << "Values: i = " << i;
	cout << ", *p_i = " << *p_i << endl;

	//express addresses two ways
	cout << "Addresses: &i = " << &i;
	cout << ", p_i = " << p_i << endl;

	//use pointers to change value
	*p_i += 1; // *p_i++ doesn't work, i = 68
	cout << "Now i = " << i;
	return 0;
}