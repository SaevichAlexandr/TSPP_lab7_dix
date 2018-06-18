#include "Teacher.h"
#include <iostream>
#include "Mark.h"

using namespace std;

Teacher::Teacher()
{
}


Teacher::~Teacher()
{
}

void Teacher::Show_subjects_marks(list<Mark> allMarks)
{
	list<Mark>::iterator it;
	string currentSubject;
	cout << "Введите название предмета" << endl;
	cin >> currentSubject;
	for (it = allMarks.begin(); it != allMarks.end(); it++)
	{
		if ((*it).subjectsName == currentSubject)
		{
			cout << "Дата: " <<(*it).date << endl;
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


list<Mark> Teacher::Enter_mark(list<Mark> allMarks)
{
	Mark enteredMark;
	cout << "Ввeдите дату" << endl;
	cin >> enteredMark.date;
	cout << "Введите оценку" << endl;
	cin >> enteredMark.point;
	cout << "Ввeдите ФИО студента" << endl;
	cin >> enteredMark.studientsFIO;
	cout << "Ввeдите название предмета" << endl;
	cin >> enteredMark.subjectsName;
	cout << "Ввeдите ФИО преподавателя" << endl;
	cin >> enteredMark.teachersFIO;
	cout << "Ввeдите название группы" << endl;
	cin >> enteredMark.groupName;
	cout << "Ввeдите название потока" << endl;
	cin >> enteredMark.flowName;

	allMarks.push_front(enteredMark);
	return allMarks;
}


list<Mark> Teacher::Delete_mark(list<Mark> allMarks)
{
	allMarks.pop_front();
	return allMarks;
}
