// урок 4 массивы.
// уроки по cpp https://ravesli.com/uroki-cpp/   https://code-live.ru/tag/cpp-manual/


#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
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
		cout << "переменная i объявлена внутри цсловия цикла for и не влияет на внешнюю переменную i " << i << endl;
	for (i = 0; i < 3; i++) {
			cout << "for " << students[i] << endl;
		}
	cout << "цикл for использует внешнюю переменну i, которая объявлена заранее " << i << endl;
	
	while (i < 3) {
		cout << "while " << students[i] << endl;
		i++;
	}
		cout << " адрес STUDENTS " << students << endl;
	system("pause");
	return 0;
}
