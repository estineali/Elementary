#pragma once
#include <stdio.h>
#include <iostream>
#include <string>

class Questions
{
private:
	std::string m_question;
	std::string choice_a;
	std::string choice_b;
	std::string choice_c;
	std::string choice_d;
	int answer_score;
	//need buttons?

public:
	Questions(std::string ques);
	~Questions();
	void show_question();
	void set_answer(std::string, char choice_letter);
	int get_score();

};