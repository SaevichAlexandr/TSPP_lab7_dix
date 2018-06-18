#pragma once
#include <string>
#include <list>
#include "Mark.h"
#include "Subject.h"
#include "Studient.h"

using namespace std;

class Teacher
{
public:
	string teachersFIO;

	Teacher();
	~Teacher();

	void Show_subjects_marks(list<Mark> allMarks);
	list<Mark> Enter_mark(list<Mark> allMarks);
	list<Mark> Delete_mark(list<Mark> allMarks);
};

