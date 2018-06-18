#include "DeansOffice.h"
#include <iostream>
#include <list>
using namespace std;

DeansOffice::DeansOffice()
{
}


DeansOffice::~DeansOffice()
{
}

void DeansOffice::Show_All_Studients_Marks(list<Mark> allMarks)
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

void DeansOffice::Show_Group_Marks(list<Mark> allMarks)
{
	list<Mark>::iterator it;
	string currentGroup;
	cout << "Введите название группы" << endl;
	cin >> currentGroup;
	for (it = allMarks.begin(); it != allMarks.end(); it++)
	{
		if ((*it).groupName == currentGroup)
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
void DeansOffice::Show_Flow_Marks(list<Mark> allMarks)
{
	list<Mark>::iterator it;
	string currentFlow;
	cout << "Введите название группы" << endl;
	cin >> currentFlow;
	for (it = allMarks.begin(); it != allMarks.end(); it++)
	{
		if ((*it).flowName == currentFlow)
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