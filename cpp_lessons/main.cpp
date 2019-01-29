// урок 5 массивы, русский ввод
// уроки по cpp https://ravesli.com/uroki-cpp/   https://code-live.ru/tag/cpp-manual/


#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main()
{
    SetConsoleOutputCP(1251); //Вывод
	SetConsoleCP(1251);		  // Ввод
	//setlocale(LC_ALL, "Russian");

	string students[3] = { "Иванов", "Петров", "Сидоров" };
	// вывод 1 - если объявить переменную прямо в теле цикла for, то когда заканчивается тело цикла, эта переменная исчезает
	for (int i = 0; i < 3; i++) {
		cout << "for " << students[i] << endl;
		}

	// вывод 2 - можно использовать локальную переменную в цикле for, достаточно ее объявить в условии цикла, она не будет влиять на одноименную переменную вне цикла
	int i = 30; 
	for (int i = 0; i < 3; i++) {
		cout << "for " << students[i] << endl;
	}
		cout << "переменная i объявлена внутри цсловия цикла for и не влияет на внешнюю переменную i (выведет 30) " << i << endl;
		string students1[3];
		for (i = 0; i < 3; i++) {
			cout << endl << "напишите фамилию студента";
			cin >> students1[i];
			cout << "for " << "i=" << i << " " <<students1[i] << endl;
		}
	cout << "цикл for использует внешнюю переменну i, которая объявлена заранее (выведет не 2, а 3, т.к. i++ выполняется после проверки i < 3 ) " << i << endl;
	
	while (i < 3) {
		cout << "while " << students[i] << endl;
		i++;
	}
		cout << " адрес STUDENTS " << students << endl;
	system("pause");
	return 0;
}
