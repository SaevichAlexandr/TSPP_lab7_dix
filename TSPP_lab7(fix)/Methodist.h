#pragma once
#include <list>
#include "Mark.h"
#include "Studient.h"
#include "Subject.h"

using namespace std;

class Methodist
{
public:
	Methodist();
	~Methodist();

	void Exams_pass_list(list<Mark> allMarks);
	void Create_Perfomance_List(list<Mark> allMarks);
	void Show_All_Studients_Marks(list<Mark> allMarks);
};

