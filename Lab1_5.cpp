#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

struct student {
	string Name = "-", Surname = "-", Group = "-";
	int Curse = 0, TicketNum = 0;
} StudentList[5], StudentText; // ������ ��������� � �������� ������

bool stopper = false;
int choose;

int main() {

	SetConsoleCP(1251);               //����������� ��������� 
	SetConsoleOutputCP(1251);         //��� ���������� � ������ 

	for (int i = 0; i < 5; i++) { // ���� ����� ��������� (���������� ������� ��������� ���������) (��������� ��������� ������)

		cout << "������� ���: ";
		cin >> StudentList[i].Name;
		cout << "������� �������: ";
		cin >> StudentList[i].Surname;
		cout << "������� ������: ";
		cin >> StudentList[i].Group;
		cout << "������� ����: ";
		cin >> StudentList[i].Curse;
		cout << "������� ����� ������������� ������: ";
		cin >> StudentList[i].TicketNum;
		cout << endl;

	}
	//��������� ��������� StudentText
	cout << "������� �������� ������: " << endl;
	cout << "������� ���: ";
	cin >> StudentText.Name;
	cout << "������� �������: ";
	cin >> StudentText.Surname;
	cout << "������� ������: ";
	cin >> StudentText.Group;
	cout << "������� ����: ";
	cin >> StudentText.Curse;
	cout << "������� ����� ������������� ������: ";
	cin >> StudentText.TicketNum;
	cout << endl;

	for (int i = 0; i < 5; i++) {

		if (StudentText.Name == StudentList[i].Name) { stopper = true; }
		if (StudentText.Surname == StudentList[i].Surname) { stopper = true; }
		if (StudentText.Group == StudentList[i].Group) { stopper = true; }
		if (StudentText.Curse == StudentList[i].Curse) { stopper = true; }
		if (StudentText.TicketNum == StudentList[i].TicketNum) { stopper = true; }
		if (stopper == true) { cout << StudentList[i].Name << " " << StudentList[i].Surname << " " << StudentList[i].Group << " " << StudentList[i].Curse << " " << StudentList[i].TicketNum << endl; }
		stopper = false;
	}

	return 0;
}
