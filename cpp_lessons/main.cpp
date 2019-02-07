// Классы
// уроки по cpp https://ravesli.com/uroki-cpp/   https://code-live.ru/tag/cpp-manual/
#include <iostream>
#include "students.h"
#include "windows.h"
#include "teachers.h"
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
	float average_ball = sum / 15;
	student.set_average_ball(average_ball);

	for (int i = 0; i < 5; i++) cout << student.get_scores(i) << endl;
	cout << "Cредний балл = " << student.get_average_ball() << endl;
	student.set_average_ball_auto();
	cout << "Cредний авто балл = " << student.get_average_ball() << endl;
	system("pause");
// teachers
	Teachers teacher;
	teacher.set_name("ИЛЬЯСОВ");
	cout << endl << teacher.get_name() << endl;
	system("pause");
	return 0;
}
