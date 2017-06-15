#ifndef ITEM_H_
#define ITEM_H_

#include <string>

using namespace std;

class Item {

	protected:
		string item_name;
		double price;
	public:
		Item();
		Item(string s, double p);
		Item operator+ (const Item& item1);
		string getName();
		double getPrice();

};

#endif