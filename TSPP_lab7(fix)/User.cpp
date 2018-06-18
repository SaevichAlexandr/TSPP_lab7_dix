#include "User.h"
#include <iostream>
using namespace std;

User::User()
{
}


User::~User()
{
}


bool User::Authorization(string login, string password)
{
	string loginCheck = "login";
	string passwordCheck = "password";
	cout << login;
	cout << password;
	if (login == loginCheck && password == passwordCheck)
	{
		return true;
	}
	else
		return false;
}