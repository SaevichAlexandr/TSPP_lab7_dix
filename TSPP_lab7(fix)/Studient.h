#pragma once
#include <list>
#include "Mark.h"

using namespace std;

class Studient
{
public:
	string group;
	string fio;
	bool gender;
	string groupCode;
	string flowName;

	Studient();
	~Studient();

	void Show_specific_studient_marks(list<Mark> allMarks);

};