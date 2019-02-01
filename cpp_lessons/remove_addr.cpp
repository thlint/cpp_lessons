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
// выясняем сколько строк в файле с блокировками
		int lines_count = 0; // инициируем кол-во строк в файле
		string line_from_file; // для очередной строки из файла
		ifstream f2blocks; 
		f2blocks.open(argv[2]);// открываем файл с блокировками для чтения 
		while (getline(f2blocks, line_from_file)) lines_count++; // в файле блокировок всего lines_count строк
		f2blocks.close();  //закрыли файл
// заполняем строковый динамический массив array2blocks
		string *array2blocks = new string[lines_count]; // динамические массив, обращение к элементу array2blocks[i]
		f2blocks.open(argv[2]); //повтороное открытие файла
		for (int i = 0; i < lines_count; i++) getline(f2blocks, array2blocks[i]); // заполняем динамический массив строк  *array2blocks
		f2blocks.close();  //закрыли файл и забыли про него
// получаем имя выходного файла					
		string new_file_name = argv[1];
		int insert_position = new_file_name.find(".txt"); //ищем номер позиции в имени файла перед .txt
		new_file_name.insert(insert_position,"2");
// создаем объекты для записи и чтения, связываем их с файлами
		ifstream f_emails(argv[1]);
		ofstream f_new_file(new_file_name);
		bool need_block; // нужно ли блокировать данный адрес из входного файла с адресами
		int count_blocked_address = 0; //количество заблокированных адресов
		while (getline(f_emails, line_from_file)) {
			need_block = false;
			for (int i = 0; i < lines_count; i++) if (array2blocks[i] == line_from_file) need_block = true;
			if (!need_block) f_new_file << line_from_file << endl;
			else count_blocked_address++;
		}
		f_emails.close();
		f_new_file.close();
		cout << "Всего заблокировано " << count_blocked_address << " адресов." << endl;
//	system("pause");
	return 0;
}
