#include <iostream>
#include <string>

#include "displayMenu.h"
#include "processChoice.h"
#include "ItemDatabase.h"
#include "Item.h"
#include "InputHandler.h"

using namespace std;

int main()
{
	static int userLevel = 0;
	int choice = 0;
	ItemDatabase Database;
	readItemData(Database);

	while (choice != -1)
	{
		displayMenu(userLevel);

		cout << "\nEnter your choice: ";
		cin >> choice;
		cout << endl;
		processChoice(choice, userLevel, Database);

		cout << endl;
		system("pause");
		system("cls");
	}

	system("cls");
	return 0;
}
