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

void DeansOffice::Show_Group_Marks(list<Mark> allMarks)
{
	list<Mark>::iterator it;
	string currentGroup;
	cout << "������� �������� ������" << endl;
	cin >> currentGroup;
	for (it = allMarks.begin(); it != allMarks.end(); it++)
	{
		if ((*it).groupName == currentGroup)
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
void DeansOffice::Show_Flow_Marks(list<Mark> allMarks)
{
	list<Mark>::iterator it;
	string currentFlow;
	cout << "������� �������� ������" << endl;
	cin >> currentFlow;
	for (it = allMarks.begin(); it != allMarks.end(); it++)
	{
		if ((*it).flowName == currentFlow)
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