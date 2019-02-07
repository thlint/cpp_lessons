#pragma once
#include <string>
class Students {
public:
	void set_name(std::string student_name) { name = student_name; }//��������� ����� ��������
	std::string get_name() { return name; } //��������� ����� ��������
	void set_last_name(std::string student_last_name) 
	{ 
		last_name = student_last_name;  //��������� ������� ��������
	}
	std::string get_last_name() { return last_name; } //��������� ������� ��������
	void set_scores(int student_scores[]) //��������� ������������� ������
	{		for (int i = 0; i < 5; i++) scores[i] = student_scores[i]; 	}
	
	int get_scores(int ii) { return scores[ii]; }
	void set_average_ball(float ball) { average_ball = ball; } // ��������� �������� �����
	void set_average_ball_auto() {// �������������� ��������� �������� �����
		average_ball = 0;
		int sum_ball = 0;
		for (int i = 0; i < 5; i++) sum_ball += scores[i];
		average_ball = sum_ball / 5;
	}
	float get_average_ball() { return average_ball; } // ��������� �������� �����
private:
	int scores[5]; // ������������� ������
	float average_ball; //������� ����
	std::string name;
	std::string last_name;
	};