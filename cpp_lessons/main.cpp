#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
//	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Привет!" << endl;
	int a, b, c; //Объявление переменных a b целого типа данных
	cout << "Введите первое число: ";
	cin >> a; //ввод значения пользователем в переменную a
	cout << "Введите второе число: ";
	cin >> b;
	cout << "Введите третье число: ";
	cin >> c;
	int d = a + b; //инициализация переменной d с присвоением суммы 
	int e = d * c; //инициализация переменной e с присвоением произведения 
	cout << endl << "Сумма первыйх двух чисел = " << d << endl; //вывод ответа
	cout << endl << "Их произведение на третье число = " << e << endl; //вывод ответа
	system("pause");
	return 0;
}
