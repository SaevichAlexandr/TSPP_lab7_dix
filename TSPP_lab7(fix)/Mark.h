#pragma once
#include <string>
using namespace std;

class Mark
{
public:
	int point;
	char date[10];
	string studientsFIO;
	char teachersFIO[30];
	string subjectsName;
	char flowName[20];
	char groupName[20];

	Mark();
	~Mark();
};

