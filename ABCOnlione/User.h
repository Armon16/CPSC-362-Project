/**
a) Module name: Item Database
b) Date of the code: 4/19/19
c) Programmer's name: Armin Rahimi
d) Displays a menu based on user's level
e)  n/a
f)  n/a
*/
#ifndef USER_H
#define USER_H

#include <string>
#include <fstream>

using namespace std;

class User {
private:
	string username;
	string password;
	string email;
	int user_level;
public:
	User()
	{
		username = "";
		password = "";
		email = "";
		user_level = 2;
	}
	string createUser(string name, string pass, string mail, int level) {
		username = name;
		password = pass;
		email = mail;
		user_level = level;
	}
	string getUsername() {
		return username;
	}
	string getPassword() {
		return password;
	}
	string getEmail() {
		return email;
	}
	int getUser_level() {
		return user_level;
	}
};
#endif // !USER_H
