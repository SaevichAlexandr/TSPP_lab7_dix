#pragma once
#include <list>
#include "Mark.h"

using namespace std;

class Subject
{
public:
	string subjectsName;
	list<Mark> subjectsMarks;

	Subject();
	~Subject();
};

