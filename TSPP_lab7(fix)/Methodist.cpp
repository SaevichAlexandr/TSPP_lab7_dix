#include "Methodist.h"
#include <iostream>

using namespace std;

Methodist::Methodist()
{
}


Methodist::~Methodist()
{
}

void Methodist::Exams_pass_list(list<Mark> allMarks)
{
	list<Mark>::iterator it;
	for (it = allMarks.begin(); it != allMarks.end(); it++)
	{
		if ((*it).point > 2)
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
void Methodist::Create_Perfomance_List(list<Mark> allMarks)
{
	cout << "Отчет об успеваемости создан" << endl;
	return;
}
void Methodist::Show_All_Studients_Marks(list<Mark> allMarks) 
{
	list<Mark>::iterator it;
	for (it = allMarks.begin(); it != allMarks.end(); it++)
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