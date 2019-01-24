#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
//	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Привет!" << endl;
	int a; //Объявление переменной a целого типа данных
	long int b; // b от [-2 147 483 648 до +2 147 483 647]
	unsigned short int c;
	// float - плавающая зпт, double - float*2 , char - символьный, bool - логический тип; long int 4 байта;
	cout << "Введите первое число: ";
	cin >> a; //ввод значения пользователем в переменную a
	cout << "Введите второе число: ";
	cin >> b;
	cout << "Введите третье число: ";
	cin >> c;
	long long int d = a + b; //инициализация переменной d с присвоением суммы до 64 бит[+−9 223 372 036 854 775 807]
	int e = d * c; //инициализация переменной e с присвоением произведения 
	cout << endl << "Сумма первыйх двух чисел = " << d << endl; //вывод ответа
	cout << endl << "Их произведение на третье число = " << e << endl; //вывод ответа
	system("pause");
	return 0;
}
