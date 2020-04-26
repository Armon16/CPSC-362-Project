#include "ItemDatabase.h"

ItemDatabase::ItemDatabase()
{
	used = 0;
	capacity = 5;
	itemPtr = new Item[capacity];
}

void ItemDatabase::addItem(const Item& newItem)
{
	if (used >= capacity)
	{
		cout << "Database is full, Doubling Size. . ." << endl;
		make_bigger();
	}

	itemPtr[used] = newItem;
	used++;
}
