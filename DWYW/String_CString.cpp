#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	string str1 = "moist "; //string
	char cstr1[20] = "juicy "; //c-string
	string str2 = "chocolate cake";
	char cstr2[20] = "steak";
	string str3;
	char cstr3[20];

	str3 = str1; //assign str1 to str3
	strcpy(cstr3, cstr1); //assign cstr1 to cstr3
	
	str3 += str2; //concatenates str2 to str3
	strcat(cstr3, cstr2); //concatenates cstr2 to cstr3

	cout << "str3 = " << str3 << endl; //prints str3
	cout << "str3.length() = " << str3.length() << endl; //prints length of str3
	cout << "cstr3 = " << cstr3 << endl; //prints cstr3
	cout << "strlen(cstr3) = " << strlen(cstr3) << endl; //prints length of cstr3

	return 0;
}
