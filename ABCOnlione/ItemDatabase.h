/**
a) Module name: Item Database
b) Date of the code: 4/19/19
c) Programmer's name: Armin Rahimi
d) Displays a menu based on user's level
e)  n/a
f)  n/a
*/
#ifndef ITEMDATABASE_H
#define ITEMDATABASE_H

#include "Item.h"
#include <iostream>

class ItemDatabase
{
public:
	ItemDatabase();
	void addItem(const Item& newItem);
	void printall() const;
	void editItemsAt(int index);
	Item getItem(int index) const;
	void printItemList() const;
	//void saveToFile(ofstream& out);
	~ItemDatabase();
private:
	void make_bigger();
	Item* itemPtr;
	int capacity, used;
};
#endif //
