#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
//	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "������!" << endl;
	int a, b, c; //���������� ���������� a b ������ ���� ������
	cout << "������� ������ �����: ";
	cin >> a; //���� �������� ������������� � ���������� a
	cout << "������� ������ �����: ";
	cin >> b;
	cout << "������� ������ �����: ";
	cin >> c;
	int d = a + b; //������������� ���������� d � ����������� ����� 
	int e = d * c; //������������� ���������� e � ����������� ������������ 
	cout << endl << "����� ������� ���� ����� = " << d << endl; //����� ������
	cout << endl << "�� ������������ �� ������ ����� = " << e << endl; //����� ������
	system("pause");
	return 0;
}
