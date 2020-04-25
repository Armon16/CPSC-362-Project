#include <iostream>
#include <string>

#include "displayMenu.h"
#include "processChoice.h"

using namespace std;

int main()
{
	int userLevel = 2;
	int choice = 0;

	while (choice != -1)
	{
		displayMenu(userLevel);

		cout << "\nEnter your choice: ";
		cin >> choice;
		cout << endl;
		processChoice(choice, userLevel);

		cout << endl;
		system("pause");
		system("cls");
	}

	system("cls");
	return 0;
}