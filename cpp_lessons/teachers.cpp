/* teachers.cpp */
#include <string>
#include "teachers.h"
void Teachers::set_name(std::string name) { Teachers::teachers_name = name; }//��������������� ����� - ��������� ����� 
std::string Teachers::get_name() { return  Teachers::teachers_name; }//����� - ��������� ����� 