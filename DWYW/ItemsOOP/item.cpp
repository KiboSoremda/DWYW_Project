#include <string>
#include "Item.h"

using namespace std;

Item::Item() {}

Item::Item(string s, double p) : item_name(s) {	
	price = p;	
}

Item Item::operator+ (const Item& i) {
	Item temp;
	temp.item_name = item_name + " " + i.item_name;
	temp.price = i.price + price;
	return temp;
}

string Item::getName() {
	return item_name;
}
double Item::getPrice() {
	return price;
}
