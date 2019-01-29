// Уроки 1-4
// уроки по cpp https://ravesli.com/uroki-cpp/   https://code-live.ru/tag/cpp-manual/


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
//	cin >> a; //ввод значения пользователем в переменную a
	cout << "Введите второе число: ";
//	cin >> b;
	a = 4;
	b = 6;
	c = 10;
	cout << "Третье число = " << c << endl;
	long long int d = a + b; //инициализация переменной d с присвоением суммы до 64 бит[+−9 223 372 036 854 775 807]
	int e = d * c; //инициализация переменной e с присвоением произведения 
	cout << endl << "Сумма первых двух чисел = " << d << endl; //вывод ответа
	cout << endl << "Их произведение на третье число = " << e << endl; //вывод ответа
	double num; // объявляем переменную num типа двойной точности с плавающей точкой
	num = d; // сумма первых двух введенных чисел
	num = num - 0.000001;
	cout << num << " Это число типа double выводим через cout" << endl;
	printf("Выводим число double через printf mun = %.10lf \n", num); //для double пишем %.10lf для float пишем %.10f
	float num_f = num;
	printf("Выводим число float через printf mun_f = %.10f \n", num_f); //для double пишем %.10lf для float пишем %.10f
	if (num < 10) cout << "Сумма чисел = " << num << " меньше 10" << endl; // простое условие
	else cout << "Сумма чисел = " << num << " не меньше 10" << endl;  // эту строчку можно опустить
	
// оператор ELSE IF(УСЛОВИЕ 2) выполняется только в том случае, если первое условие IF дает значение ЛОЖЬ
	if (num < 10) cout << "Первый if. Сумма чисел = " << num << " меньше 10" << endl; 
	else if (num == 10) cout << "Первый if. Сумма чисел = " << num << " равна 10" << endl;  // эту строчку можно опустить
	else cout << "Первый if. Все остальные варианты, кроме if и else if" << endl;  // эту строчку можно опустить

	if (num < 10) {
		cout << "Сумма чисел = " << num << " меньше 10" << endl;
		int k = 1;
	}
	else if (num == 10) {
		cout << "Сумма чисел = " << num << " равна 10" << endl;
		int k = 2;
	}
	else if (num == 10) {
		cout << "Сумма чисел = " << num << " равна 10 - второй else if" << endl;
		int k = 3;
	}
	else {
		cout << "Все остальные варианты" << endl;
		int k = 4;
	}
	//					ЦИКЛЫ
	int i;
	for (i = 1; i <= 10; i++) {
		num_f = i;
		printf("i = %.10f \n", num_f);
	};
	// while
	i = 0;
	while (i <= 10) {
		i++;
		printf("while num_f+i = %.10f \n", num_f+=i);  //num_f = num_f + i
	}
	// do while
	i = 0;
	do {
		i++;
		printf("do while num_f+i = %.10f \n", num_f += i);  //num_f = num_f + i
	} while (i <= 10);
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
