#pragma once
#include <list>
#include "Mark.h"
#include "Studient.h"
#include "Subject.h"

using namespace std;

class DeansOffice
{
public:
	DeansOffice();
	~DeansOffice();

	void Show_All_Studients_Marks(list<Mark> allMarks);
	void Show_Group_Marks(list<Mark> allMarks);
	void Show_Flow_Marks(list<Mark> allMarks);
};

