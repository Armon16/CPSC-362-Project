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
	void setItemName(const string& newItemName);
	string getItemID() const;
	string getItemDescription() const;
	void setItemDescription(const string& newItemDescription);
	double getItemPrice()const;
	void setItemPrice(int newItemPrice);
	int getItemStock()const;
	void setItemStock(int newItemStock);
private:
	string itemName, itemID, itemDescription;
	double itemPrice;
	int itemStock;
};

#endif