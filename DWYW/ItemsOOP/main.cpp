#include <iostream>
#include <string>

#include "Item.h"

using namespace std;

int main() {
	Item item1("Pepperoni Pizza", 1.49);
	Item item2("Ramune", 0.99);
	Item item3;

	item3 = item1 + item2;
	cout << "item1 name: " << item1.getName() << endl;
	cout << "item2 name: " << item2.getName() << endl;
	cout << "item3 name: " << item3.getName() << endl;

	cout << "item1 price: " << item1.getPrice() << endl;
	cout << "item2 price: " << item2.getPrice() << endl;
	cout << "item3 price: " << item3.getPrice() << endl;

	return 0;
}