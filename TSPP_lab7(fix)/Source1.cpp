#include <iostream>
#include <list>
#include <iterator>
#include "User.h"
#include "Studient.h"
#include "Teacher.h"
#include "Methodist.h"
#include "DeansOffice.h"
#include "Mark.h"

using namespace std;

void Student_Menu(list<Mark> allMarks)
{
	while (1)
	{
		system("cls");
		cout << "�������� ��������" << endl;
		cout << "1. �������� ������ ��������" << endl;
		cout << "2. �����" << endl;
		int key;
		Studient studientUser;
		cin >> key;
		switch (key)
		{
		case 1:
			studientUser.Show_specific_studient_marks(allMarks);
			break;
		case 2:
			return;
		default:
			cout << "�������� �������� �� 1 �� 2" << endl;
		}
	}
}


list<Mark> Teacher_Menu(list<Mark> allMarks)
{
	while (1)
	{
		system("cls");
		cout << "�������� ��������" << endl;
		cout << "1. �������� ������ �� ��������" << endl;
		cout << "2. ���������� ������" << endl;
		cout << "3. �������� ������" << endl;
		cout << "4. �����" << endl;
		int key;
		Teacher teacherUser;
		cin >> key;
		switch (key)
		{
		case 1:
			teacherUser.Show_subjects_marks(allMarks);
			system("pause");
			break;
		case 2:
			allMarks = teacherUser.Enter_mark(allMarks);
			system("pause");
			break;
		case 3:
			allMarks = teacherUser.Delete_mark(allMarks);
			system("pause");
			break;
		case 4:
			return allMarks;
		default:
			cout << "�������� �������� �� 1 �� 4" << endl;
		}
	}
}

void Methodist_Menu(list<Mark> allMarks)
{
	while (1)
	{
		system("cls");
		cout << "�������� ��������" << endl;
		cout << "1. �������� ������ ���������� � ���������" << endl;
		cout << "2. �������� ������ ������������" << endl;
		cout << "3. ����� ������ ���� ���������" << endl;
		cout << "4. �����" << endl;
		int key;
		Methodist methodistUser;
		cin >> key;
		switch (key)
		{
		case 1:
			methodistUser.Exams_pass_list(allMarks);
			system("pause");
			break;
		case 2:
			methodistUser.Create_Perfomance_List(allMarks);
			system("pause");
			break;
		case 3:
			methodistUser.Show_All_Studients_Marks(allMarks);
			system("pause");
			break;
		case 4:
			return;
		default:
			cout << "�������� �������� �� 1 �� 4" << endl;
		}
	}
}

void DeansOffice_Menu(list<Mark> allMarks)
{
	while (1)
	{
		system("cls");
		cout << "�������� ��������" << endl;
		cout << "1. ����� ������ ���� ���������" << endl;
		cout << "2. ����� ������ ������" << endl;
		cout << "3. ����� ������ ������" << endl;
		cout << "4. �����" << endl;
		int key;
		DeansOffice deansofficeUser;
		cin >> key;
		switch (key)
		{
		case 1:
			deansofficeUser.Show_All_Studients_Marks(allMarks);
			system("pause");
			break;
		case 2:
			deansofficeUser.Show_Group_Marks(allMarks);
			system("pause");
			break;
		case 3:
			deansofficeUser.Show_Flow_Marks(allMarks);
			system("pause");
			break;
		case 4:
			return;
		default:
			cout << "�������� �������� �� 1 �� 4" << endl;
		}
	}
}

int main()
{
	setlocale(0, "");
	int key;
	string login;
	string password;
	list<Mark> allMarks;
	while (1)
	{
		system("cls");
		cout << "�������� ������������" << endl;
		cout << "1. �������" << endl;
		cout << "2. �������������" << endl;
		cout << "3. ��������" << endl;
		cout << "4. �������" << endl;
		cout << "5. �����" << endl;
		cin >> key;
		switch (key) 
		{
			case 1:
			{
				system("cls");
				cout << "������� ����� � ������" << endl;
				User userStudient;
				cin >> login;
				cin >> password;
				
				if (userStudient.Authorization(login, password))
				{
					cout << "����� ����������!" << endl;
					system("pause");
					Student_Menu(allMarks);
					break;
				}
				else
					break;
			}
			case 2:
			{
				system("cls");
				cout << "������� ����� � ������" << endl;
				User userTeacher;
				cin >> login;
				cin >> password;
				
				if (userTeacher.Authorization(login, password) == true)
				{
					cout << "����� ����������!" << endl;
					allMarks = Teacher_Menu(allMarks);
					break;	
				}
				else
					break;
			}
			case 3:
			{
				system("cls");
				cout << "������� ����� � ������" << endl;
				User userMethodist;
				cin >> login;
				cin >> password;
				if (userMethodist.Authorization(login, password))
				{
					cout << "����� ����������!" << endl;
					Methodist_Menu(allMarks);
					break;
				}
				else
					break;
			}
			case 4:
			{
				system("cls");
				cout << "������� ����� � ������" << endl;
				User userDecansOffice;
				cin >> login;
				cin >> password;
				if (userDecansOffice.Authorization(login, password))
				{
					cout << "����� ����������!" << endl;
					DeansOffice_Menu(allMarks);
					break;
				}
				else
					break;
			}
			case 5:
				system("pause");
				return 0;
			default:
				cout << "������� ����� �� 1 �� 5" << endl;
				break;
		}
	}
}