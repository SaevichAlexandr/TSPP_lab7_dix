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
	cout << "������� ��� ��������" << endl;
	cin >> currentStudient;
	for (it = allMarks.begin(); it != allMarks.end(); it++)
	{
		if ((*it).studientsFIO == currentStudient)
		{
			cout << "����: " << (*it).date << endl;
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
