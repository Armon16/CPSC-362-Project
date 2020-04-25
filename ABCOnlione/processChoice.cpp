#include "processChoice.h"

#include <iostream>
#include <string>

using namespace std;

void processGuestChoice(int choice);
void processUserChoice(int choice);
void processAdminChoice(int choice);

void processChoice(int choice, int userLevel)
{
	if (userLevel == 0)
		processAdminChoice(choice);
	else if (userLevel == 1)
		processUserChoice(choice);
	else
		processGuestChoice(choice);
}

void processGuestChoice(int choice)
{
	switch (choice)
	{
	case 1:
		cout << "Search an item" << endl;

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

void processUserChoice(int choice)
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


void processAdminChoice(int choice)
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
