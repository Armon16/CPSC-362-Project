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
		cout << itemPtr[i].getitemName() << endl;
}

void ItemDatabase::editItemsAt(int index)
{


	cout << "What would you want to edit?" << endl;
	cout << " 1. Item Name" << endl;
	cout << " 2. Item Description" << endl;
	cout << " 3. Item Price" << endl;
	cout << " 4. Item Stock" << endl;
	cout << " Press 8 to exit" << endl;
	cout << " Enter your choice "<< endl;


	int choice, intEdit = 0;
	double doubleEdit = 0.0;
	string stringEdit;

	cout << "\nEnter your choice: ";
	cin >> choice;
	cout << endl;

	while (choice != 8)
	{
		switch (choice)
		{
		case 1:
			cout << "Enter new Title" << endl;
			cin.ignore(1, ' ');
			getline(cin, stringEdit);
			itemPtr[index].setItemName(stringEdit);

			break;

		case 2:
			cout << "Enter new Item Description" << endl;
			cin.ignore(1, ' ');
			getline(cin, stringEdit);
			itemPtr[index].setItemDescription(stringEdit);

			break;

		case 3:
			cout << "Enter new price" << endl;
			cin >> doubleEdit;
			itemPtr[index].setItemPrice(doubleEdit);

			break;
		case 4:
			cout << "Enter new Item Stock" << endl;
			cin >> intEdit;
			itemPtr[index].setItemStock(intEdit);

			break;

		case 8:
			break;

		default:
			cout << "Invalid Selection" << endl;
			while (cin.fail())
			{
				cout << "Please enter only numeric values. " << endl;
				cin.clear();
				cin.ignore(999, '\n');
			}
			break;
		}

		cout << endl;
		system("Pause");
		cout << endl;
		cout << "What would you want to edit?" << endl;
		cout << " 1. Item Name" << endl;
		cout << " 2. Item Description" << endl;
		cout << " 3. Item Price" << endl;
		cout << " 4. Item Stock" << endl;
		cout << " Press 8 to exit" << endl;
		cout << " Enter your choice " << endl;
		cin >> choice;
		cout << endl;
	}
}

Item ItemDatabase::getItem(int index) const
{
	return itemPtr[index];
}

void ItemDatabase::printItemList() const
{
	for (int i = 0; i < used; i++)
		cout << i + 1 << ". " << itemPtr[i].getitemName() << " " << itemPtr[i].getItemPrice()<< endl;
}

ItemDatabase::~ItemDatabase()
{
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
