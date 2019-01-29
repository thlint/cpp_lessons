// урок 6 функции
// уроки по cpp https://ravesli.com/uroki-cpp/   https://code-live.ru/tag/cpp-manual/


#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
void dim3_output(string dim_for_output[3]) { // void - значит функция как процедура - не выводит значения (нет типа)
		for (int i = 0; i < 3; i++) {
			cout << "функция выводит очередное значение " << dim_for_output[i] << " длина значения dim_for_output[0].size() = " << dim_for_output[i].size()  << endl;
	}
}

string my_string_concat(string my_str1, string my_str2, int i) {
	string my_output_str = "всегда одно и то же";
	cout << "Функция выводит " << my_output_str << endl;
	string i_string;
	my_output_str = my_str1 + my_str2;
	return my_output_str;
}

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
			cout << "for " << "i=" << i << " " << students1[i] << endl;
		}
	
		cout << "Используем функцию для вывода массива ------------- i=" << i << endl;
		dim3_output(students1);
		cout << "Использовали функцию для вывода массива -------------i= " << i << endl;
		
		cout << "Используем функцию ------------ " << endl;
		cout << "Функция вернула " << my_string_concat(" Строка 1 ", " Строка 2 ", 2) << endl;
		cout << "Использовали функцию ----------- " << endl;

		cout << "цикл for использует внешнюю переменну i, которая объявлена заранее (выведет не 2, а 3, т.к. i++ выполняется после проверки i < 3 ) " << i << endl;
	
	while (i < 3) {
		cout << "while " << students[i] << endl;
		i++;
	}
		cout << " адрес STUDENTS " << students << endl;
	system("pause");
	return 0;
}
