#include "Item.h"

Item::Item()
{
	itemName = "";
	itemID = "";
	itemDescription = "";
	itemPrice = 0.00;
	itemStock = 0;
}

Item::Item(const string& newItemID, const string& newItemName, const string& newItemDescription, double newItemPrice, int newItemStock)
{
	itemName = newItemName;
	itemID = newItemID;
	itemDescription = newItemDescription;
	itemPrice = newItemPrice;
	itemStock = newItemStock;
}

void Item::itemSetItem(const string& newItemID, const string& newItemName, const string& newItemDescription, double newItemPrice, int newItemStock)
{
	itemName = newItemName;
	itemID = newItemID;
	itemDescription = newItemDescription;
	itemPrice = newItemPrice;
	itemStock = newItemStock;
}

void Item::addNewItem(istream& ins)
{
	cout << "Name: ";
	getline(ins, itemName);

	cout << "Enter Id Number ";
	getline(ins, itemID);

	cout << "Enter Item Description";
	getline(ins, itemDescription);

	cout << "Enter cost: ";
	ins >> itemPrice;

	cout << "Enter base stock ";
	ins >> itemStock;

}

string Item::getitemName() const
{
	return itemName;
}

void Item::setItemName(const string& newItemName)
{
	itemName = newItemName;
}

string Item::getItemID() const
{
	return itemID;
}

string Item::getItemDescription() const
{
	return itemDescription;
}

void Item::setItemDescription(const string& newItemDescription)
{
	itemDescription = newItemDescription;
}

double Item::getItemPrice() const
{
	return itemPrice;
}

void Item::setItemPrice(double newItemPrice)
{
	itemPrice = newItemPrice;
}

int Item::getItemStock() const
{
	return itemStock;
}

void Item::setItemStock(int newItemStock)
{
	itemStock = newItemStock;
}

void Item::printItemInfo()
{
	cout << itemName << endl << endl;
	cout << itemDescription << endl << endl;
	cout << "Price: " << itemPrice << "  In Stock: " << itemStock << endl;

}

istream& operator>>(istream& ins, Item& tempItem)
{
	tempItem.addNewItem(ins);
	return ins;
}
