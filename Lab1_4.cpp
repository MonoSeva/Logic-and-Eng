#include <iostream>
#include <ctime>
using namespace std;

int Mass3[10][10], x = 10, y = 10, Sum = 0;// ��������� ������ 10*10

int main() {

    setlocale(LC_ALL, "Russian");
    srand(time(0));


    for (int i = 0; i < x; i++) {//�������� �� ��� �
        for (int h = 0; h < y; h++) { // �������� �� ��� �
            Mass3[i][h] = 1 + rand() % 100; // �������� �� ����� � -�� � ���������� � � �������, � ����� ������ ��������� �
        }
    }

    for (int i = 0; i < x; i++) {//������ �� �
        Sum = 0;
        cout << "������ " << i << ": ";
        for (int h = 0; h < y; h++) { // ������ �� �
            Sum += Mass3[i][h]; // ����������� � ��� ������� ��-�� � ������
            cout << Mass3[i][h] << " "; // ������������ �������� ������
        }
        cout << endl;//������� �� ����� ������ � �������
        cout << "����� ������ " << i << ": " << Sum << endl;
    }

    return 0;
}
