#include "processChoice.h"

#include <iostream>
#include <string>

using namespace std;

void processGuestChoice(int choice, int userLevel, ItemDatabase& Database);
void processUserChoice(int choice, int userLevel, ItemDatabase& Database);
void processAdminChoice(int choice, int userLevel, ItemDatabase& Database);

void processChoice(int choice, int userLevel,ItemDatabase& Database)
{

	if (userLevel == 0)
		processAdminChoice(choice, userLevel, Database);
	else if (userLevel == 1)
		processUserChoice(choice, userLevel, Database);
	else
		processGuestChoice(choice, userLevel, Database);
}

/**
	cout << "    1: Search for an item" << endl;
	cout << "    2: View Cart" << endl;
	cout << "    6: Sign In" << endl;
	cout << "    7: Exit" << endl;
*/
void processGuestChoice(int choice, int userLevel, ItemDatabase& Database)
{
	int intChoice;
	switch (choice)
	{
	case 1:
		cout << "Search an item" << endl;
		Database.printItemList();
		cout << "Select an Item to view more info.  " << endl;
		cin >> intChoice;
		Database.getItem(intChoice-1).printItemInfo();

		break;
	case 2:

		break;

	case 6:
		userLevel--;

		break;

	case 4:

		break;

	case -1:

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
}

void processUserChoice(int choice, int userLevel, ItemDatabase& Database)
{
	while (choice != 7)
	{
		cout << "\nEnter your choice: ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case 1:

			break;
		case 2:

			break;

		case 3:

			break;

		case 4:

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


	}
}


void processAdminChoice(int choice, int userLevel, ItemDatabase& Database)
{
	while (choice != 7)
	{
		cout << "\nEnter your choice: ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case 1:

			break;
		case 2:

			break;

		case 3:

			break;

		case 4:

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

		choice = 0;


	}
}
