// урок 7 указатели
// уроки по cpp https://ravesli.com/uroki-cpp/   https://code-live.ru/tag/cpp-manual/
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(1251); //Вывод
	SetConsoleCP(1251);		  // Ввод
	int a; //объявление статической переменной
	int b = 5; //инициализация статической переменной
	int *c = new int; //объявление указалется для переменной типа int
	int *d = new int(5); //инициализация указателя для переменной типа int
	int* ptr_a = &a; // указатель ptr_a "смотрит" на a
	*c = 10;
	cout << "*c = " << *c << endl;
	cout << "*d = " << *d << endl;
	a = 15;
	cout << "*ptr_a = " << *ptr_a << endl; //выводится переменная a
	cout << "ptr_a = " << ptr_a << endl; //выводится адрес переменной a
	float *e = new float(3.14);
	a = 3 + 5 + *c + b;
	cout << "*ptr_a = " << *ptr_a << endl; //выводится переменная a
	cout << "*float *e = " << *e - 0.01 << endl; //выводится резултат работы с переменной e типа float
	delete e; // освобождает место
		cout << "*float *e = " << *e - 0.01 << endl; //вызывает останов программы
		?
	
	system("pause");
	return 0;
}
