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
void Methodist::Create_Perfomance_List(list<Mark> allMarks)
{
	cout << "����� �� ������������ ������" << endl;
	return;
}
void Methodist::Show_All_Studients_Marks(list<Mark> allMarks) 
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