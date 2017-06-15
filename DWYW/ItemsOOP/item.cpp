#include <string>
#include "Item.h"

using namespace std;

Item::Item() {}

Item::Item(string s, double p) : item_name(s) {	
	price = p;	
}

Item Item::operator+ (const Item& item1) {
	Item temp;
	temp.item_name = item1.item_name + " " + item_name;
	temp.price = item1.price + price;
	return temp;
}

string Item::getName() {
	return item_name;
}
double Item::getPrice() {
	return price;
}