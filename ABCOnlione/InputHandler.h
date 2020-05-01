/**
a) Module name: Input Handler
b) Date of the code: 4/19/19
c) Programmer's name: Vinh Nghi Nguyen
d) Reads file and forms fills the ItemDatabase class with items.
e)  n/a
f)  n/a
*/
#include "Item.h"
#include "ItemDatabase.h"

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

const char ITEM_LIST[] = "item_data.txt";

void createBookList(ifstream& infile, ItemDatabase& Database)
{


	Item tempItem;
	string itemName, itemID, itemDescription;
	double itemPrice;
	int itemStock;

	infile >> itemID;

	while (itemID != "END")
	{
		if (infile.peek() == ' ')
			infile.ignore();
		getline(infile, itemName);
		getline(infile, itemDescription);


		infile >> itemPrice >> itemStock;

		tempItem.itemSetItem(itemID, itemName, itemDescription, itemPrice, itemStock);
		Database.addItem(tempItem);

		infile >> itemID;
	}
}

void readItemData(ItemDatabase& Database)
{
	ifstream infile;

	infile.open(ITEM_LIST);

	if (!infile)
	{
		cerr << "Input file does not exist." << endl;
		system("Pause");
		exit(1);
	}

	createBookList(infile, Database);

	infile.close();
}
