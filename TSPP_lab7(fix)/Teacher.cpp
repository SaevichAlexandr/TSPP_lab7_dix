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
	cout << "������� �������� ��������" << endl;
	cin >> currentSubject;
	for (it = allMarks.begin(); it != allMarks.end(); it++)
	{
		if ((*it).subjectsName == currentSubject)
		{
			cout << "����: " <<(*it).date << endl;
			cout << "������: " << (*it).point << endl;
			cout << "��� ��������: " << (*it).studientsFIO << endl;
			cout << "�������� ��������: " << (*it).subjectsName << endl;
			cout << "��� �������������: " << (*it).teachersFIO << endl;
			cout << "�������� ������: " << (*it).groupName << endl;
			cout << "�������� ������: " << (*it).flowName << endl;
			cout << "===============================" << endl;
		}
	}
}


list<Mark> Teacher::Enter_mark(list<Mark> allMarks)
{
	Mark enteredMark;
	cout << "��e���� ����" << endl;
	cin >> enteredMark.date;
	cout << "������� ������" << endl;
	cin >> enteredMark.point;
	cout << "��e���� ��� ��������" << endl;
	cin >> enteredMark.studientsFIO;
	cout << "��e���� �������� ��������" << endl;
	cin >> enteredMark.subjectsName;
	cout << "��e���� ��� �������������" << endl;
	cin >> enteredMark.teachersFIO;
	cout << "��e���� �������� ������" << endl;
	cin >> enteredMark.groupName;
	cout << "��e���� �������� ������" << endl;
	cin >> enteredMark.flowName;

	allMarks.push_front(enteredMark);
	return allMarks;
}


list<Mark> Teacher::Delete_mark(list<Mark> allMarks)
{
	allMarks.pop_front();
	return allMarks;
}
