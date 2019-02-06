// Классы
// уроки по cpp https://ravesli.com/uroki-cpp/   https://code-live.ru/tag/cpp-manual/
#include <iostream>
#include "students.h"
#include "windows.h"
using namespace std;
int main()
{
    SetConsoleOutputCP(1251); //Вывод русских символов
	SetConsoleCP(1251);		  // Ввод

	Students student; // создание объекта student. В указании класса важен регистр!
	// std::string name;
	string name = "Иван", lastname = "Иванов";
	student.set_name(name); //сохранение имени в объект student класса Students
	student.set_last_name(lastname);
	int scores[5] = { 3,4,4,5,5 }, sum = 0; //инициализируем массив оценками а сумму нулем
	student.set_scores(scores);
	for (int i = 0; i < 5; i++) sum += scores[i];
	float average_ball = sum / 5;
	student.set_average_ball(average_ball);
	

//	system("pause");
	for (int i = 0; i < 5; i++) cout << student.get_scores(i) << endl;
	system("pause");
	return 0;
}
