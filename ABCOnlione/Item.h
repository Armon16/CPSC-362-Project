#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>
#include <fstream>

using namespace std;
class Item
{
public:
	Item();
	Item(const string& newItemID, const string& newItemName, const string& newItemDescription, double newItemPrice, int newItemStock);
	string getitemName() const;
	string getItemID() const;
	string getItemDescription() const;
	double getItemPrice()const;
	int getItemStock()const;
private:
	string itemName, itemID, itemDescription;
	double itemPrice;
	int itemStock;
};

#endif