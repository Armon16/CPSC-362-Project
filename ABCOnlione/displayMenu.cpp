#include <iostream>

using namespace std;

void displayAdminMenu();
void displayGuestMenu();
void displayUserMenu();

void displayMenu(int userLevel)
{
	if (userLevel == 0)
		displayAdminMenu();
	else if (userLevel == 1)
		displayUserMenu();
	else
		displayGuestMenu();
}

void displayAdminMenu()
{
	cout << "\n*** MAIN ADMIN MENU ***\n";
	cout << "\nSelect one of the following:\n\n";
	cout << "    1: Search for an item" << endl;
	cout << "    2: View Cart" << endl;
	cout << "    3: View Orders" << endl;
	cout << "    3: Edit Payment" << endl;
	cout << "    3: Edit Address" << endl;
	cout << "    3: Checkout" << endl;
	cout << "    3: Modify Inventory" << endl;
	cout << "    3: View Accounts" << endl;
	cout << "    6: Sign Out" << endl;
	cout << "    -1: Exit" << endl;
}

void displayGuestMenu()
{
	cout << "\n*** MAIN GUEST MENU ***\n";
	cout << "\nSelect one of the following:\n\n";
	cout << "    1: Search for an item" << endl;
	cout << "    2: View Cart" << endl;
	cout << "    6: Sign In" << endl;
	cout << "   -1: Exit "<< endl;
}

void displayUserMenu()
{
	cout << "\n*** MAIN USER MENU ***\n";
	cout << "\nSelect one of the following:\n\n";
	cout << "    1: Search for an item" << endl;
	cout << "    2: View Cart" << endl;
	cout << "    3: View Orders" << endl;
	cout << "    3: Edit Payment" << endl;
	cout << "    3: Edit Address" << endl;
	cout << "    3: Checkout" << endl;
	cout << "    6: Sign Out" << endl;
	cout << "    -1: Exit" << endl;
}