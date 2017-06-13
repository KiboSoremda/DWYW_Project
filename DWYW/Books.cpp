/*
Example of the usage of structures and unions.
*/


#include <iostream>

using namespace std;

struct book {

	char * book_name;
	char * book_author;
	union {
		int pages;
		int duration_in_seconds;
	};

} fav_Book; //creates struct fav_Book

struct profile {
	char * fName;
	char * lName;
	int age;
	book favorite_book;


};



int main() {

	fav_Book.book_name = "The Alchemist";
	fav_Book.book_author = "Paulo Coelho";
	fav_Book.pages = 208;

	profile me;
	me.fName = "Kibo";
	me.lName = "Soremda";
	me.favorite_book = fav_Book;
	
	cout << "Hi, my name is " << "Kibo" << endl;
	cout << "My favorite book is: " << fav_Book.book_name << " by " << fav_Book.book_author << endl; //so far
		

	return 0;
}

