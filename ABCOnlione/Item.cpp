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

void Item::setItemPrice(int newItemPrice)
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
