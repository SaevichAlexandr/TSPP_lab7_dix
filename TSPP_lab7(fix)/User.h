#pragma once
#include <string>
using namespace std;

class User
{
	
public:
	User();
	~User();

	bool Authorization(string login, string password);

};

