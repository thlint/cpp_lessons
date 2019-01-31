// подсчет строк во входном файле.
// уроки по cpp https://ravesli.com/uroki-cpp/   https://code-live.ru/tag/cpp-manual/
#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
using namespace std;
int main(int argcount, char *argv[]) //количество аргументов-параметров командной строки, указатель на массив argv[] с аргументами argv[0] - имя запускаемой программы
{
    SetConsoleOutputCP(1251); //Вывод русских символов
	SetConsoleCP(1251);		  // Ввод
	if (argcount < 3) {
		cout << "Укажите файл со списком разрешенных адресов и файл со списком адресов для блокировки в параметрах командной строки" << endl;
		cout << "например remove_addr.exe emails.txt emails_to_block.txt" << endl;
		cout << "на основе emails.txt будет создан новый сокращенный файл - emails2.txt " << endl << "в emails2.txt будут удаленны адреса по списку из emails_to_block.txt" << endl;
		return 0;
		system("pause");
	}
		int count_line_emails = 0; // инициируем кол-во строк в файле
		string line_from_file; // для очередной строки из файла
		ifstream input_file_with_emails; 
		input_file_with_emails.open(argv[1]);// открываем файл (имя из первого аргумета) для чтения 
		while (getline(input_file_with_emails, line_from_file)) count_line_emails++; // в файле всего count_line_emails строк
		input_file_with_emails.close();  //закрыли файл
		string *all_emails = new string[count_line_emails]; // динамические массив, обращение к элементу all_lines[i]
		input_file_with_emails.open(argv[1]); //повтороное открытие файла
		for (int i = 0; i < count_line_emails; i++) getline(input_file_with_emails, all_emails[i]); // заполняем динамический массив строк  *all_emails
		input_file_with_emails.close();  //закрыли файл
					
		for (int i = 0; i < count_line_emails; i++) cout << "очередная строка из файла с адресами " << all_emails[i] << endl;  // проверка входного файла

		ifstream input_file_with_blocks;
		input_file_with_blocks.open(argv[2]);

	system("pause");
	return 0;
}
