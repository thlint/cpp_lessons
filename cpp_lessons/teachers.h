#pragma once  /* «ащита от двойного подключени€ заголовочного файла */
#include <string>
class Teachers
{
public:
//							абстракци€ данных
	void set_name(std::string); // прототипы методов (т.е. только тип возвращаемого значени€ и название )
	std::string get_name(); //прототип метода
private:
	std::string teachers_name;
};