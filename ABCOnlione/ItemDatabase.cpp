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

void ItemDatabase::printall() const
{
	for (int i = 0; i < used; i++)
		itemPtr[i].getitemName();
}

void ItemDatabase::editItemsAt(int index)
{

}

Item ItemDatabase::getItem(int index) const
{
	return itemPtr[index];
}

void ItemDatabase::make_bigger()
{
	Item* temp;
	temp = new Item[capacity * 2];
	for (int i = 0; i < used; i++)
		temp[i] = itemPtr[i];
	delete[] itemPtr;
	itemPtr = temp;
	capacity *= 2;
}
