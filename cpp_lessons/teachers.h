#pragma once  /* ������ �� �������� ����������� ������������� ����� */
#include <string>
class Teachers
{
public:
//							���������� ������
	void set_name(std::string); // ��������� ������� (�.�. ������ ��� ������������� �������� � �������� )
	std::string get_name(); //�������� ������
private:
	std::string teachers_name;
};