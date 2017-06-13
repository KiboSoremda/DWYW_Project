#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	string str = "And, when you want something, all the universe conspires in helping you to achieve it."; //Quote from Paulo Coelho's 'The Alchemist'.

	/*
	Substring functions differently in C++ compared to Java.
	endIndex = endIndex - beginIndex
	substr(beginIndex, endIndex);
	*/

	string str2 = str.substr(10, 18); 
	cout << str2 << endl; //Prints "you want something"

	size_t findIndex = str.find(" helping");  //value of .find() is always in size_t
	str2 += str.substr(findIndex);
	cout << str2 << endl; //Prints "you want something helping you achieve it."


	return 0;


}
