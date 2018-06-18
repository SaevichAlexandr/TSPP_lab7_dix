#include "Studient.h"
#include <iostream>

using namespace std;

Studient::Studient()
{
}


Studient::~Studient()
{
}

void Studient::Show_specific_studient_marks(list<Mark> allMarks)
{
	list<Mark>::iterator it;
	string currentStudient;
	cout << "Введите ФИО студента" << endl;
	cin >> currentStudient;
	for (it = allMarks.begin(); it != allMarks.end(); it++)
	{
		if ((*it).studientsFIO == currentStudient)
		{
			cout << "Дата: " << (*it).date << endl;
			cout << "Оценка: " << (*it).point << endl;
			cout << "ФИО студента: " << (*it).studientsFIO << endl;
			cout << "Название предмета: " << (*it).subjectsName << endl;
			cout << "ФИО преподавателя: " << (*it).teachersFIO << endl;
			cout << "Название группы: " << (*it).groupName << endl;
			cout << "Название потока: " << (*it).flowName << endl;
			cout << "===============================" << endl;
		}
	}
}
