/**
a) Module name: Item Class
b) Date of the code: 4/19/19
c) Programmer's name: Vinh Nghi Nguyen
d) Item Class, Item contains an itemName, itemID, Price, and itemStock. Includes basic getters and setters. Can display information in various ways.
e)  n/a
f)  n/a
*/
#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>
#include <fstream>

using namespace std;
class Item
{
	friend istream& operator>>(istream& ins, Item& tempItem);
public:
	Item();
	Item(const string& newItemID, const string& newItemName, const string& newItemDescription, double newItemPrice, int newItemStock);
	void itemSetItem(const string& newItemID, const string& newItemName, const string& newItemDescription, double newItemPrice, int newItemStock);
	void addNewItem(istream& ins);
	string getitemName() const;
	void setItemName(const string& newItemName);
	string getItemID() const;
	string getItemDescription() const;
	void setItemDescription(const string& newItemDescription);
	double getItemPrice()const;
	void setItemPrice(double newItemPrice);
	int getItemStock()const;
	void setItemStock(int newItemStock);
	void printItemInfo();
private:
	string itemName, itemID, itemDescription;
	double itemPrice;
	int itemStock;
};

#endif