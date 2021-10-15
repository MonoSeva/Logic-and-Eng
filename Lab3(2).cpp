#include <iostream>
#include <ctime>
#include <malloc.h>
#include <conio.h>
#include <string.h>

using namespace std;

int n, ** Matrix1 = NULL;
int pogr = 0, dopo = 0;

int choose = 0, ** Matrix3 = NULL, usrentr = 0, usrentr2 = 0;

void Otogdestvlenie() {

	if (n == 0) { return; } //������ ������������ ������� 1 �� 1

	Matrix3 = (int**)calloc(n, 3);
	pogr = 0;

	for (int j = 0; j < n; j++) { Matrix3[j] = (int*)calloc(n, 3); }

	for (int i = 0; i < n; i++) {
		for (int m = 0; m < n; m++) { Matrix3[i][m] = 2; Matrix3[m][m] = 0; }
	}

	cout << "������� ������ ��������������� ������: \n";
	cout << "������: ";
	cin >> usrentr;
	cout << "������: ";
	cin >> usrentr2;
	usrentr--;
	usrentr2--;

	n++; //���������� n �� �����������(�������� �� 1) �������� �������

	for (int j = 0; j < n; j++) { Matrix1[usrentr][j] = Matrix1[usrentr2][j]; Matrix1[j][usrentr] = Matrix1[usrentr2][j]; } //���� ��� ��������� �������� � ������ �������

	for (int i = 0; i < n; i++) {
		for (int m = 0 + pogr; m < n; m++) {
			if (i == m || i == usrentr2 || m == usrentr2) {}
			else if (m > usrentr2 && i < usrentr2) { Matrix3[i][m - 1] = Matrix1[i][m]; Matrix3[m - 1][i] = Matrix1[m][i]; }
			else if (m > usrentr2 && i > usrentr2) { Matrix3[i - 1][m - 1] = Matrix1[i][m]; Matrix3[m - 1][i - 1] = Matrix1[i][m]; }
			else { Matrix3[i][m] = Matrix1[i][m]; Matrix3[m][i] = Matrix1[m][i]; }
		}
		pogr++;
	}
	cout << endl;

	n--; //��������� n ��� �������������� �� ������ ��������(�� n-1 � n-1)

	Matrix1 = (int**)calloc(n, 3);
	for (int j = 0; j < n; j++) { Matrix1[j] = (int*)calloc(n, 3); }

	for (int i = 0; i < n; i++) {
		for (int m = 0; m < n; m++) {
			Matrix1[i][m] = Matrix3[i][m];
			Matrix1[m][m] = 0;
			cout << Matrix1[i][m] << " ";
		}
		cout << endl;
	}
}

void Stuagivanie() {

	if (n == 0) { return; } //������ ������������ ������� 1 �� 1

	Matrix3 = (int**)calloc(n, 3);
	pogr = 0;

	for (int j = 0; j < n; j++) { Matrix3[j] = (int*)calloc(n, 3); }

	for (int i = 0; i < n; i++) {
		for (int m = 0; m < n; m++) { Matrix3[i][m] = 2; Matrix3[m][m] = 0; }
		cout << endl;
	}

	cout << "������� ������ ����������� ������: \n";
	cout << "������: ";
	cin >> usrentr;
	cout << "������: ";
	cin >> usrentr2;
	usrentr--;
	usrentr2--;

	n++; //���������� n �� �����������(�������� �� 1) �������� �������

	for (int j = 0; j < n; j++) { Matrix1[usrentr][j] = Matrix1[usrentr2][j]; Matrix1[j][usrentr] = Matrix1[usrentr2][j]; } //���� ��� ��������� �������� � ������ �������

	for (int i = 0; i < n; i++) {
		for (int m = 0 + pogr; m < n; m++) {
			if (i == m || i == usrentr2 || m == usrentr2) {}
			else if (m > usrentr2 && i < usrentr2) { Matrix3[i][m - 1] = Matrix1[i][m]; Matrix3[m - 1][i] = Matrix1[m][i]; }
			else if (m > usrentr2 && i > usrentr2) { Matrix3[i - 1][m - 1] = Matrix1[i][m]; Matrix3[m - 1][i - 1] = Matrix1[i][m]; }
			else { Matrix3[i][m] = Matrix1[i][m]; Matrix3[m][i] = Matrix1[m][i]; }
		}
		pogr++;
	}
	cout << endl;

	n--; //��������� n ��� �������������� �� ������ ��������(�� n-1 � n-1)

	Matrix1 = (int**)calloc(n, 3);
	for (int j = 0; j < n; j++) { Matrix1[j] = (int*)calloc(n, 3); }

	for (int i = 0; i < n; i++) {
		for (int m = 0; m < n; m++) {
			Matrix1[i][m] = Matrix3[i][m];
			Matrix1[m][m] = 0;
			cout << Matrix1[i][m] << " ";
		}
		cout << endl;
	}
}

void Raschep() {

	Matrix3 = (int**)calloc(n, 3);
	for (int j = 0; j < n; j++) { Matrix3[j] = (int*)calloc(n, 3); }
	//��������� ������� �� ���� ������ � �������

	cout << "������� ����� �������, ������� ������ ���������: ";
	cin >> usrentr;
	usrentr--;
	n--;//��������� n ��� �������������� �� ������ ��������(�� n-1 � n-1)

	if (usrentr > n || usrentr < 0) { cout << "\n������������ ����. ��������� �������." << endl; return; }
	//������������ ���� ������������

	for (int i = 0; i < n; i++) {
		for (int m = 0; m < n; m++) {
			if (i == usrentr) { Matrix3[n][m] = Matrix1[i][m]; Matrix3[m][n] = Matrix3[n][m]; }
			else { Matrix3[i][m] = Matrix1[i][m]; Matrix3[m][i] = Matrix1[m][i]; }
		}
	}

	Matrix3[usrentr][n] = 1;
	Matrix3[n][usrentr] = 1;
	//� ������������ ������ ������ ���� ����������� �����

	n++; //���������� n �� �����������(�������� �� 1) �������� �������
	Matrix1 = (int**)calloc(n, 3);
	for (int j = 0; j < n; j++) { Matrix1[j] = (int*)calloc(n, 3); }

	for (int i = 0; i < n; i++) {
		for (int m = 0; m < n; m++) {
			Matrix1[i][m] = Matrix3[i][m];
			Matrix1[m][m] = 0;
			cout << Matrix1[i][m] << " ";
		}
		cout << endl;
	}
	cout << "\n������� " << usrentr + 1 << " ���� ���������� � ������� " << n << endl;
}

int main() {

	setlocale(LC_ALL, "Rus");
	srand(time(0));

	//������� 1//

	cout << "������� ����������� �������: ";
	cin >> n;

	if (n <= 0) { cout << "\n������������ ����. ��������� �������.\n"; return 0; } //������������ �� ����

	Matrix1 = (int**)calloc(n, 3);
	for (int j = 0; j < n; j++) { Matrix1[j] = (int*)calloc(n, 3); }
	cout.precision(3 * n);

	for (int i = 0; i < n; i++) {
		for (int m = 0 + pogr; m < n; m++) {
			Matrix1[i][m] = 0 + rand() % 2;
			Matrix1[m][i] = Matrix1[i][m];
			Matrix1[i][i] = 0;
		}
		pogr++;
	}

	//������� 2//

	while (choose != 4) {

		system("cls");

		cout << "\n������� �1:" << endl;
		for (int i = 0; i < n; i++) {
			for (int m = 0; m < n; m++) { cout << Matrix1[i][m] << " "; }
			cout << endl;
		}

		cout << "\n1.������������ �������" << endl;
		cout << "2.������� ����" << endl;
		cout << "3.����������� �������" << endl;
		cout << "4.�����\n" << endl;
		cout << "\n�������� �������� ��� ����������: ";

		cin >> choose;

		switch (choose) {

		case 1://�������������� ������
			n--;
			Otogdestvlenie();
			_getch();
			break;

		case 2://���������� �����
			n--;
			Stuagivanie();
			_getch();
			break;

		case 3: //����������� �������
			n++;
			Raschep();
			_getch();
			break;

		case 4:
			cout << "\n����� �� ���������." << endl;
			break;

		default:
			cout << "\n������������ ����. ��������� �������." << endl;
			break;
		}
	}
	return 0;
}